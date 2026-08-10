func func40(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array38: ArrayT;
   if (pCounter > 0) {
      array38 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array38.refC += 1;
   } else {
      array38 = ArrayT(871,38,1)
   }
   var loop14: UInt64 = 0;
   var loopLimit14: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop14..loopLimit14) {
      if((PATH0 & 1) != 1) {
         var array39: ArrayT;
         if (pCounter > 0) {
            array39 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array39.refC += 1;
         } else {
            array39 = ArrayT(732,39,1)
         }
         var loop15: UInt64 = 0;
         var loopLimit15: UInt64 = UInt64((50)/6 + 1);
         for(_ in loop15..loopLimit15) {
            for (i in 0..array39.size) {
               array39.data[i]+=1;
            }
            for (i in 0..array39.size) {
               if (array39.data[i] == 19) { 
                  return array39;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array38;
         params0.data[1] = array39;
         var array40 = func60(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array38;
         var array41 = func52(params0, loopsFactor);
      }
      var array42: ArrayT;
      if (pCounter > 0) {
         array42 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array42.refC += 1;
      } else {
         array42 = ArrayT(340,42,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array38;
      params0.data[1] = array42;
      var array43 = func53(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array44: ArrayT;
         if (pCounter > 0) {
            array44 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array44.refC += 1;
         } else {
            array44 = ArrayT(723,44,1)
         }
         var loop16: UInt64 = 0;
         var loopLimit16: UInt64 = UInt64((50)/6 + 1);
         for(_ in loop16..loopLimit16) {
            for (i in 0..array43.size) {
               array43.data[i]+=1;
            }
            for (i in 0..array42.size) {
               if (array42.data[i] == 46) { 
                  return array42;
               }
            }
         }
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array38;
         params1.data[1] = array42;
         params1.data[2] = array43;
         var array45 = func58(params1, loopsFactor);
      }
      for (i in 0..array43.size) {
         if (array43.data[i] == 79) { 
            return array43;
         }
      }
   }
   for (i in 0..array38.size) {
      array38.data[i]+=1;
   }
   for (i in 0..array38.size) {
      if (array38.data[i] == 28) { 
         return array38;
      }
   }
   return array38;
}

