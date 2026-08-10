func func26(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var array174: ArrayT;
      if (pCounter > 0) {
         array174 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array174.refC += 1;
      } else {
         array174 = ArrayT(620,174,1)
      }
      var loop52: UInt64 = 0;
      var loopLimit52: UInt64 = UInt64((50)/3 + 1);
      for(_ in loop52..loopLimit52) {
         for (i in 0..array174.size) {
            array174.data[i]+=1;
         }
         for (i in 0..array174.size) {
            if (array174.data[i] == 88) { 
               return array174;
            }
         }
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array174;
      var array175 = func36(params0, path, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array176 = func32(params0, path, loopsFactor);
   }
   var array177: ArrayT;
   if (pCounter > 0) {
      array177 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array177.refC += 1;
   } else {
      array177 = ArrayT(856,177,1)
   }
   return array177;
}

