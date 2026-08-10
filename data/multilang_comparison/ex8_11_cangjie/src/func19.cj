func func19(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop65: UInt64 = 0;
   var loopLimit65: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop65..loopLimit65) {
      if((PATH0 & 1) != 1) {
         var array222: ArrayT;
         if (pCounter > 0) {
            array222 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array222.refC += 1;
         } else {
            array222 = ArrayT(294,222,1)
         }
         var loop66: UInt64 = 0;
         var loopLimit66: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop66..loopLimit66) {
            for (i in 0..array222.size) {
               array222.data[i]+=1;
            }
            for (i in 0..array222.size) {
               if (array222.data[i] == 35) { 
                  return array222;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array222;
         var array223 = func36(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(0)
         var array224 = func32(params0, path, loopsFactor);
      }
      var array225: ArrayT;
      if (pCounter > 0) {
         array225 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array225.refC += 1;
      } else {
         array225 = ArrayT(573,225,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(1)
      params0.data[0] = array225;
      var array226 = func33(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array227: ArrayT;
         if (pCounter > 0) {
            array227 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array227.refC += 1;
         } else {
            array227 = ArrayT(291,227,1)
         }
         var loop67: UInt64 = 0;
         var loopLimit67: UInt64 = UInt64((50)/4 + 1);
         for(_ in loop67..loopLimit67) {
            for (i in 0..array227.size) {
               array227.data[i]+=1;
            }
            for (i in 0..array225.size) {
               if (array225.data[i] == 17) { 
                  return array225;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array225;
         params1.data[1] = array226;
         params1.data[2] = array227;
         var array228 = func42(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array225;
         params1.data[1] = array226;
         var array229 = func34(params1, path, loopsFactor);
      }
      for (i in 0..array225.size) {
         if (array225.data[i] == 30) { 
            return array225;
         }
      }
   }
   var array230: ArrayT;
   if (pCounter > 0) {
      array230 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array230.refC += 1;
   } else {
      array230 = ArrayT(904,230,1)
   }
   return array230;
}

