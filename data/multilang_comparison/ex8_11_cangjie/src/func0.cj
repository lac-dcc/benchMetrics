func func0(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array1: ArrayT;
   if (pCounter > 0) {
      array1 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array1.refC += 1;
   } else {
      array1 = ArrayT(335,1,1)
   }
   var loop1: UInt64 = 0;
   var loopLimit1: UInt64 = UInt64((50)/2 + 1);
   for(_ in loop1..loopLimit1) {
      if((PATH0 & 1) != 1) {
         var array2: ArrayT;
         if (pCounter > 0) {
            array2 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array2.refC += 1;
         } else {
            array2 = ArrayT(386,2,1)
         }
         var loop2: UInt64 = 0;
         var loopLimit2: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop2..loopLimit2) {
            for (i in 0..array1.size) {
               array1.data[i]+=1;
            }
            for (i in 0..array2.size) {
               if (array2.data[i] == 21) { 
                  return array2;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array1;
         params0.data[1] = array2;
         var array3 = func10(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array1;
         var array205 = func4(params0, path, loopsFactor);
      }
      var array215: ArrayT;
      if (pCounter > 0) {
         array215 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array215.refC += 1;
      } else {
         array215 = ArrayT(805,215,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array1;
      params0.data[1] = array215;
      var array216 = func5(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array219: ArrayT;
         if (pCounter > 0) {
            array219 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array219.refC += 1;
         } else {
            array219 = ArrayT(543,219,1)
         }
         var loop64: UInt64 = 0;
         var loopLimit64: UInt64 = UInt64((50)/3 + 1);
         for(_ in loop64..loopLimit64) {
            for (i in 0..array216.size) {
               array216.data[i]+=1;
            }
            for (i in 0..array216.size) {
               if (array216.data[i] == 13) { 
                  return array216;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array1;
         params1.data[1] = array215;
         params1.data[2] = array216;
         params1.data[3] = array219;
         var array220 = func18(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array1;
         params1.data[1] = array215;
         params1.data[2] = array216;
         var array242 = func14(params1, path, loopsFactor);
      }
      for (i in 0..array216.size) {
         if (array216.data[i] == 86) { 
            return array216;
         }
      }
   }
   return array1;
}

