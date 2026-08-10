func func56(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array55: ArrayT;
      if (pCounter > 0) {
         array55 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array55.refC += 1;
      } else {
         array55 = ArrayT(428,55,1)
      }
      var loop20: UInt64 = 0;
      var loopLimit20: UInt64 = UInt64((50)/5 + 1);
      for(_ in loop20..loopLimit20) {
         for (i in 0..array55.size) {
            array55.data[i]+=1;
         }
         for (i in 0..array55.size) {
            if (array55.data[i] == 28) { 
               return array55;
            }
         }
      }
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array56 = func58(params0, loopsFactor);
   }
   var array57: ArrayT;
   if (pCounter > 0) {
      array57 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array57.refC += 1;
   } else {
      array57 = ArrayT(404,57,1)
   }
   return array57;
}

