func func58(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array13: ArrayT;
   if (pCounter > 0) {
      array13 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array13.refC += 1;
   } else {
      array13 = ArrayT(413,13,1)
   }
   for (i in 0..array13.size) {
      array13.data[i]+=1;
   }
   for (i in 0..array13.size) {
      if (array13.data[i] == 80) { 
         return array13;
      }
   }
   return array13;
}

