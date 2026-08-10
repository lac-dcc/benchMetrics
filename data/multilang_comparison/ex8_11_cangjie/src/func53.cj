func func53(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array33: ArrayT;
   if (pCounter > 0) {
      array33 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array33.refC += 1;
   } else {
      array33 = ArrayT(31,33,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array33;
   var array34 = func60(params0, path, loopsFactor);
   var loop12: UInt64 = 0;
   var loopLimit12: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop12..loopLimit12) {
      for (i in 0..array34.size) {
         array34.data[i]+=1;
      }
   }
   for (i in 0..array34.size) {
      if (array34.data[i] == 75) { 
         return array34;
      }
   }
   return array34;
}

