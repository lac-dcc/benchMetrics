func func48(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array19: ArrayT;
      if (pCounter > 0) {
         array19 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array19.refC += 1;
      } else {
         array19 = ArrayT(545,19,1)
      }
      var loop10: UInt64 = 0;
      var loopLimit10: UInt64 = UInt64((50)/5 + 1);
      for(_ in loop10..loopLimit10) {
         for (i in 0..array19.size) {
            array19.data[i]+=1;
         }
         for (i in 0..array19.size) {
            if (array19.data[i] == 34) { 
               return array19;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array19;
      var array20 = func60(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array27 = func52(params0, loopsFactor);
   }
   var array29: ArrayT;
   if (pCounter > 0) {
      array29 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array29.refC += 1;
   } else {
      array29 = ArrayT(756,29,1)
   }
   return array29;
}

