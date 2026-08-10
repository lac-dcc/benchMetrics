func func37(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop40: UInt64 = 0;
   var loopLimit40: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop40..loopLimit40) {
      if((PATH0 & 1) != 1) {
         var array129: ArrayT;
         if (pCounter > 0) {
            array129 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array129.refC += 1;
         } else {
            array129 = ArrayT(990,129,1)
         }
         var loop41: UInt64 = 0;
         var loopLimit41: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop41..loopLimit41) {
            for (i in 0..array129.size) {
               array129.data[i]+=1;
            }
            for (i in 0..array129.size) {
               if (array129.data[i] == 63) { 
                  return array129;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array129;
         var array130 = func54(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array131 = func50(params0, path, loopsFactor);
      }
      var array132: ArrayT;
      if (pCounter > 0) {
         array132 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array132.refC += 1;
      } else {
         array132 = ArrayT(125,132,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array132;
      var array133 = func51(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array134: ArrayT;
         if (pCounter > 0) {
            array134 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array134.refC += 1;
         } else {
            array134 = ArrayT(975,134,1)
         }
         var loop42: UInt64 = 0;
         var loopLimit42: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop42..loopLimit42) {
            for (i in 0..array134.size) {
               array134.data[i]+=1;
            }
            for (i in 0..array132.size) {
               if (array132.data[i] == 29) { 
                  return array132;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array132;
         params1.data[1] = array133;
         params1.data[2] = array134;
         var array135 = func60(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array132;
         params1.data[1] = array133;
         var array136 = func52(params1, loopsFactor);
      }
      for (i in 0..array132.size) {
         if (array132.data[i] == 4) { 
            return array132;
         }
      }
   }
   var array137: ArrayT;
   if (pCounter > 0) {
      array137 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array137.refC += 1;
   } else {
      array137 = ArrayT(28,137,1)
   }
   return array137;
}

