proc func10*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array4: ptr ArrayT = func11(addr params0, getPath(), loopsFactor)
      debugReturn(array4.id)
      dealloc(params0.data)
      dec array4.refC
      if array4.refC == 0:
         dealloc(array4.data)
         dealloc(array4)
         debugFree(array4.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array160: ptr ArrayT = func12(addr params0, getPath(), loopsFactor)
      debugReturn(array160.id)
      dealloc(params0.data)
      dec array160.refC
      if array160.refC == 0:
         dealloc(array160.data)
         dealloc(array160)
         debugFree(array160.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array197: ptr ArrayT = func13(addr params0, getPath(), loopsFactor)
   debugReturn(array197.id)
   dealloc(params0.data)
   return array197

