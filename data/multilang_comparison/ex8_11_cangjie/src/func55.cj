func func55(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var loop19: UInt64 = 0;
   var loopLimit19: UInt64 = UInt64((50)/5 + 1);
   for(_ in loop19..loopLimit19) {
   }
   var array53: ArrayT;
   if (pCounter > 0) {
      array53 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array53.refC += 1;
   } else {
      array53 = ArrayT(395,53,1)
   }
   return array53;
}

