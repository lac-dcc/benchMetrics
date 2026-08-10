func func15(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array273: ArrayT;
   if (pCounter > 0) {
      array273 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array273.refC += 1;
   } else {
      array273 = ArrayT(147,273,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array273;
   var array274 = func18(params0, path, loopsFactor);
   var loop78: UInt64 = 0;
   var loopLimit78: UInt64 = UInt64((50)/2 + 1);
   for(_ in loop78..loopLimit78) {
      for (i in 0..array274.size) {
         array274.data[i]+=1;
      }
   }
   for (i in 0..array273.size) {
      if (array273.data[i] == 22) { 
         return array273;
      }
   }
   return array274;
}

