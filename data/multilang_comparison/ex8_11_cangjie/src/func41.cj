func func41(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array48: ArrayT;
   if (pCounter > 0) {
      array48 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array48.refC += 1;
   } else {
      array48 = ArrayT(124,48,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array48;
   var array49 = func46(params0, path, loopsFactor);
   var loop17: UInt64 = 0;
   var loopLimit17: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop17..loopLimit17) {
      for (i in 0..array48.size) {
         array48.data[i]+=1;
      }
   }
   for (i in 0..array49.size) {
      if (array49.data[i] == 91) { 
         return array49;
      }
   }
   return array49;
}

