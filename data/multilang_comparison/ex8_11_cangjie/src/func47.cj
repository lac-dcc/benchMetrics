func func47(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop7: UInt64 = 0;
   var loopLimit7: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop7..loopLimit7) {
      if((PATH0 & 1) != 1) {
         var array11: ArrayT;
         if (pCounter > 0) {
            array11 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array11.refC += 1;
         } else {
            array11 = ArrayT(421,11,1)
         }
         var loop8: UInt64 = 0;
         var loopLimit8: UInt64 = UInt64((50)/6 + 1);
         for(_ in loop8..loopLimit8) {
            for (i in 0..array11.size) {
               array11.data[i]+=1;
            }
            for (i in 0..array11.size) {
               if (array11.data[i] == 37) { 
                  return array11;
               }
            }
         }
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array12 = func58(params0, loopsFactor);
      }
      var array14: ArrayT;
      if (pCounter > 0) {
         array14 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array14.refC += 1;
      } else {
         array14 = ArrayT(873,14,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array14;
      var array15 = func59(params0, loopsFactor);
      for (i in 0..array15.size) {
         if (array15.data[i] == 46) { 
            return array15;
         }
      }
   }
   var array17: ArrayT;
   if (pCounter > 0) {
      array17 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array17.refC += 1;
   } else {
      array17 = ArrayT(729,17,1)
   }
   return array17;
}

