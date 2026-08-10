func func63(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array26: ArrayT;
   if (pCounter > 0) {
      array26 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array26.refC += 1;
   } else {
      array26 = ArrayT(586,26,1)
   }
   return array26;
}

