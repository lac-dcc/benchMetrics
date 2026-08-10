func func43(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop24: UInt64 = 0;
   var loopLimit24: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop24..loopLimit24) {
      if((PATH0 & 1) != 1) {
         var array72: ArrayT;
         if (pCounter > 0) {
            array72 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array72.refC += 1;
         } else {
            array72 = ArrayT(661,72,1)
         }
         var loop25: UInt64 = 0;
         var loopLimit25: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop25..loopLimit25) {
            for (i in 0..array72.size) {
               array72.data[i]+=1;
            }
            for (i in 0..array72.size) {
               if (array72.data[i] == 5) { 
                  return array72;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array72;
         var array73 = func60(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array74 = func52(params0, loopsFactor);
      }
      var array75: ArrayT;
      if (pCounter > 0) {
         array75 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array75.refC += 1;
      } else {
         array75 = ArrayT(522,75,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array75;
      var array76 = func53(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array77: ArrayT;
         if (pCounter > 0) {
            array77 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array77.refC += 1;
         } else {
            array77 = ArrayT(416,77,1)
         }
         var loop26: UInt64 = 0;
         var loopLimit26: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop26..loopLimit26) {
            for (i in 0..array75.size) {
               array75.data[i]+=1;
            }
            for (i in 0..array77.size) {
               if (array77.data[i] == 24) { 
                  return array77;
               }
            }
         }
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array75;
         params1.data[1] = array76;
         var array78 = func58(params1, loopsFactor);
      }
      for (i in 0..array75.size) {
         if (array75.data[i] == 0) { 
            return array75;
         }
      }
   }
   var array79: ArrayT;
   if (pCounter > 0) {
      array79 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array79.refC += 1;
   } else {
      array79 = ArrayT(36,79,1)
   }
   return array79;
}

