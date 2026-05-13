proc func36*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array128: ptr ArrayT = func37(addr params0, getPath(), loopsFactor)
      debugReturn(array128.id)
      dealloc(params0.data)
      dec array128.refC
      if array128.refC == 0:
         dealloc(array128.data)
         dealloc(array128)
         debugFree(array128.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array138: ptr ArrayT = func38(addr params0, getPath(), loopsFactor)
      debugReturn(array138.id)
      dealloc(params0.data)
      dec array138.refC
      if array138.refC == 0:
         dealloc(array138.data)
         dealloc(array138)
         debugFree(array138.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array143: ptr ArrayT = func39(addr params0, getPath(), loopsFactor)
   debugReturn(array143.id)
   dealloc(params0.data)
   return array143

