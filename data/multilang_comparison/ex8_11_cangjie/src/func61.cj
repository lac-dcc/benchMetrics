func func61(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array22: ArrayT;
   if (pCounter > 0) {
      array22 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array22.refC += 1;
   } else {
      array22 = ArrayT(584,22,1)
   }
   return array22;
}

