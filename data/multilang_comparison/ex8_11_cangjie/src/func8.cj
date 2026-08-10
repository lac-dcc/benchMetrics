func func8(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array266: ArrayT;
      if (pCounter > 0) {
         array266 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array266.refC += 1;
      } else {
         array266 = ArrayT(171,266,1)
      }
      var loop77: UInt64 = 0;
      var loopLimit77: UInt64 = UInt64((50)/2 + 1);
      for(_ in loop77..loopLimit77) {
         for (i in 0..array266.size) {
            array266.data[i]+=1;
         }
         for (i in 0..array266.size) {
            if (array266.data[i] == 6) { 
               return array266;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array266;
      var array267 = func18(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array268 = func14(params0, path, loopsFactor);
   }
   var array269: ArrayT;
   if (pCounter > 0) {
      array269 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array269.refC += 1;
   } else {
      array269 = ArrayT(539,269,1)
   }
   return array269;
}

