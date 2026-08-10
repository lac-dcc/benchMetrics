func func29(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop5: UInt64 = 0;
   var loopLimit5: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop5..loopLimit5) {
      if((PATH0 & 1) != 1) {
         var array8: ArrayT;
         if (pCounter > 0) {
            array8 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array8.refC += 1;
         } else {
            array8 = ArrayT(929,8,1)
         }
         var loop6: UInt64 = 0;
         var loopLimit6: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop6..loopLimit6) {
            for (i in 0..array8.size) {
               array8.data[i]+=1;
            }
            for (i in 0..array8.size) {
               if (array8.data[i] == 58) { 
                  return array8;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array8;
         var array9 = func46(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array37 = func40(params0, path, loopsFactor);
      }
      var array46: ArrayT;
      if (pCounter > 0) {
         array46 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array46.refC += 1;
      } else {
         array46 = ArrayT(350,46,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array46;
      var array47 = func41(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array50: ArrayT;
         if (pCounter > 0) {
            array50 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array50.refC += 1;
         } else {
            array50 = ArrayT(365,50,1)
         }
         var loop18: UInt64 = 0;
         var loopLimit18: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop18..loopLimit18) {
            for (i in 0..array46.size) {
               array46.data[i]+=1;
            }
            for (i in 0..array47.size) {
               if (array47.data[i] == 32) { 
                  return array47;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array46;
         params1.data[1] = array47;
         params1.data[2] = array50;
         var array51 = func54(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array46;
         params1.data[1] = array47;
         var array61 = func50(params1, path, loopsFactor);
      }
      for (i in 0..array46.size) {
         if (array46.data[i] == 64) { 
            return array46;
         }
      }
   }
   var array67: ArrayT;
   if (pCounter > 0) {
      array67 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array67.refC += 1;
   } else {
      array67 = ArrayT(197,67,1)
   }
   return array67;
}

