func func59(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array16: ArrayT;
   if (pCounter > 0) {
      array16 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array16.refC += 1;
   } else {
      array16 = ArrayT(305,16,1)
   }
   var loop9: UInt64 = 0;
   var loopLimit9: UInt64 = UInt64((50)/6 + 1);
   for(_ in loop9..loopLimit9) {
      for (i in 0..array16.size) {
         array16.data[i]+=1;
      }
   }
   for (i in 0..array16.size) {
      if (array16.data[i] == 27) { 
         return array16;
      }
   }
   return array16;
}

