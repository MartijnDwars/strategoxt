package org.strategoxt.lang;

import static org.spoofax.interpreter.core.Tools.*;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.stratego_lib.log_0_3;
import org.strategoxt.stratego_lib.report_failure_1_0;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SSL_EXT_report_failure_1_0 extends report_failure_1_0 {
	
	private report_failure_1_0 proceed = instance;
	
	private final LogIntercept logIntercept = new LogIntercept();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		synchronized (this) {
			try {
				logIntercept.enabled = true;
				logIntercept.lastMessage = null;
				logIntercept.lastTerm = null;
				return proceed.invoke(context, current, s);
			} catch (StrategoExit e) {
				if (logIntercept.lastMessage != null && isTermString(logIntercept.lastMessage)) {
					throw new StrategoErrorExit(asJavaString(logIntercept.lastMessage), logIntercept.lastTerm);
				} else {
					throw new StrategoExit(e);
				}
			} finally {
				logIntercept.enabled = false;
			}
		}
	}
	
	/**
	 * Intercepts logging messages.
	 */
	private class LogIntercept extends log_0_3 {
		
		private final log_0_3 proceed = instance;
		
		IStrategoTerm lastTerm;
		
		IStrategoTerm lastMessage;
		
		boolean enabled;
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm level, IStrategoTerm message, IStrategoTerm term) {
			if (enabled) {
				synchronized (SSL_EXT_report_failure_1_0.this) {
					if (enabled) {
						lastTerm = term;
						lastMessage = message;
					}
				}
			}
			return proceed.invoke(context, current, level, message, term);
		}
	}
}







