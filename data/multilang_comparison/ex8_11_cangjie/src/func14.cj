func func14(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array243: ArrayT;
   if (pCounter > 0) {
      array243 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array243.refC += 1;
   } else {
      array243 = ArrayT(270,243,1)
   }
   var loop70: UInt64 = 0;
   var loopLimit70: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop70..loopLimit70) {
      if((PATH0 & 1) != 1) {
         var array244: ArrayT;
         if (pCounter > 0) {
            array244 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array244.refC += 1;
         } else {
            array244 = ArrayT(984,244,1)
         }
         var loop71: UInt64 = 0;
         var loopLimit71: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop71..loopLimit71) {
            for (i in 0..array243.size) {
               array243.data[i]+=1;
            }
            for (i in 0..array244.size) {
               if (array244.data[i] == 34) { 
                  return array244;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array243;
         params0.data[1] = array244;
         var array245 = func28(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array243;
         var array246 = func22(params0, path, loopsFactor);
      }
      var array247: ArrayT;
      if (pCounter > 0) {
         array247 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array247.refC += 1;
      } else {
         array247 = ArrayT(830,247,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array243;
      params0.data[1] = array247;
      var array248 = func23(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array249: ArrayT;
         if (pCounter > 0) {
            array249 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array249.refC += 1;
         } else {
            array249 = ArrayT(950,249,1)
         }
         var loop72: UInt64 = 0;
         var loopLimit72: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop72..loopLimit72) {
            for (i in 0..array248.size) {
               array248.data[i]+=1;
            }
            for (i in 0..array247.size) {
               if (array247.data[i] == 14) { 
                  return array247;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array243;
         params1.data[1] = array247;
         params1.data[2] = array248;
         params1.data[3] = array249;
         var array250 = func36(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array243;
         params1.data[1] = array247;
         params1.data[2] = array248;
         var array251 = func32(params1, path, loopsFactor);
      }
      for (i in 0..array243.size) {
         if (array243.data[i] == 35) { 
            return array243;
         }
      }
   }
   for (i in 0..array243.size) {
      array243.data[i]+=1;
   }
   for (i in 0..array243.size) {
      if (array243.data[i] == 54) { 
         return array243;
      }
   }
   return array243;
}

