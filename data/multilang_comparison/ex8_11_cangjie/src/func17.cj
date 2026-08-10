func func17(vars: ArrayTParam, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   var array200: ArrayT;
   if (pCounter > 0) {
      array200 = vars.data[pCounter-1].getOrThrow();
      pCounter -= 1;
      array200.refC += 1;
   } else {
      array200 = ArrayT(516,200,1)
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(1)
   params0.data[0] = array200;
   var array201 = func24(params0, path, loopsFactor);
   var loop58: UInt64 = 0;
   var loopLimit58: UInt64 = UInt64((50)/3 + 1);
   for(_ in loop58..loopLimit58) {
      for (i in 0..array201.size) {
         array201.data[i]+=1;
      }
   }
   for (i in 0..array201.size) {
      if (array201.data[i] == 96) { 
         return array201;
      }
   }
   return array200;
}

