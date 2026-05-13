proc func6*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array255: ptr ArrayT = func7(addr params0, getPath(), loopsFactor)
      debugReturn(array255.id)
      dealloc(params0.data)
      dec array255.refC
      if array255.refC == 0:
         dealloc(array255.data)
         dealloc(array255)
         debugFree(array255.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array265: ptr ArrayT = func8(addr params0, getPath(), loopsFactor)
      debugReturn(array265.id)
      dealloc(params0.data)
      dec array265.refC
      if array265.refC == 0:
         dealloc(array265.data)
         dealloc(array265)
         debugFree(array265.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array270: ptr ArrayT = func9(addr params0, getPath(), loopsFactor)
   debugReturn(array270.id)
   dealloc(params0.data)
   return array270

