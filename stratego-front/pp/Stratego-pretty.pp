[
   "stratego-0" -- _1,
   Definition -- V[_1],
   Definition.1:iter-star -- _1,

   Module -- V[H[KW["module"] _1] _2],
   Module.2:iter-star -- _1,
   Specification -- V  is=2 [H  [KW["specification"]] _1],
   Specification.1:iter-star -- _1,
   Script -- V  [H  [KW["stratego"] KW["script"]] _1],
   Script.1:iter-star -- _1,
   Command -- _1,
   Dump -- KW[":dump"] _1,
   Load -- KW[":load"] _1,
   Eval -- KW[">"] _1,
   Imports -- H  [KW["imports"] _1],
   Imports.1:iter-star -- _1,
   Rules -- V  is=2 [H  [KW["rules"]] V vs=1[_1]],
   Rules.1:iter-star -- _1,
   Strategies -- V  is=2 [H  [KW["strategies"]] V vs=1[_1]],
   Strategies.1:iter-star -- _1,
   Signature -- V  is=2 [H  [KW["signature"]] _1],
   Signature.1:iter-star -- _1,
   Overlays -- V  is=2 [H  [KW["overlays"]] _1],
   Overlays.1:iter-star -- _1,
   Sorts -- V  [H  [KW["sorts"]] _1],
   Sorts.1:iter-star -- _1,
   Constructors -- V  is=2 [H  [KW["constructors"]] _1],
   Constructors.1:iter-star -- _1,
   SortNoArgs -- _1,
   Sort -- _1 KW["("] _2 KW[")"],
   Sort.2:iter-star-sep -- _1 KW[","],
   Star -- KW["*"],
   StarStar -- KW["**"],
   OpDecl -- H[_1 KW[":"] _2],
   ConstType -- _1,
   FunType -- _1 KW["->"] _2,
   FunType.1:iter-sep -- _1 KW["*"],
   Var -- _1,
   ListVar -- _1,
   Wld -- KW["_"],
   Int -- _1,
   Real -- _1,
   Str -- _1,
   Char -- _1,
   BuildDefault -- KW["_"] _1,
   Inj -- _1,
   Con -- _1 _2,
   Op -- H hs=0[_1 KW["("] H[_2] KW[")"]],
   Op.2:iter-star-sep -- H hs=0[_1 KW[","]],
   As -- _1 KW["@"] _2,
   Tuple -- H hs=0[KW["("] H hs=0[_1] KW[")"]],
   Tuple.1:iter-star-sep -- H hs=0[_1 KW[","]],
   App -- H[H hs=0[KW["<"] _1 KW[">"]] _2],
   List -- KW["["] _1 KW["]"],
   List.1:iter-star-sep -- _1 KW[","],
   ListTail -- KW["["] _1 KW["|"] _2 KW["]"],
   ListTail.1:iter-star-sep -- _1 KW[","],
   Explode -- _1 KW["#"] KW["("] _2 KW[")"],
   RootApp -- H hs=0[KW["<"] _1 KW[">"]],
   Anno -- _1 KW["{"] _2 KW["}"],
   Con1 -- KW["["] _1 KW["]"],
   Con2 -- KW["["] _1 KW["]"] KW["("] _2 KW[")"],
   Con3 -- KW["["] _1 KW["where"] _2 KW["]"],
   Con4 -- KW["["] _1 KW["where"] _2 KW["]"] KW["("] _3 KW[")"],
   RDefNoArgs -- V is=2[H[_1 KW[":"]] _2],
   RDef -- V is=2[H[_1 KW["("] _2 KW[")"] KW[":"]] _3],
   RDef.2:iter-star-sep -- _1 KW[","],
   SRDefNoArgs -- _1 KW["::"] _2,
   SRDef -- _1 KW["("] _2 KW[")"] KW["::"] _3,
   SRDef.2:iter-star-sep -- _1 KW[","],
   RuleNoCond -- V[H[_1 KW["->"]] _2],
   Rule -- V[H[_1 KW["->"]] _2 H[KW["where"] _3]],
   StratRuleNoCond -- _1 KW["-->"] _2,
   StratRule -- _1 KW["-->"] _2 KW["where"] _3,
   Fail -- KW["fail"],
   Id -- KW["id"],
   SVar -- _1,
   Let -- KW["let"] _1 KW["in"] _2,
   Let.1:iter-star -- _1,
   Let.1:iter-star.1:alt -- _1 _2,
   CallNoArgs -- _1,
   Call -- H hs=0[_1 KW["("] H[_2] KW[")"]],
   Call.2:iter-star-sep -- H hs=0[_1 KW[","]],
   Match -- H hs=0[KW["?"] _1],
   Build -- H hs=0[KW["!"] _1],
   ScopeDefault -- H hs=0[KW["{"] _1 KW["}"]],
   Scope -- H hs=0[KW["{"] H[_1 KW[":"] _2] KW["}"]],
   Scope.1:iter-star-sep -- H hs=0[_1 KW[","]],
   BA -- H hs=1[H hs=0[KW["<"] _1 KW[">"]] _2],
   AM -- H[_1 KW["=>"] _2],
   AngleStrat -- H hs=0[KW["<"] _1 KW[">"]],
   ParenStrat -- H hs=0[KW["("] _1 KW[")"]],
   LRule -- H[KW["\\"] _1 KW["\\"]],

   Seq      -- V[H[KW["("] _1] H[KW[";"]   _2 KW[")"]]],
   Choice   -- V[H[KW["("] _1] H[KW["+"]   _2 KW[")"]]],
   LChoice  -- V[H[KW["("] _1] H[KW["<+"]  _2 KW[")"]]],
   RChoice  -- V[H[KW["("] _1] H[KW["+>"]  _2 KW[")"]]],
   GChoice  -- V[H[KW["("] _1] H[KW["++"]  _2 KW[")"]]],
   LGChoice -- V[H[KW["("] _1] H[KW["<++"] _2 KW[")"]]],
   RGChoice -- V[H[KW["("] _1] H[KW["++>"] _2 KW[")"]]],
   GuardedLChoice -- V[H[KW["("] _1] H[KW["<"] _2] H[KW["+"] _3 H[KW[")"]]]],

   Rec -- H[KW["rec"] _1 KW["("] _2 KW[")"]],
   Not -- H hs=0 [KW["not"] KW["("] _1 KW[")"]],
   Where -- H hs=0 [KW["where"] KW["("] _1 KW[")"]],
   Test -- H hs=0 [KW["test"] KW["("] _1 KW[")"]],
   Bagof -- H hs=0 [KW["bagof"] KW["("] _1 KW[")"]],
   PrimNoArgs -- H hs=0 [KW["prim"] KW["("] _1 KW[")"]],
   Prim -- H hs=0 [KW["prim"] KW["("] _1 KW[","] _2 KW[")"]],
   Prim.2:iter-star-sep -- _1 KW[","],
   Path -- _1 _2,
   Some -- H hs=0 [KW["some"] KW["("] _1 KW[")"]],
   One -- H hs=0 [KW["one"] KW["("] _1 KW[")"]],
   All -- H hs=0 [KW["all"] KW["("] _1 KW[")"]],
   Thread -- H hs=0 [KW["thread"] KW["("] _1 KW[")"]],
   StrCong -- _1,
   IntCong -- _1,
   RealCong -- _1,
   TupleCong -- H  hs=0 [KW["("] _1 KW[")"]],
   TupleCong.1:iter-star-sep -- _1 KW[","],
   ModCongNoArgs -- _1,
   ModCong -- _1 KW["("] _2 KW[")"],
   ModCong.2:iter-star-sep -- _1 KW[","],
   Mod -- _1 KW["^"] _2,
   ListCongNoTail -- KW["["] _1 KW["]"],
   ListCongNoTail.1:iter-star-sep -- _1 KW[","],
   ListCong -- KW["["] _1 KW["|"] _2 KW["]"],
   ListCong.1:iter-star-sep -- _1 KW[","],
   ExplodeCong -- _1 KW["#"] _2,
   DynamicRules -- V[V is=2[H[KW["rules"] KW["("]] _1] KW[")"]],
   DynamicRules.1:iter-star -- _1,
   OverrideDynamicRules -- KW["override"] KW["rules"] KW["("] _1 KW[")"],
   OverrideDynamicRules.1:iter-star -- _1,
   DynRuleScope -- V[V is=3[H hs=0[KW["{|"] _1 KW[":"]] _2] KW["|}"]],
   DynRuleScope.1:iter-star-sep -- _1 KW[","],
   SDefNoArgs -- H[ _1 KW["="] _2 ],
   SDef -- V is=2[H[ _1 KW["("] _2 KW[")"] KW["="]] _3],
   SDef.2:iter-star-sep -- H hs=0[_1 KW[","]],
   DefaultVarDec -- _1,
   VarDec -- H[_1 KW[":"] _2],
   OverlayNoArgs -- _1 KW["="] _2,
   Overlay -- V is=2[H[_1 KW["("] _2 KW[")"] KW["="]] _3],
   Overlay.2:iter-star-sep -- H hs=0[_1 KW[","]],

   Mark -- "@mark@"
]
