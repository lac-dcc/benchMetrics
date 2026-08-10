func func21(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array237: ArrayT;
   if (pCounter > 0) {
      array237 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array237.refC += 1;
   } else {
      array237 = ArrayT(226,237,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array237;
   var array238 = func23(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array239: ArrayT;
      if (pCounter > 0) {
         array239 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array239.refC += 1;
      } else {
         array239 = ArrayT(596,239,1)
      }
      var loop69: UInt64 = 0;
      var loopLimit69: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop69..loopLimit69) {
         for (i in 0..array237.size) {
            array237.data[i]+=1;
         }
         for (i in 0..array238.size) {
            if (array238.data[i] == 60) { 
               return array238;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array237;
      params1.data[1] = array238;
      params1.data[2] = array239;
      var array240 = func36(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array237;
      params1.data[1] = array238;
      var array241 = func32(params1, path, loopsFactor);
   }
   return array238;
}

