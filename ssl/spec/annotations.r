\literate[annotations]
   \begin{abstract}
	This module defines primitives for getting and setting term
	annotations. The preferred way to access annotations, however,
	is through the term syntax t1{t2}, which allows matching and
	building terms with annotations.
   \end{abstract}
\begin{code}
module annotations
signature
  constructors
    Anno : a * b -> a
strategies

  get-annotations = 
    ?t; prim("SSLgetAnnotations", t)

  get-annos = 
    get-annotations

  set-annotations = 
    ?(t, a); prim("SSLsetAnnotations", t, a)

  set-annos = 
    set-annotations
 
  set-anno = 
    ?(t, a); !(t, [a]); set-annos

  rm-annotations = 
    ?t; prim("ATremoveAnnotations", t)

  has-annos = 
    ?_{_}

  has-annotation = 
    where(get-annotations; not([]))

  if-annotation(s1, s2) =
    has-annotation < s1 + s2

  strip-annos = 
    bottomup(rm-annotations)

  catch-annos = 
    rec x(has-annotation < !Anno(<rm-annotations; all(x)>, <get-annotations>) + all(x))

  preserve-annotation(s) =
    has-annotation < Preserve-Annotation(s) + s

  Preserve-Annotation(s):
    t{a*} -> r{a*}
    where <s> t => r
\end{code}

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
