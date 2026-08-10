func func32(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array150: ArrayT;
   if (pCounter > 0) {
      array150 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array150.refC += 1;
   } else {
      array150 = ArrayT(971,150,1)
   }
   var loop45: UInt64 = 0;
   var loopLimit45: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop45..loopLimit45) {
      if((PATH0 & 1) != 1) {
         var array151: ArrayT;
         if (pCounter > 0) {
            array151 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array151.refC += 1;
         } else {
            array151 = ArrayT(949,151,1)
         }
         var loop46: UInt64 = 0;
         var loopLimit46: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop46..loopLimit46) {
            for (i in 0..array151.size) {
               array151.data[i]+=1;
            }
            for (i in 0..array151.size) {
               if (array151.data[i] == 88) { 
                  return array151;
               }
            }
         }
         var params0: ArrayTParam;
         params0= ArrayTParam(2)
         params0.data[0] = array150;
         params0.data[1] = array151;
         var array152 = func46(params0, path, loopsFactor);
      }
      else {
         var params0: ArrayTParam;
         params0= ArrayTParam(1)
         params0.data[0] = array150;
         var array153 = func40(params0, path, loopsFactor);
      }
      var array154: ArrayT;
      if (pCounter > 0) {
         array154 = vars.data[pCounter-1].getOrThrow();
         pCounter -= 1;
         array154.refC += 1;
      } else {
         array154 = ArrayT(829,154,1)
      }
      var params0: ArrayTParam;
      params0= ArrayTParam(2)
      params0.data[0] = array150;
      params0.data[1] = array154;
      var array155 = func41(params0, loopsFactor);
      if((PATH0 & 2) != 1) {
         var array156: ArrayT;
         if (pCounter > 0) {
            array156 = vars.data[pCounter-1].getOrThrow();
            pCounter -= 1;
            array156.refC += 1;
         } else {
            array156 = ArrayT(340,156,1)
         }
         var loop47: UInt64 = 0;
         var loopLimit47: UInt64 = UInt64((50)/5 + 1);
         for(_ in loop47..loopLimit47) {
            for (i in 0..array154.size) {
               array154.data[i]+=1;
            }
            for (i in 0..array154.size) {
               if (array154.data[i] == 26) { 
                  return array154;
               }
            }
         }
         var params1: ArrayTParam;
         params1= ArrayTParam(4)
         params1.data[0] = array150;
         params1.data[1] = array154;
         params1.data[2] = array155;
         params1.data[3] = array156;
         var array157 = func54(params1, path, loopsFactor);
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(3)
         params1.data[0] = array150;
         params1.data[1] = array154;
         params1.data[2] = array155;
         var array158 = func50(params1, path, loopsFactor);
      }
      for (i in 0..array150.size) {
         if (array150.data[i] == 23) { 
            return array150;
         }
      }
   }
   for (i in 0..array150.size) {
      array150.data[i]+=1;
   }
   for (i in 0..array150.size) {
      if (array150.data[i] == 9) { 
         return array150;
      }
   }
   return array150;
}

