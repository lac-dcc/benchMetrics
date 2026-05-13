proc func42*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array71: ptr ArrayT = func43(addr params0, getPath(), loopsFactor)
      debugReturn(array71.id)
      dealloc(params0.data)
      dec array71.refC
      if array71.refC == 0:
         dealloc(array71.data)
         dealloc(array71)
         debugFree(array71.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array80: ptr ArrayT = func44(addr params0, getPath(), loopsFactor)
      debugReturn(array80.id)
      dealloc(params0.data)
      dec array80.refC
      if array80.refC == 0:
         dealloc(array80.data)
         dealloc(array80)
         debugFree(array80.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array85: ptr ArrayT = func45(addr params0, getPath(), loopsFactor)
   debugReturn(array85.id)
   dealloc(params0.data)
   return array85

