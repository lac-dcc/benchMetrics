proc func18*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array221: ptr ArrayT = func19(addr params0, getPath(), loopsFactor)
      debugReturn(array221.id)
      dealloc(params0.data)
      dec array221.refC
      if array221.refC == 0:
         dealloc(array221.data)
         dealloc(array221)
         debugFree(array221.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array231: ptr ArrayT = func20(addr params0, getPath(), loopsFactor)
      debugReturn(array231.id)
      dealloc(params0.data)
      dec array231.refC
      if array231.refC == 0:
         dealloc(array231.data)
         dealloc(array231)
         debugFree(array231.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array236: ptr ArrayT = func21(addr params0, getPath(), loopsFactor)
   debugReturn(array236.id)
   dealloc(params0.data)
   return array236

