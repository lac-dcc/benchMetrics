func func22(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array113: ArrayT;
   if (pCounter > 0) {
      array113 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array113.refC += 1;
   } else {
      array113 = ArrayT(776,113,1)
   }
   var loop35: UInt64 = 0;
   var loopLimit35: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop35..loopLimit35) {
      if((PATH0 & 1) != 1) {
         var array114: ArrayT;
         if (pCounter > 0) {
            array114 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array114.refC += 1;
         } else {
            array114 = ArrayT(850,114,1)
         }
         var loop36: UInt64 = 0;
         var loopLimit36: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop36..loopLimit36) {
            for (i in 0..array114.size) {
               array114.data[i]+=1;
            }
            for (i in 0..array113.size) {
               if (array113.data[i] == 42) { 
                  return array113;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array113;
         params0.data[1] = array114;
         var array115 = func42(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array113;
         var array116 = func34(params0, path, loopsFactor);
      }
      var array117: ArrayT;
      if (pCounter > 0) {
         array117 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array117.refC += 1;
      } else {
         array117 = ArrayT(621,117,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array113;
      params0.data[1] = array117;
      var array118 = func35(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array119: ArrayT;
         if (pCounter > 0) {
            array119 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array119.refC += 1;
         } else {
            array119 = ArrayT(613,119,1)
         }
         var loop37: UInt64 = 0;
         var loopLimit37: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop37..loopLimit37) {
            for (i in 0..array117.size) {
               array117.data[i]+=1;
            }
            for (i in 0..array118.size) {
               if (array118.data[i] == 26) { 
                  return array118;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array113;
         params1.data[1] = array117;
         params1.data[2] = array118;
         params1.data[3] = array119;
         var array120 = func46(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array113;
         params1.data[1] = array117;
         params1.data[2] = array118;
         var array121 = func40(params1, path, loopsFactor);
      }
      for (i in 0..array118.size) {
         if (array118.data[i] == 84) { 
            return array118;
         }
      }
   }
   for (i in 0..array113.size) {
      array113.data[i]+=1;
   }
   for (i in 0..array113.size) {
      if (array113.data[i] == 68) { 
         return array113;
      }
   }
   return array113;
}

