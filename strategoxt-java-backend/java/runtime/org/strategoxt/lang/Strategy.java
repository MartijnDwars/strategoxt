package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * An abstract strategy class. Inheritor classes should implement one
 * of the invoke() overloads or invokeDynamic() as appropriate.
 * 
 * @see DynamicStrategy
 *        An abstract strategy class where invokeDynamic() should be implemented.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class Strategy implements IStrategy {
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * Implementing classes should override this method
	 * and the corresponding <code>invoke()</code> method
	 * (if applicable).
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			IStrategy[] s, IStrategoTerm[] t) {

		switch (s.length) {
			case 0:
				switch (t.length) {
					case 0: return invoke(context, current);
					case 1: return invoke(context, current, t[0]);
					case 2: return invoke(context, current, t[0], t[1]);
					case 3: return invoke(context, current, t[0], t[1], t[2]);
					case 4: return invoke(context, current, t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 1: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0]);
					case 1: return invoke(context, current, s[0], t[0]);
					case 2: return invoke(context, current, s[0], t[0], t[1]);
					case 3: return invoke(context, current, s[0], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 2: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1]);
					case 1: return invoke(context, current, s[0], s[1], t[0]);
					case 2: return invoke(context, current, s[0], s[1], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 3: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1], s[2]);
					case 1: return invoke(context, current, s[0], s[1], s[2], t[0]);
					case 2: return invoke(context, current, s[0], s[1], s[2], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 4: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1], s[2], s[3]);
					case 1: return invoke(context, current, s[0], s[1], s[2], s[3], t[0]);
					case 2: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2], t[3], t[4]);
				}
		}
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategy s3, IStrategy s4, IStrategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}
	
	public String getName() {
		return getClass().getSimpleName();
	}
	
	@Override
	public String toString() {
		return getName();
	}
}