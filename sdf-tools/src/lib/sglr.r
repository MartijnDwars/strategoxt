module sglr
imports exec gt-paths asfix

rules

  sglr : (tbl, 'in, out) -> out
	 where
           <call> (<concat-strings>[SGLR, "/bin/sglr"], ["-2", "-p", tbl, "-i", 'in, "-o", out])


  sglr : (tbl, 'in) -> tree
 	 where
	  <conc-strings> ("/tmp/sglr", <get-pid; int-to-string>()) => out; 
	  <sglr> (tbl, 'in, out);
	  <ReadFromFile> out => parsetree(tree,_);
	  <rm-files> [out]
