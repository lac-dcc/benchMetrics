func func7(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop74: UInt64 = 0;
   var loopLimit74: UInt64 = UInt64((50)/2 + 1);
   for(_ in loop74..loopLimit74) {
      if((PATH0 & 1) != 1) {
         var array256: ArrayT;
         if (pCounter > 0) {
            array256 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array256.refC += 1;
         } else {
            array256 = ArrayT(821,256,1)
         }
         var loop75: UInt64 = 0;
         var loopLimit75: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop75..loopLimit75) {
            for (i in 0..array256.size) {
               array256.data[i]+=1;
            }
            for (i in 0..array256.size) {
               if (array256.data[i] == 47) { 
                  return array256;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array256;
         var array257 = func24(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array258 = func16(params0, path, loopsFactor);
      }
      var array259: ArrayT;
      if (pCounter > 0) {
         array259 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array259.refC += 1;
      } else {
         array259 = ArrayT(701,259,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array259;
      var array260 = func17(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array261: ArrayT;
         if (pCounter > 0) {
            array261 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array261.refC += 1;
         } else {
            array261 = ArrayT(933,261,1)
         }
         var loop76: UInt64 = 0;
         var loopLimit76: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop76..loopLimit76) {
            for (i in 0..array261.size) {
               array261.data[i]+=1;
            }
            for (i in 0..array259.size) {
               if (array259.data[i] == 28) { 
                  return array259;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array259;
         params1.data[1] = array260;
         params1.data[2] = array261;
         var array262 = func28(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array259;
         params1.data[1] = array260;
         var array263 = func22(params1, path, loopsFactor);
      }
      for (i in 0..array259.size) {
         if (array259.data[i] == 34) { 
            return array259;
         }
      }
   }
   var array264: ArrayT;
   if (pCounter > 0) {
      array264 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array264.refC += 1;
   } else {
      array264 = ArrayT(698,264,1)
   }
   return array264;
}

