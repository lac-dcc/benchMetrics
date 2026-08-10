func func16(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array187: ArrayT;
   if (pCounter > 0) {
      array187 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array187.refC += 1;
   } else {
      array187 = ArrayT(157,187,1)
   }
   var loop55: UInt64 = 0;
   var loopLimit55: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop55..loopLimit55) {
      if((PATH0 & 1) != 1) {
         var array188: ArrayT;
         if (pCounter > 0) {
            array188 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array188.refC += 1;
         } else {
            array188 = ArrayT(681,188,1)
         }
         var loop56: UInt64 = 0;
         var loopLimit56: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop56..loopLimit56) {
            for (i in 0..array188.size) {
               array188.data[i]+=1;
            }
            for (i in 0..array187.size) {
               if (array187.data[i] == 70) { 
                  return array187;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array187;
         params0.data[1] = array188;
         var array189 = func36(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array187;
         var array190 = func32(params0, path, loopsFactor);
      }
      var array191: ArrayT;
      if (pCounter > 0) {
         array191 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array191.refC += 1;
      } else {
         array191 = ArrayT(363,191,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array187;
      params0.data[1] = array191;
      var array192 = func33(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array193: ArrayT;
         if (pCounter > 0) {
            array193 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array193.refC += 1;
         } else {
            array193 = ArrayT(173,193,1)
         }
         var loop57: UInt64 = 0;
         var loopLimit57: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop57..loopLimit57) {
            for (i in 0..array193.size) {
               array193.data[i]+=1;
            }
            for (i in 0..array193.size) {
               if (array193.data[i] == 62) { 
                  return array193;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array187;
         params1.data[1] = array191;
         params1.data[2] = array192;
         params1.data[3] = array193;
         var array194 = func42(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array187;
         params1.data[1] = array191;
         params1.data[2] = array192;
         var array195 = func34(params1, path, loopsFactor);
      }
      for (i in 0..array192.size) {
         if (array192.data[i] == 15) { 
            return array192;
         }
      }
   }
   for (i in 0..array187.size) {
      array187.data[i]+=1;
   }
   for (i in 0..array187.size) {
      if (array187.data[i] == 74) { 
         return array187;
      }
   }
   return array187;
}

