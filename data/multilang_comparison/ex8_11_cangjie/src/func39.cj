func func39(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array144: ArrayT;
   if (pCounter > 0) {
      array144 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array144.refC += 1;
   } else {
      array144 = ArrayT(535,144,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array144;
   var array145 = func41(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array146: ArrayT;
      if (pCounter > 0) {
         array146 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array146.refC += 1;
      } else {
         array146 = ArrayT(692,146,1)
      }
      var loop44: UInt64 = 0;
      var loopLimit44: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop44..loopLimit44) {
         for (i in 0..array144.size) {
            array144.data[i]+=1;
         }
         for (i in 0..array144.size) {
            if (array144.data[i] == 4) { 
               return array144;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array144;
      params1.data[1] = array145;
      params1.data[2] = array146;
      var array147 = func54(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array144;
      params1.data[1] = array145;
      var array148 = func50(params1, path, loopsFactor);
   }
   return array145;
}

