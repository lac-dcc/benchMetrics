proc func46*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array10: ptr ArrayT = func47(addr params0, getPath(), loopsFactor)
      debugReturn(array10.id)
      dealloc(params0.data)
      dec array10.refC
      if array10.refC == 0:
         dealloc(array10.data)
         dealloc(array10)
         debugFree(array10.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array18: ptr ArrayT = func48(addr params0, getPath(), loopsFactor)
      debugReturn(array18.id)
      dealloc(params0.data)
      dec array18.refC
      if array18.refC == 0:
         dealloc(array18.data)
         dealloc(array18)
         debugFree(array18.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array30: ptr ArrayT = func49(addr params0, getPath(), loopsFactor)
   debugReturn(array30.id)
   dealloc(params0.data)
   return array30

