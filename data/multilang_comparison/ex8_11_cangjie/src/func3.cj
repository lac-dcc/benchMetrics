func func3(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array291: ArrayT;
   if (pCounter > 0) {
      array291 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array291.refC += 1;
   } else {
      array291 = ArrayT(682,291,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array291;
   var array292 = func6(params0, path, loopsFactor);
   var loop83: UInt64 = 0;
   var loopLimit83: UInt64 = UInt64((50)/2 + 1);
   for(_ in loop83..loopLimit83) {
      for (i in 0..array291.size) {
         array291.data[i]+=1;
      }
   }
   for (i in 0..array292.size) {
      if (array292.data[i] == 30) { 
         return array292;
      }
   }
   return array291;
}

