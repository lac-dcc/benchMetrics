func func4(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array206: ArrayT;
   if (pCounter > 0) {
      array206 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array206.refC += 1;
   } else {
      array206 = ArrayT(207,206,1)
   }
   var loop60: UInt64 = 0;
   var loopLimit60: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop60..loopLimit60) {
      if((PATH0 & 1) != 1) {
         var array207: ArrayT;
         if (pCounter > 0) {
            array207 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array207.refC += 1;
         } else {
            array207 = ArrayT(759,207,1)
         }
         var loop61: UInt64 = 0;
         var loopLimit61: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop61..loopLimit61) {
            for (i in 0..array207.size) {
               array207.data[i]+=1;
            }
            for (i in 0..array206.size) {
               if (array206.data[i] == 99) { 
                  return array206;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array206;
         params0.data[1] = array207;
         var array208 = func24(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array206;
         var array209 = func16(params0, path, loopsFactor);
      }
      var array210: ArrayT;
      if (pCounter > 0) {
         array210 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array210.refC += 1;
      } else {
         array210 = ArrayT(560,210,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array206;
      params0.data[1] = array210;
      var array211 = func17(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array212: ArrayT;
         if (pCounter > 0) {
            array212 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array212.refC += 1;
         } else {
            array212 = ArrayT(563,212,1)
         }
         var loop62: UInt64 = 0;
         var loopLimit62: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop62..loopLimit62) {
            for (i in 0..array210.size) {
               array210.data[i]+=1;
            }
            for (i in 0..array206.size) {
               if (array206.data[i] == 11) { 
                  return array206;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array206;
         params1.data[1] = array210;
         params1.data[2] = array211;
         params1.data[3] = array212;
         var array213 = func28(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array206;
         params1.data[1] = array210;
         params1.data[2] = array211;
         var array214 = func22(params1, path, loopsFactor);
      }
      for (i in 0..array211.size) {
         if (array211.data[i] == 14) { 
            return array211;
         }
      }
   }
   for (i in 0..array206.size) {
      array206.data[i]+=1;
   }
   for (i in 0..array206.size) {
      if (array206.data[i] == 93) { 
         return array206;
      }
   }
   return array206;
}

