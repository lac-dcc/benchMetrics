func func45(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array86: ArrayT;
   if (pCounter > 0) {
      array86 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array86.refC += 1;
   } else {
      array86 = ArrayT(773,86,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array86;
   var array87 = func51(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array90: ArrayT;
      if (pCounter > 0) {
         array90 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array90.refC += 1;
      } else {
         array90 = ArrayT(542,90,1)
      }
      var loop29: UInt64 = 0;
      var loopLimit29: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop29..loopLimit29) {
         for (i in 0..array86.size) {
            array86.data[i]+=1;
         }
         for (i in 0..array87.size) {
            if (array87.data[i] == 45) { 
               return array87;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array86;
      params1.data[1] = array87;
      params1.data[2] = array90;
      var array91 = func60(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array86;
      params1.data[1] = array87;
      var array92 = func52(params1, loopsFactor);
   }
   return array86;
}

