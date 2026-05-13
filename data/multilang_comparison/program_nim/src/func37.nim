proc func37*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit40 = (50) div (4) + 1
   for loop40 in 0 ..< loopLimit40:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array129: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array129 = vars.data[pCounter]
            inc array129.refC
            debugCopy(array129.id)
         else:
            array129 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array129.size = 625
            array129.refC = 1
            array129.id = 129
            array129.data = cast[ptr UncheckedArray[uint32]](alloc(array129.size * sizeof(uint32)))
            zeroMem(array129.data, array129.size * sizeof(uint32))
            debugNew(array129.id)
         let loopLimit41 = (50) div (5) + 1
         for loop41 in 0 ..< loopLimit41:
            discard
            for i in 0 ..< array129.size:
               dec array129.data[i]
            for i in 0 ..< array129.size:
               if array129.data[i] == 99:
                  return array129
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array129
         var array130: ptr ArrayT = func54(addr params0, getPath(), loopsFactor)
         debugReturn(array130.id)
         dealloc(params0.data)
         dec array130.refC
         if array130.refC == 0:
            dealloc(array130.data)
            dealloc(array130)
            debugFree(array130.id)
         dec array129.refC
         if array129.refC == 0:
            dealloc(array129.data)
            dealloc(array129)
            debugFree(array129.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array131: ptr ArrayT = func50(addr params0, getPath(), loopsFactor)
         debugReturn(array131.id)
         dealloc(params0.data)
         dec array131.refC
         if array131.refC == 0:
            dealloc(array131.data)
            dealloc(array131)
            debugFree(array131.id)
      var array132: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array132 = vars.data[pCounter]
         inc array132.refC
         debugCopy(array132.id)
      else:
         array132 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array132.size = 298
         array132.refC = 1
         array132.id = 132
         array132.data = cast[ptr UncheckedArray[uint32]](alloc(array132.size * sizeof(uint32)))
         zeroMem(array132.data, array132.size * sizeof(uint32))
         debugNew(array132.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array132
      var array133: ptr ArrayT = func51(addr params0, loopsFactor)
      debugReturn(array133.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array134: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array134 = vars.data[pCounter]
            inc array134.refC
            debugCopy(array134.id)
         else:
            array134 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array134.size = 590
            array134.refC = 1
            array134.id = 134
            array134.data = cast[ptr UncheckedArray[uint32]](alloc(array134.size * sizeof(uint32)))
            zeroMem(array134.data, array134.size * sizeof(uint32))
            debugNew(array134.id)
         let loopLimit42 = (50) div (5) + 1
         for loop42 in 0 ..< loopLimit42:
            discard
            for i in 0 ..< array134.size:
               dec array134.data[i]
            for i in 0 ..< array132.size:
               if array132.data[i] == 19:
                  return array132
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array132
         params1.data[1] = array133
         params1.data[2] = array134
         var array135: ptr ArrayT = func60(addr params1, getPath(), loopsFactor)
         debugReturn(array135.id)
         dealloc(params1.data)
         dec array135.refC
         if array135.refC == 0:
            dealloc(array135.data)
            dealloc(array135)
            debugFree(array135.id)
         dec array134.refC
         if array134.refC == 0:
            dealloc(array134.data)
            dealloc(array134)
            debugFree(array134.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array132
         params1.data[1] = array133
         var array136: ptr ArrayT = func52(addr params1, loopsFactor)
         debugReturn(array136.id)
         dealloc(params1.data)
         dec array136.refC
         if array136.refC == 0:
            dealloc(array136.data)
            dealloc(array136)
            debugFree(array136.id)
      for i in 0 ..< array132.size:
         if array132.data[i] == 79:
            return array132
      dec array133.refC
      if array133.refC == 0:
         dealloc(array133.data)
         dealloc(array133)
         debugFree(array133.id)
      dec array132.refC
      if array132.refC == 0:
         dealloc(array132.data)
         dealloc(array132)
         debugFree(array132.id)
   var array137: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array137 = vars.data[pCounter]
      inc array137.refC
      debugCopy(array137.id)
   else:
      array137 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array137.size = 769
      array137.refC = 1
      array137.id = 137
      array137.data = cast[ptr UncheckedArray[uint32]](alloc(array137.size * sizeof(uint32)))
      zeroMem(array137.data, array137.size * sizeof(uint32))
      debugNew(array137.id)
   return array137

