proc func28*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array7: ptr ArrayT = func29(addr params0, getPath(), loopsFactor)
      debugReturn(array7.id)
      dealloc(params0.data)
      dec array7.refC
      if array7.refC == 0:
         dealloc(array7.data)
         dealloc(array7)
         debugFree(array7.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array68: ptr ArrayT = func30(addr params0, getPath(), loopsFactor)
      debugReturn(array68.id)
      dealloc(params0.data)
      dec array68.refC
      if array68.refC == 0:
         dealloc(array68.data)
         dealloc(array68)
         debugFree(array68.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array104: ptr ArrayT = func31(addr params0, getPath(), loopsFactor)
   debugReturn(array104.id)
   dealloc(params0.data)
   return array104

