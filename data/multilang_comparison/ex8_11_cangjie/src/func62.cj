func func62(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array24: ArrayT;
   if (pCounter > 0) {
      array24 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array24.refC += 1;
   } else {
      array24 = ArrayT(60,24,1)
   }
   return array24;
}

