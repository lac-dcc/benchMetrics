func func20(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array232: ArrayT;
      if (pCounter > 0) {
         array232 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array232.refC += 1;
      } else {
         array232 = ArrayT(73,232,1)
      }
      var loop68: UInt64 = 0;
      var loopLimit68: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop68..loopLimit68) {
         for (i in 0..array232.size) {
            array232.data[i]+=1;
         }
         for (i in 0..array232.size) {
            if (array232.data[i] == 5) { 
               return array232;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array232;
      var array233 = func28(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array234 = func22(params0, path, loopsFactor);
   }
   var array235: ArrayT;
   if (pCounter > 0) {
      array235 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array235.refC += 1;
   } else {
      array235 = ArrayT(6,235,1)
   }
   return array235;
}

