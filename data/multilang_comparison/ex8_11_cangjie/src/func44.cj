func func44(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array81: ArrayT;
      if (pCounter > 0) {
         array81 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array81.refC += 1;
      } else {
         array81 = ArrayT(71,81,1)
      }
      var loop27: UInt64 = 0;
      var loopLimit27: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop27..loopLimit27) {
         for (i in 0..array81.size) {
            array81.data[i]+=1;
         }
         for (i in 0..array81.size) {
            if (array81.data[i] == 81) { 
               return array81;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array81;
      var array82 = func54(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array83 = func50(params0, path, loopsFactor);
   }
   var array84: ArrayT;
   if (pCounter > 0) {
      array84 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array84.refC += 1;
   } else {
      array84 = ArrayT(163,84,1)
   }
   return array84;
}

