func func31(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array105: ArrayT;
   if (pCounter > 0) {
      array105 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array105.refC += 1;
   } else {
      array105 = ArrayT(972,105,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array105;
   var array106 = func35(params0, loopsFactor);
   if((PATH0 & 1) != 1) {
      var array109: ArrayT;
      if (pCounter > 0) {
         array109 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array109.refC += 1;
      } else {
         array109 = ArrayT(190,109,1)
      }
      var loop34: UInt64 = 0;
      var loopLimit34: UInt64 = UInt64((50)/4 + 1);
      for(_ in loop34..loopLimit34) {
         for (i in 0..array105.size) {
            array105.data[i]+=1;
         }
         for (i in 0..array109.size) {
            if (array109.data[i] == 9) { 
               return array109;
            }
         }
      }
      var params1: ArrayTParam;
      params1= ArrayTParam(3)
      params1.data[0] = array105;
      params1.data[1] = array106;
      params1.data[2] = array109;
      var array110 = func46(params1, path, loopsFactor);
   }
   else {
      var params1: ArrayTParam;
      params1= ArrayTParam(2)
      params1.data[0] = array105;
      params1.data[1] = array106;
      var array111 = func40(params1, path, loopsFactor);
   }
   return array106;
}

