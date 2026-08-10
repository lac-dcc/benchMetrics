func func57(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array59: ArrayT;
   if (pCounter > 0) {
      array59 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array59.refC += 1;
   } else {
      array59 = ArrayT(840,59,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array59;
   var array60 = func59(params0, loopsFactor);
   return array59;
}

