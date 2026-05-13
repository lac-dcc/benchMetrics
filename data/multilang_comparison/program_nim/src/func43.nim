proc func43*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit24 = (50) div (4) + 1
   for loop24 in 0 ..< loopLimit24:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array72: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array72 = vars.data[pCounter]
            inc array72.refC
            debugCopy(array72.id)
         else:
            array72 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array72.size = 529
            array72.refC = 1
            array72.id = 72
            array72.data = cast[ptr UncheckedArray[uint32]](alloc(array72.size * sizeof(uint32)))
            zeroMem(array72.data, array72.size * sizeof(uint32))
            debugNew(array72.id)
         let loopLimit25 = (50) div (5) + 1
         for loop25 in 0 ..< loopLimit25:
            discard
            for i in 0 ..< array72.size:
               dec array72.data[i]
            for i in 0 ..< array72.size:
               if array72.data[i] == 43:
                  return array72
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array72
         var array73: ptr ArrayT = func60(addr params0, getPath(), loopsFactor)
         debugReturn(array73.id)
         dealloc(params0.data)
         dec array73.refC
         if array73.refC == 0:
            dealloc(array73.data)
            dealloc(array73)
            debugFree(array73.id)
         dec array72.refC
         if array72.refC == 0:
            dealloc(array72.data)
            dealloc(array72)
            debugFree(array72.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array74: ptr ArrayT = func52(addr params0, loopsFactor)
         debugReturn(array74.id)
         dealloc(params0.data)
         dec array74.refC
         if array74.refC == 0:
            dealloc(array74.data)
            dealloc(array74)
            debugFree(array74.id)
      var array75: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array75 = vars.data[pCounter]
         inc array75.refC
         debugCopy(array75.id)
      else:
         array75 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array75.size = 840
         array75.refC = 1
         array75.id = 75
         array75.data = cast[ptr UncheckedArray[uint32]](alloc(array75.size * sizeof(uint32)))
         zeroMem(array75.data, array75.size * sizeof(uint32))
         debugNew(array75.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array75
      var array76: ptr ArrayT = func53(addr params0, loopsFactor)
      debugReturn(array76.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array77: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array77 = vars.data[pCounter]
            inc array77.refC
            debugCopy(array77.id)
         else:
            array77 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array77.size = 128
            array77.refC = 1
            array77.id = 77
            array77.data = cast[ptr UncheckedArray[uint32]](alloc(array77.size * sizeof(uint32)))
            zeroMem(array77.data, array77.size * sizeof(uint32))
            debugNew(array77.id)
         let loopLimit26 = (50) div (5) + 1
         for loop26 in 0 ..< loopLimit26:
            discard
            for i in 0 ..< array75.size:
               dec array75.data[i]
            for i in 0 ..< array75.size:
               if array75.data[i] == 17:
                  return array75
         dec array77.refC
         if array77.refC == 0:
            dealloc(array77.data)
            dealloc(array77)
            debugFree(array77.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array75
         params1.data[1] = array76
         var array78: ptr ArrayT = func58(addr params1, loopsFactor)
         debugReturn(array78.id)
         dealloc(params1.data)
         dec array78.refC
         if array78.refC == 0:
            dealloc(array78.data)
            dealloc(array78)
            debugFree(array78.id)
      for i in 0 ..< array75.size:
         if array75.data[i] == 43:
            return array75
      dec array76.refC
      if array76.refC == 0:
         dealloc(array76.data)
         dealloc(array76)
         debugFree(array76.id)
      dec array75.refC
      if array75.refC == 0:
         dealloc(array75.data)
         dealloc(array75)
         debugFree(array75.id)
   var array79: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array79 = vars.data[pCounter]
      inc array79.refC
      debugCopy(array79.id)
   else:
      array79 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array79.size = 470
      array79.refC = 1
      array79.id = 79
      array79.data = cast[ptr UncheckedArray[uint32]](alloc(array79.size * sizeof(uint32)))
      zeroMem(array79.data, array79.size * sizeof(uint32))
      debugNew(array79.id)
   return array79

