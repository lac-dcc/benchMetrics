func func25(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop49: UInt64 = 0;
   var loopLimit49: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop49..loopLimit49) {
      if((PATH0 & 1) != 1) {
         var array164: ArrayT;
         if (pCounter > 0) {
            array164 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array164.refC += 1;
         } else {
            array164 = ArrayT(552,164,1)
         }
         var loop50: UInt64 = 0;
         var loopLimit50: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop50..loopLimit50) {
            for (i in 0..array164.size) {
               array164.data[i]+=1;
            }
            for (i in 0..array164.size) {
               if (array164.data[i] == 46) { 
                  return array164;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array164;
         var array165 = func42(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array166 = func34(params0, path, loopsFactor);
      }
      var array167: ArrayT;
      if (pCounter > 0) {
         array167 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array167.refC += 1;
      } else {
         array167 = ArrayT(80,167,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array167;
      var array168 = func35(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array169: ArrayT;
         if (pCounter > 0) {
            array169 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array169.refC += 1;
         } else {
            array169 = ArrayT(857,169,1)
         }
         var loop51: UInt64 = 0;
         var loopLimit51: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop51..loopLimit51) {
            for (i in 0..array168.size) {
               array168.data[i]+=1;
            }
            for (i in 0..array169.size) {
               if (array169.data[i] == 86) { 
                  return array169;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array167;
         params1.data[1] = array168;
         params1.data[2] = array169;
         var array170 = func46(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array167;
         params1.data[1] = array168;
         var array171 = func40(params1, path, loopsFactor);
      }
      for (i in 0..array167.size) {
         if (array167.data[i] == 79) { 
            return array167;
         }
      }
   }
   var array172: ArrayT;
   if (pCounter > 0) {
      array172 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array172.refC += 1;
   } else {
      array172 = ArrayT(610,172,1)
   }
   return array172;
}

