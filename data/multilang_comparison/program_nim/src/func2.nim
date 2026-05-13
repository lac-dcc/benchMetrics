proc func2*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array279: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array279 = vars.data[pCounter]
      inc array279.refC
      debugCopy(array279.id)
   else:
      array279 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array279.size = 596
      array279.refC = 1
      array279.id = 279
      array279.data = cast[ptr UncheckedArray[uint32]](alloc(array279.size * sizeof(uint32)))
      zeroMem(array279.data, array279.size * sizeof(uint32))
      debugNew(array279.id)
   let loopLimit80 = (50) div (2) + 1
   for loop80 in 0 ..< loopLimit80:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array280: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array280 = vars.data[pCounter]
            inc array280.refC
            debugCopy(array280.id)
         else:
            array280 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array280.size = 981
            array280.refC = 1
            array280.id = 280
            array280.data = cast[ptr UncheckedArray[uint32]](alloc(array280.size * sizeof(uint32)))
            zeroMem(array280.data, array280.size * sizeof(uint32))
            debugNew(array280.id)
         let loopLimit81 = (50) div (3) + 1
         for loop81 in 0 ..< loopLimit81:
            discard
            for i in 0 ..< array280.size:
               dec array280.data[i]
            for i in 0 ..< array279.size:
               if array279.data[i] == 36:
                  return array279
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array279
         params0.data[1] = array280
         var array281: ptr ArrayT = func18(addr params0, getPath(), loopsFactor)
         debugReturn(array281.id)
         dealloc(params0.data)
         dec array281.refC
         if array281.refC == 0:
            dealloc(array281.data)
            dealloc(array281)
            debugFree(array281.id)
         dec array280.refC
         if array280.refC == 0:
            dealloc(array280.data)
            dealloc(array280)
            debugFree(array280.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array279
         var array282: ptr ArrayT = func14(addr params0, getPath(), loopsFactor)
         debugReturn(array282.id)
         dealloc(params0.data)
         dec array282.refC
         if array282.refC == 0:
            dealloc(array282.data)
            dealloc(array282)
            debugFree(array282.id)
      var array283: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array283 = vars.data[pCounter]
         inc array283.refC
         debugCopy(array283.id)
      else:
         array283 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array283.size = 342
         array283.refC = 1
         array283.id = 283
         array283.data = cast[ptr UncheckedArray[uint32]](alloc(array283.size * sizeof(uint32)))
         zeroMem(array283.data, array283.size * sizeof(uint32))
         debugNew(array283.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array279
      params0.data[1] = array283
      var array284: ptr ArrayT = func15(addr params0, loopsFactor)
      debugReturn(array284.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array285: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array285 = vars.data[pCounter]
            inc array285.refC
            debugCopy(array285.id)
         else:
            array285 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array285.size = 379
            array285.refC = 1
            array285.id = 285
            array285.data = cast[ptr UncheckedArray[uint32]](alloc(array285.size * sizeof(uint32)))
            zeroMem(array285.data, array285.size * sizeof(uint32))
            debugNew(array285.id)
         let loopLimit82 = (50) div (3) + 1
         for loop82 in 0 ..< loopLimit82:
            discard
            for i in 0 ..< array283.size:
               dec array283.data[i]
            for i in 0 ..< array284.size:
               if array284.data[i] == 84:
                  return array284
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array279
         params1.data[1] = array283
         params1.data[2] = array284
         params1.data[3] = array285
         var array286: ptr ArrayT = func24(addr params1, getPath(), loopsFactor)
         debugReturn(array286.id)
         dealloc(params1.data)
         dec array286.refC
         if array286.refC == 0:
            dealloc(array286.data)
            dealloc(array286)
            debugFree(array286.id)
         dec array285.refC
         if array285.refC == 0:
            dealloc(array285.data)
            dealloc(array285)
            debugFree(array285.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array279
         params1.data[1] = array283
         params1.data[2] = array284
         var array287: ptr ArrayT = func16(addr params1, getPath(), loopsFactor)
         debugReturn(array287.id)
         dealloc(params1.data)
         dec array287.refC
         if array287.refC == 0:
            dealloc(array287.data)
            dealloc(array287)
            debugFree(array287.id)
      for i in 0 ..< array279.size:
         if array279.data[i] == 72:
            return array279
      dec array284.refC
      if array284.refC == 0:
         dealloc(array284.data)
         dealloc(array284)
         debugFree(array284.id)
      dec array283.refC
      if array283.refC == 0:
         dealloc(array283.data)
         dealloc(array283)
         debugFree(array283.id)
   for i in 0 ..< array279.size:
      dec array279.data[i]
   for i in 0 ..< array279.size:
      if array279.data[i] == 63:
         return array279
   return array279

