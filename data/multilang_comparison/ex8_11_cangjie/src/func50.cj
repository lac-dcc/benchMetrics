func func50(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array62: ArrayT;
   if (pCounter > 0) {
      array62 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array62.refC += 1;
   } else {
      array62 = ArrayT(324,62,1)
   }
   var loop21: UInt64 = 0;
   var loopLimit21: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop21..loopLimit21) {
      if((PATH0 & 1) != 1) {
         var array63: ArrayT;
         if (pCounter > 0) {
            array63 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array63.refC += 1;
         } else {
            array63 = ArrayT(743,63,1)
         }
         var loop22: UInt64 = 0;
         var loopLimit22: UInt64 = UInt64((50)/6 + 1);
         for(_ in loop22..loopLimit22) {
            for (i in 0..array62.size) {
               array62.data[i]+=1;
            }
            for (i in 0..array63.size) {
               if (array63.data[i] == 90) { 
                  return array63;
               }
            }
         }
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array62;
         var array64 = func58(params0, loopsFactor);
      }
      var array65: ArrayT;
      if (pCounter > 0) {
         array65 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array65.refC += 1;
      } else {
         array65 = ArrayT(725,65,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array62;
      params0.data[1] = array65;
      var array66 = func59(params0, loopsFactor);
      for (i in 0..array66.size) {
         if (array66.data[i] == 39) { 
            return array66;
         }
      }
   }
   for (i in 0..array62.size) {
      array62.data[i]+=1;
   }
   for (i in 0..array62.size) {
      if (array62.data[i] == 69) { 
         return array62;
      }
   }
   return array62;
}

