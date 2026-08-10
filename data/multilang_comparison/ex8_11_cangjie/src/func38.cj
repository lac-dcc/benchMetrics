func func38(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array139: ArrayT;
      if (pCounter > 0) {
         array139 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array139.refC += 1;
      } else {
         array139 = ArrayT(794,139,1)
      }
      var loop43: UInt64 = 0;
      var loopLimit43: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop43..loopLimit43) {
         for (i in 0..array139.size) {
            array139.data[i]+=1;
         }
         for (i in 0..array139.size) {
            if (array139.data[i] == 43) { 
               return array139;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array139;
      var array140 = func46(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array141 = func40(params0, path, loopsFactor);
   }
   var array142: ArrayT;
   if (pCounter > 0) {
      array142 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array142.refC += 1;
   } else {
      array142 = ArrayT(500,142,1)
   }
   return array142;
}

