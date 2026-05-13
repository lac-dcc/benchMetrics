proc func56*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array55: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array55 = vars.data[pCounter]
         inc array55.refC
         debugCopy(array55.id)
      else:
         array55 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array55.size = 796
         array55.refC = 1
         array55.id = 55
         array55.data = cast[ptr UncheckedArray[uint32]](alloc(array55.size * sizeof(uint32)))
         zeroMem(array55.data, array55.size * sizeof(uint32))
         debugNew(array55.id)
      let loopLimit20 = (50) div (5) + 1
      for loop20 in 0 ..< loopLimit20:
         discard
         for i in 0 ..< array55.size:
            dec array55.data[i]
         for i in 0 ..< array55.size:
            if array55.data[i] == 45:
               return array55
      dec array55.refC
      if array55.refC == 0:
         dealloc(array55.data)
         dealloc(array55)
         debugFree(array55.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array56: ptr ArrayT = func58(addr params0, loopsFactor)
      debugReturn(array56.id)
      dealloc(params0.data)
      dec array56.refC
      if array56.refC == 0:
         dealloc(array56.data)
         dealloc(array56)
         debugFree(array56.id)
   var array57: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array57 = vars.data[pCounter]
      inc array57.refC
      debugCopy(array57.id)
   else:
      array57 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array57.size = 921
      array57.refC = 1
      array57.id = 57
      array57.data = cast[ptr UncheckedArray[uint32]](alloc(array57.size * sizeof(uint32)))
      zeroMem(array57.data, array57.size * sizeof(uint32))
      debugNew(array57.id)
   return array57

