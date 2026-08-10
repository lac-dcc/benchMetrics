func func23(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array124: ArrayT;
   if (pCounter > 0) {
      array124 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array124.refC += 1;
   } else {
      array124 = ArrayT(36,124,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array124;
   var array125 = func28(params0, path, loopsFactor);
   var loop38: UInt64 = 0;
   var loopLimit38: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop38..loopLimit38) {
      for (i in 0..array124.size) {
         array124.data[i]+=1;
      }
   }
   for (i in 0..array125.size) {
      if (array125.data[i] == 33) { 
         return array125;
      }
   }
   return array125;
}

