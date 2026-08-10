func func2(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array279: ArrayT;
   if (pCounter > 0) {
      array279 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array279.refC += 1;
   } else {
      array279 = ArrayT(433,279,1)
   }
   var loop80: UInt64 = 0;
   var loopLimit80: UInt64 = UInt64((50)/2 + 1);
   for(_ in loop80..loopLimit80) {
      if((PATH0 & 1) != 1) {
         var array280: ArrayT;
         if (pCounter > 0) {
            array280 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array280.refC += 1;
         } else {
            array280 = ArrayT(982,280,1)
         }
         var loop81: UInt64 = 0;
         var loopLimit81: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop81..loopLimit81) {
            for (i in 0..array280.size) {
               array280.data[i]+=1;
            }
            for (i in 0..array280.size) {
               if (array280.data[i] == 15) { 
                  return array280;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array279;
         params0.data[1] = array280;
         var array281 = func18(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array279;
         var array282 = func14(params0, path, loopsFactor);
      }
      var array283: ArrayT;
      if (pCounter > 0) {
         array283 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array283.refC += 1;
      } else {
         array283 = ArrayT(892,283,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array279;
      params0.data[1] = array283;
      var array284 = func15(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array285: ArrayT;
         if (pCounter > 0) {
            array285 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array285.refC += 1;
         } else {
            array285 = ArrayT(32,285,1)
         }
         var loop82: UInt64 = 0;
         var loopLimit82: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop82..loopLimit82) {
            for (i in 0..array284.size) {
               array284.data[i]+=1;
            }
            for (i in 0..array283.size) {
               if (array283.data[i] == 6) { 
                  return array283;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array279;
         params1.data[1] = array283;
         params1.data[2] = array284;
         params1.data[3] = array285;
         var array286 = func24(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array279;
         params1.data[1] = array283;
         params1.data[2] = array284;
         var array287 = func16(params1, path, loopsFactor);
      }
      for (i in 0..array283.size) {
         if (array283.data[i] == 62) { 
            return array283;
         }
      }
   }
   for (i in 0..array279.size) {
      array279.data[i]+=1;
   }
   for (i in 0..array279.size) {
      if (array279.data[i] == 76) { 
         return array279;
      }
   }
   return array279;
}

