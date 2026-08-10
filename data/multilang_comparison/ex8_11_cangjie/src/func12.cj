func func12(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array161: ArrayT;
      if (pCounter > 0) {
         array161 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array161.refC += 1;
      } else {
         array161 = ArrayT(57,161,1)
      }
      var loop48: UInt64 = 0;
      var loopLimit48: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop48..loopLimit48) {
         for (i in 0..array161.size) {
            array161.data[i]+=1;
         }
         for (i in 0..array161.size) {
            if (array161.data[i] == 5) { 
               return array161;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array161;
      var array162 = func24(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array186 = func16(params0, path, loopsFactor);
   }
   var array196: ArrayT;
   if (pCounter > 0) {
      array196 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array196.refC += 1;
   } else {
      array196 = ArrayT(947,196,1)
   }
   return array196;
}

