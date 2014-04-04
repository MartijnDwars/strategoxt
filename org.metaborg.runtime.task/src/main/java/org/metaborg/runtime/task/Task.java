package org.metaborg.runtime.task;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public final class Task {
	public final IStrategoTerm instruction;
	public final IStrategoList initialDependencies;

	// TODO: move these to task (type) definition, this is wasting space.
	public final TaskType type;
	public final boolean shortCircuit;

	private IStrategoTerm instructionOverride = null;
	private List<IStrategoTerm> results = Lists.newLinkedList();
	private TaskStatus status = TaskStatus.Unknown;
	private IStrategoTerm message;
	private long time = -1;
	private short evaluations = 0;

	public Task(IStrategoTerm instruction, IStrategoList initialDependencies, TaskType taskType, boolean shortCircuit) {
		this.instruction = instruction;
		this.initialDependencies = initialDependencies;

		this.type = taskType;
		this.shortCircuit = shortCircuit;
	}

	public Task(Task task) {
		this.instruction = task.instruction;
		this.initialDependencies = task.initialDependencies;

		this.type = task.type;
		this.shortCircuit = task.shortCircuit;

		this.instructionOverride = task.instructionOverride;
		this.results = Lists.newLinkedList(task.results);
		this.status = task.status;
		this.message = task.message;
		this.time = task.time;
		this.evaluations = task.evaluations;
	}

	public IStrategoTerm instruction() {
		if(instructionOverride == null)
			return instruction;
		return instructionOverride;
	}

	public void overrideInstruction(IStrategoTerm newInstruction) {
		instructionOverride = newInstruction;
	}

	public IStrategoTerm instructionOverride() {
		return instructionOverride;
	}

	public void clearInstructionOverride() {
		instructionOverride = null;
	}


	public Iterable<IStrategoTerm> results() {
		return results;
	}

	public boolean hasResults() {
		return !results.isEmpty();
	}

	public void setResults(Iterable<IStrategoTerm> results) {
		this.results = Lists.newLinkedList(results);
		status = TaskStatus.Success;
	}

	public void addResults(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
		status = TaskStatus.Success;
	}

	public void addResult(IStrategoTerm result) {
		results.add(result);
		status = TaskStatus.Success;
	}


	public TaskStatus status() {
		return status;
	}

	public void setStatus(TaskStatus status) {
		this.status = status;
	}

	public boolean failed() {
		return status == TaskStatus.Fail || status == TaskStatus.DependencyFail;
	}

	public void setFailed() {
		status = TaskStatus.Fail;
	}

	public boolean dependencyFailed() {
		return status == TaskStatus.DependencyFail;
	}

	public void setDependencyFailed() {
		status = TaskStatus.DependencyFail;
	}

	public boolean solved() {
		return status != TaskStatus.Unknown;
	}

	public void unsolve() {
		results.clear();
		status = TaskStatus.Unknown;
	}


	public IStrategoTerm message() {
		return message;
	}

	public void setMessage(IStrategoTerm message) {
		this.message = message;
	}

	public void clearMessage() {
		message = null;
	}


	public long time() {
		return time;
	}

	public void setTime(long time) {
		this.time = time;
	}

	public void addTime(long time) {
		this.time += time;
	}

	public void clearTime() {
		time = -1;
	}


	public short evaluations() {
		return evaluations;
	}

	public void setEvaluations(short evaluations) {
		this.evaluations = evaluations;
	}

	public void addEvaluation() {
		++evaluations;
	}

	public void clearEvaluations() {
		evaluations = 0;
	}


	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((initialDependencies == null) ? 0 : initialDependencies.hashCode());
		result = prime * result + ((instruction == null) ? 0 : instruction.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if(this == obj)
			return true;
		if(obj == null)
			return false;
		if(getClass() != obj.getClass())
			return false;
		Task other = (Task) obj;
		if(initialDependencies == null) {
			if(other.initialDependencies != null)
				return false;
		} else if(!initialDependencies.equals(other.initialDependencies))
			return false;
		if(instruction == null) {
			if(other.instruction != null)
				return false;
		} else if(!instruction.equals(other.instruction))
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "Task [instruction=" + instruction + ", type=" + type + ", results=" + results
			+ ", status=" + status + ", message=" + message + ", time=" + time + ", evaluations=" + evaluations + "]";
	}
}
