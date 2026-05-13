proc func48*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array19: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array19 = vars.data[pCounter]
         inc array19.refC
         debugCopy(array19.id)
      else:
         array19 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array19.size = 956
         array19.refC = 1
         array19.id = 19
         array19.data = cast[ptr UncheckedArray[uint32]](alloc(array19.size * sizeof(uint32)))
         zeroMem(array19.data, array19.size * sizeof(uint32))
         debugNew(array19.id)
      let loopLimit10 = (50) div (5) + 1
      for loop10 in 0 ..< loopLimit10:
         discard
         for i in 0 ..< array19.size:
            dec array19.data[i]
         for i in 0 ..< array19.size:
            if array19.data[i] == 70:
               return array19
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array19
      var array20: ptr ArrayT = func60(addr params0, getPath(), loopsFactor)
      debugReturn(array20.id)
      dealloc(params0.data)
      dec array20.refC
      if array20.refC == 0:
         dealloc(array20.data)
         dealloc(array20)
         debugFree(array20.id)
      dec array19.refC
      if array19.refC == 0:
         dealloc(array19.data)
         dealloc(array19)
         debugFree(array19.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array27: ptr ArrayT = func52(addr params0, loopsFactor)
      debugReturn(array27.id)
      dealloc(params0.data)
      dec array27.refC
      if array27.refC == 0:
         dealloc(array27.data)
         dealloc(array27)
         debugFree(array27.id)
   var array29: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array29 = vars.data[pCounter]
      inc array29.refC
      debugCopy(array29.id)
   else:
      array29 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array29.size = 276
      array29.refC = 1
      array29.id = 29
      array29.data = cast[ptr UncheckedArray[uint32]](alloc(array29.size * sizeof(uint32)))
      zeroMem(array29.data, array29.size * sizeof(uint32))
      debugNew(array29.id)
   return array29

