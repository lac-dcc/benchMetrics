func func52(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array28: ArrayT;
   if (pCounter > 0) {
      array28 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array28.refC += 1;
   } else {
      array28 = ArrayT(467,28,1)
   }
   var loop11: UInt64 = 0;
   var loopLimit11: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop11..loopLimit11) {
      for (i in 0..array28.size) {
         if (array28.data[i] == 97) { 
            return array28;
         }
      }
   }
   for (i in 0..array28.size) {
      array28.data[i]+=1;
   }
   for (i in 0..array28.size) {
      if (array28.data[i] == 92) { 
         return array28;
      }
   }
   return array28;
}

