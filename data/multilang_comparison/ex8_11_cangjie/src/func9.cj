func func9(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array271: ArrayT;
   if (pCounter > 0) {
      array271 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array271.refC += 1;
   } else {
      array271 = ArrayT(114,271,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array271;
   var array272 = func15(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array275: ArrayT;
      if (pCounter > 0) {
         array275 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array275.refC += 1;
      } else {
         array275 = ArrayT(875,275,1)
      }
      var loop79: UInt64 = 0;
      var loopLimit79: UInt64 = UInt64((50)/2 + 1);
      for(_ in loop79..loopLimit79) {
         for (i in 0..array271.size) {
            array271.data[i]+=1;
         }
         for (i in 0..array272.size) {
            if (array272.data[i] == 90) { 
               return array272;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array271;
      params1.data[1] = array272;
      params1.data[2] = array275;
      var array276 = func24(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array271;
      params1.data[1] = array272;
      var array277 = func16(params1, path, loopsFactor);
   }
   return array272;
}

