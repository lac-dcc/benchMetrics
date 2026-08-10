func func1(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array289: ArrayT;
   if (pCounter > 0) {
      array289 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array289.refC += 1;
   } else {
      array289 = ArrayT(382,289,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array289;
   var array290 = func3(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array293: ArrayT;
      if (pCounter > 0) {
         array293 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array293.refC += 1;
      } else {
         array293 = ArrayT(583,293,1)
      }
      var loop84: UInt64 = 0;
      var loopLimit84: UInt64 = UInt64((50)/2 + 1);
      for(_ in loop84..loopLimit84) {
         for (i in 0..array289.size) {
            array289.data[i]+=1;
         }
         for (i in 0..array290.size) {
            if (array290.data[i] == 16) { 
               return array290;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array289;
      params1.data[1] = array290;
      params1.data[2] = array293;
      var array294 = func10(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array289;
      params1.data[1] = array290;
      var array295 = func4(params1, path, loopsFactor);
   }
   return array290;
}

