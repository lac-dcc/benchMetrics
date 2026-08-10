func func30(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array69: ArrayT;
      if (pCounter > 0) {
         array69 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array69.refC += 1;
      } else {
         array69 = ArrayT(622,69,1)
      }
      var loop23: UInt64 = 0;
      var loopLimit23: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop23..loopLimit23) {
         for (i in 0..array69.size) {
            array69.data[i]+=1;
         }
         for (i in 0..array69.size) {
            if (array69.data[i] == 43) { 
               return array69;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array69;
      var array70 = func42(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array93 = func34(params0, path, loopsFactor);
   }
   var array103: ArrayT;
   if (pCounter > 0) {
      array103 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array103.refC += 1;
   } else {
      array103 = ArrayT(269,103,1)
   }
   return array103;
}

