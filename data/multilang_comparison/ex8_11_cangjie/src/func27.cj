func func27(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array179: ArrayT;
   if (pCounter > 0) {
      array179 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array179.refC += 1;
   } else {
      array179 = ArrayT(205,179,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array179;
   var array180 = func33(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array183: ArrayT;
      if (pCounter > 0) {
         array183 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array183.refC += 1;
      } else {
         array183 = ArrayT(607,183,1)
      }
      var loop54: UInt64 = 0;
      var loopLimit54: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop54..loopLimit54) {
         for (i in 0..array179.size) {
            array179.data[i]+=1;
         }
         for (i in 0..array179.size) {
            if (array179.data[i] == 14) { 
               return array179;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array179;
      params1.data[1] = array180;
      params1.data[2] = array183;
      var array184 = func42(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array179;
      params1.data[1] = array180;
      var array185 = func34(params1, path, loopsFactor);
   }
   return array179;
}

