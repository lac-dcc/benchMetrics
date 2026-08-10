func func51(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array88: ArrayT;
   if (pCounter > 0) {
      array88 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array88.refC += 1;
   } else {
      array88 = ArrayT(926,88,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array88;
   var array89 = func54(params0, path, loopsFactor);
   var loop28: UInt64 = 0;
   var loopLimit28: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop28..loopLimit28) {
      for (i in 0..array88.size) {
         array88.data[i]+=1;
      }
   }
   for (i in 0..array88.size) {
      if (array88.data[i] == 84) { 
         return array88;
      }
   }
   return array88;
}

