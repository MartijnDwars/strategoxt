package org.strategoxt.lang;

import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class StrategyCollector {

	private Map<String, List<Strategy>> strategyImplementators;
	private Map<String, Strategy> strategyExecutors;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<Strategy>>();
		this.strategyExecutors = new HashMap<String, Strategy>();
	}

	public void registerStrategyImplementator(String name, Strategy implementator) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {
			implementators = new LinkedList<Strategy>();
			this.strategyImplementators.put(name, implementators);
		}
		implementators.add(implementator);
	}

	private Strategy[] getStrategyImplementators(String name) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {

			throw new RuntimeException("No implementators found for strategy " + name);

		}
		Strategy[] fastImplementators = new Strategy[implementators.size()];
		int index = 0;
		for (Strategy s : implementators) {
			fastImplementators[index] = s;
			index++;
		}
		return fastImplementators;
	}

	private void registerStrategyExecutor(String name, Strategy executor) {
		this.strategyExecutors.put(name, executor);
	}

	public Strategy getStrategyExecutor(String name) {
		Strategy s = this.strategyExecutors.get(name);
		if (s == null) {
			System.out.println("No implementator found. Try to resolve classpath " + name);
			final List<String> packages = Arrays.asList("org.strategoxt.stratego_lib", "org.strategoxt.lang");
			for (String packageName : packages) {
				try {
					Class<? extends Strategy> strategyClass = (Class<? extends Strategy>) StrategyCollector.class.getClassLoader().loadClass(
							packageName + "." + name);
					Field instanceField = strategyClass.getDeclaredField("instance");
					return (Strategy) instanceField.get(null);

				} catch (Exception e) {

				}
			}
			System.out.println("Failed");
			throw new RuntimeException("No executor found for strategy " + name);
		}
		return s;
	}

	public void createExecutors() {
		for (String strategyName : this.strategyImplementators.keySet()) {
			Strategy[] s = this.getStrategyImplementators(strategyName);
			if (s.length == 1) {
				this.registerStrategyExecutor(strategyName, s[0]);
			} else {
				this.registerStrategyExecutor(strategyName, new StrategyExecutor(s));
			}
		}
	}

}