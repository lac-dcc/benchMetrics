func func33(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array181: ArrayT;
   if (pCounter > 0) {
      array181 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array181.refC += 1;
   } else {
      array181 = ArrayT(783,181,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array181;
   var array182 = func36(params0, path, loopsFactor);
   var loop53: UInt64 = 0;
   var loopLimit53: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop53..loopLimit53) {
      for (i in 0..array182.size) {
         array182.data[i]+=1;
      }
   }
   for (i in 0..array182.size) {
      if (array182.data[i] == 89) { 
         return array182;
      }
   }
   return array182;
}

