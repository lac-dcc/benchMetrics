proc func60*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array21: ptr ArrayT = func61(addr params0, loopsFactor)
      debugReturn(array21.id)
      dealloc(params0.data)
      dec array21.refC
      if array21.refC == 0:
         dealloc(array21.data)
         dealloc(array21)
         debugFree(array21.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array23: ptr ArrayT = func62(addr params0, loopsFactor)
      debugReturn(array23.id)
      dealloc(params0.data)
      dec array23.refC
      if array23.refC == 0:
         dealloc(array23.data)
         dealloc(array23)
         debugFree(array23.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array25: ptr ArrayT = func63(addr params0, loopsFactor)
   debugReturn(array25.id)
   dealloc(params0.data)
   return array25

