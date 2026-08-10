func func49(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array31: ArrayT;
   if (pCounter > 0) {
      array31 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array31.refC += 1;
   } else {
      array31 = ArrayT(689,31,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array31;
   var array32 = func53(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array35: ArrayT;
      if (pCounter > 0) {
         array35 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array35.refC += 1;
      } else {
         array35 = ArrayT(927,35,1)
      }
      var loop13: UInt64 = 0;
      var loopLimit13: UInt64 = UInt64((50)/5 + 1);
      for(_ in loop13..loopLimit13) {
         for (i in 0..array31.size) {
            array31.data[i]+=1;
         }
         for (i in 0..array32.size) {
            if (array32.data[i] == 97) { 
               return array32;
            }
         }
      }
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array31;
      params1.data[1] = array32;
      var array36 = func58(params1, loopsFactor);
   }
   return array32;
}

