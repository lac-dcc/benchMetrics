func func11(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop3: UInt64 = 0;
   var loopLimit3: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop3..loopLimit3) {
      if((PATH0 & 1) != 1) {
         var array5: ArrayT;
         if (pCounter > 0) {
            array5 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array5.refC += 1;
         } else {
            array5 = ArrayT(172,5,1)
         }
         var loop4: UInt64 = 0;
         var loopLimit4: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop4..loopLimit4) {
            for (i in 0..array5.size) {
               array5.data[i]+=1;
            }
            for (i in 0..array5.size) {
               if (array5.data[i] == 68) { 
                  return array5;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array5;
         var array6 = func28(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array112 = func22(params0, path, loopsFactor);
      }
      var array122: ArrayT;
      if (pCounter > 0) {
         array122 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array122.refC += 1;
      } else {
         array122 = ArrayT(189,122,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array122;
      var array123 = func23(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array126: ArrayT;
         if (pCounter > 0) {
            array126 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array126.refC += 1;
         } else {
            array126 = ArrayT(648,126,1)
         }
         var loop39: UInt64 = 0;
         var loopLimit39: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop39..loopLimit39) {
            for (i in 0..array122.size) {
               array122.data[i]+=1;
            }
            for (i in 0..array122.size) {
               if (array122.data[i] == 67) { 
                  return array122;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array122;
         params1.data[1] = array123;
         params1.data[2] = array126;
         var array127 = func36(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array122;
         params1.data[1] = array123;
         var array149 = func32(params1, path, loopsFactor);
      }
      for (i in 0..array123.size) {
         if (array123.data[i] == 96) { 
            return array123;
         }
      }
   }
   var array159: ArrayT;
   if (pCounter > 0) {
      array159 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array159.refC += 1;
   } else {
      array159 = ArrayT(367,159,1)
   }
   return array159;
}

