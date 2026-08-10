func func5(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array217: ArrayT;
   if (pCounter > 0) {
      array217 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array217.refC += 1;
   } else {
      array217 = ArrayT(30,217,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array217;
   var array218 = func10(params0, path, loopsFactor);
   var loop63: UInt64 = 0;
   var loopLimit63: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop63..loopLimit63) {
      for (i in 0..array217.size) {
         array217.data[i]+=1;
      }
   }
   for (i in 0..array218.size) {
      if (array218.data[i] == 86) { 
         return array218;
      }
   }
   return array218;
}

