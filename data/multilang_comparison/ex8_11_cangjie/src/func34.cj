func func34(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array94: ArrayT;
   if (pCounter > 0) {
      array94 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array94.refC += 1;
   } else {
      array94 = ArrayT(210,94,1)
   }
   var loop30: UInt64 = 0;
   var loopLimit30: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop30..loopLimit30) {
      if((PATH0 & 1) != 1) {
         var array95: ArrayT;
         if (pCounter > 0) {
            array95 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array95.refC += 1;
         } else {
            array95 = ArrayT(342,95,1)
         }
         var loop31: UInt64 = 0;
         var loopLimit31: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop31..loopLimit31) {
            for (i in 0..array95.size) {
               array95.data[i]+=1;
            }
            for (i in 0..array94.size) {
               if (array94.data[i] == 1) { 
                  return array94;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array94;
         params0.data[1] = array95;
         var array96 = func54(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array94;
         var array97 = func50(params0, path, loopsFactor);
      }
      var array98: ArrayT;
      if (pCounter > 0) {
         array98 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array98.refC += 1;
      } else {
         array98 = ArrayT(819,98,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array94;
      params0.data[1] = array98;
      var array99 = func51(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array100: ArrayT;
         if (pCounter > 0) {
            array100 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array100.refC += 1;
         } else {
            array100 = ArrayT(904,100,1)
         }
         var loop32: UInt64 = 0;
         var loopLimit32: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop32..loopLimit32) {
            for (i in 0..array100.size) {
               array100.data[i]+=1;
            }
            for (i in 0..array100.size) {
               if (array100.data[i] == 40) { 
                  return array100;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array94;
         params1.data[1] = array98;
         params1.data[2] = array99;
         params1.data[3] = array100;
         var array101 = func60(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array94;
         params1.data[1] = array98;
         params1.data[2] = array99;
         var array102 = func52(params1, loopsFactor);
      }
      for (i in 0..array99.size) {
         if (array99.data[i] == 84) { 
            return array99;
         }
      }
   }
   for (i in 0..array94.size) {
      array94.data[i]+=1;
   }
   for (i in 0..array94.size) {
      if (array94.data[i] == 24) { 
         return array94;
      }
   }
   return array94;
}

