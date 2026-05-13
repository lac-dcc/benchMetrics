proc func20*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array232: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array232 = vars.data[pCounter]
         inc array232.refC
         debugCopy(array232.id)
      else:
         array232 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array232.size = 231
         array232.refC = 1
         array232.id = 232
         array232.data = cast[ptr UncheckedArray[uint32]](alloc(array232.size * sizeof(uint32)))
         zeroMem(array232.data, array232.size * sizeof(uint32))
         debugNew(array232.id)
      let loopLimit68 = (50) div (3) + 1
      for loop68 in 0 ..< loopLimit68:
         discard
         for i in 0 ..< array232.size:
            dec array232.data[i]
         for i in 0 ..< array232.size:
            if array232.data[i] == 40:
               return array232
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array232
      var array233: ptr ArrayT = func28(addr params0, getPath(), loopsFactor)
      debugReturn(array233.id)
      dealloc(params0.data)
      dec array233.refC
      if array233.refC == 0:
         dealloc(array233.data)
         dealloc(array233)
         debugFree(array233.id)
      dec array232.refC
      if array232.refC == 0:
         dealloc(array232.data)
         dealloc(array232)
         debugFree(array232.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array234: ptr ArrayT = func22(addr params0, getPath(), loopsFactor)
      debugReturn(array234.id)
      dealloc(params0.data)
      dec array234.refC
      if array234.refC == 0:
         dealloc(array234.data)
         dealloc(array234)
         debugFree(array234.id)
   var array235: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array235 = vars.data[pCounter]
      inc array235.refC
      debugCopy(array235.id)
   else:
      array235 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array235.size = 81
      array235.refC = 1
      array235.id = 235
      array235.data = cast[ptr UncheckedArray[uint32]](alloc(array235.size * sizeof(uint32)))
      zeroMem(array235.data, array235.size * sizeof(uint32))
      debugNew(array235.id)
   return array235

