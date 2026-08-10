func func13(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array198: ArrayT;
   if (pCounter > 0) {
      array198 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array198.refC += 1;
   } else {
      array198 = ArrayT(54,198,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array198;
   var array199 = func17(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array202: ArrayT;
      if (pCounter > 0) {
         array202 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array202.refC += 1;
      } else {
         array202 = ArrayT(338,202,1)
      }
      var loop59: UInt64 = 0;
      var loopLimit59: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop59..loopLimit59) {
         for (i in 0..array199.size) {
            array199.data[i]+=1;
         }
         for (i in 0..array198.size) {
            if (array198.data[i] == 21) { 
               return array198;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array198;
      params1.data[1] = array199;
      params1.data[2] = array202;
      var array203 = func28(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array198;
      params1.data[1] = array199;
      var array204 = func22(params1, path, loopsFactor);
   }
   return array199;
}

