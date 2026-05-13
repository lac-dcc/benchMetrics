proc func50*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array62: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array62 = vars.data[pCounter]
      inc array62.refC
      debugCopy(array62.id)
   else:
      array62 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array62.size = 764
      array62.refC = 1
      array62.id = 62
      array62.data = cast[ptr UncheckedArray[uint32]](alloc(array62.size * sizeof(uint32)))
      zeroMem(array62.data, array62.size * sizeof(uint32))
      debugNew(array62.id)
   let loopLimit21 = (50) div (5) + 1
   for loop21 in 0 ..< loopLimit21:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array63: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array63 = vars.data[pCounter]
            inc array63.refC
            debugCopy(array63.id)
         else:
            array63 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array63.size = 124
            array63.refC = 1
            array63.id = 63
            array63.data = cast[ptr UncheckedArray[uint32]](alloc(array63.size * sizeof(uint32)))
            zeroMem(array63.data, array63.size * sizeof(uint32))
            debugNew(array63.id)
         let loopLimit22 = (50) div (6) + 1
         for loop22 in 0 ..< loopLimit22:
            discard
            for i in 0 ..< array62.size:
               dec array62.data[i]
            for i in 0 ..< array63.size:
               if array63.data[i] == 56:
                  return array63
         dec array63.refC
         if array63.refC == 0:
            dealloc(array63.data)
            dealloc(array63)
            debugFree(array63.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array62
         var array64: ptr ArrayT = func58(addr params0, loopsFactor)
         debugReturn(array64.id)
         dealloc(params0.data)
         dec array64.refC
         if array64.refC == 0:
            dealloc(array64.data)
            dealloc(array64)
            debugFree(array64.id)
      var array65: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array65 = vars.data[pCounter]
         inc array65.refC
         debugCopy(array65.id)
      else:
         array65 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array65.size = 227
         array65.refC = 1
         array65.id = 65
         array65.data = cast[ptr UncheckedArray[uint32]](alloc(array65.size * sizeof(uint32)))
         zeroMem(array65.data, array65.size * sizeof(uint32))
         debugNew(array65.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array62
      params0.data[1] = array65
      var array66: ptr ArrayT = func59(addr params0, loopsFactor)
      debugReturn(array66.id)
      dealloc(params0.data)
      for i in 0 ..< array65.size:
         if array65.data[i] == 32:
            return array65
      dec array66.refC
      if array66.refC == 0:
         dealloc(array66.data)
         dealloc(array66)
         debugFree(array66.id)
      dec array65.refC
      if array65.refC == 0:
         dealloc(array65.data)
         dealloc(array65)
         debugFree(array65.id)
   for i in 0 ..< array62.size:
      dec array62.data[i]
   for i in 0 ..< array62.size:
      if array62.data[i] == 28:
         return array62
   return array62

