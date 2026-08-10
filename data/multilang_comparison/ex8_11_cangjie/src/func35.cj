func func35(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array107: ArrayT;
   if (pCounter > 0) {
      array107 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array107.refC += 1;
   } else {
      array107 = ArrayT(222,107,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array107;
   var array108 = func42(params0, path, loopsFactor);
   var loop33: UInt64 = 0;
   var loopLimit33: UInt64 = UInt64((50)/4 + 1);
   for(_ in loop33..loopLimit33) {
      for (i in 0..array107.size) {
         array107.data[i]+=1;
      }
   }
   for (i in 0..array107.size) {
      if (array107.data[i] == 13) { 
         return array107;
      }
   }
   return array107;
}

