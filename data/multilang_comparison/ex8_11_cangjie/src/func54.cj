func func54(vars: ArrayTParam, PATH0: UInt64, loopsFactor: Int64): ArrayT{
   var path: UInt64 = get_path();
   var pCounter: Int64 = vars.size;
   if((PATH0 & 1) != 1) {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array52 = func55(params0, loopsFactor);
   }
   else {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array54 = func56(params0, path, loopsFactor);
   }
   var params0: ArrayTParam;
   params0= ArrayTParam(0)
   var array58 = func57(params0, loopsFactor);
   return array58;
}

