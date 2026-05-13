proc func54*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array52: ptr ArrayT = func55(addr params0, loopsFactor)
      debugReturn(array52.id)
      dealloc(params0.data)
      dec array52.refC
      if array52.refC == 0:
         dealloc(array52.data)
         dealloc(array52)
         debugFree(array52.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array54: ptr ArrayT = func56(addr params0, getPath(), loopsFactor)
      debugReturn(array54.id)
      dealloc(params0.data)
      dec array54.refC
      if array54.refC == 0:
         dealloc(array54.data)
         dealloc(array54)
         debugFree(array54.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array58: ptr ArrayT = func57(addr params0, loopsFactor)
   debugReturn(array58.id)
   dealloc(params0.data)
   return array58

