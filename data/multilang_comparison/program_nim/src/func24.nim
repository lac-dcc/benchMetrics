proc func24*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array163: ptr ArrayT = func25(addr params0, getPath(), loopsFactor)
      debugReturn(array163.id)
      dealloc(params0.data)
      dec array163.refC
      if array163.refC == 0:
         dealloc(array163.data)
         dealloc(array163)
         debugFree(array163.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array173: ptr ArrayT = func26(addr params0, getPath(), loopsFactor)
      debugReturn(array173.id)
      dealloc(params0.data)
      dec array173.refC
      if array173.refC == 0:
         dealloc(array173.data)
         dealloc(array173)
         debugFree(array173.id)
   var params0: ArrayTParam
   params0.size = 0
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   var array178: ptr ArrayT = func27(addr params0, getPath(), loopsFactor)
   debugReturn(array178.id)
   dealloc(params0.data)
   return array178

