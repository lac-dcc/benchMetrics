proc func0*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array1: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array1 = vars.data[pCounter]
      inc array1.refC
      debugCopy(array1.id)
   else:
      array1 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array1.size = 793
      array1.refC = 1
      array1.id = 1
      array1.data = cast[ptr UncheckedArray[uint32]](alloc(array1.size * sizeof(uint32)))
      zeroMem(array1.data, array1.size * sizeof(uint32))
      debugNew(array1.id)
   let loopLimit1 = (50) div (2) + 1
   for loop1 in 0 ..< loopLimit1:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array2: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array2 = vars.data[pCounter]
            inc array2.refC
            debugCopy(array2.id)
         else:
            array2 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array2.size = 335
            array2.refC = 1
            array2.id = 2
            array2.data = cast[ptr UncheckedArray[uint32]](alloc(array2.size * sizeof(uint32)))
            zeroMem(array2.data, array2.size * sizeof(uint32))
            debugNew(array2.id)
         let loopLimit2 = (50) div (3) + 1
         for loop2 in 0 ..< loopLimit2:
            discard
            for i in 0 ..< array1.size:
               dec array1.data[i]
            for i in 0 ..< array1.size:
               if array1.data[i] == 49:
                  return array1
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array1
         params0.data[1] = array2
         var array3: ptr ArrayT = func10(addr params0, getPath(), loopsFactor)
         debugReturn(array3.id)
         dealloc(params0.data)
         dec array3.refC
         if array3.refC == 0:
            dealloc(array3.data)
            dealloc(array3)
            debugFree(array3.id)
         dec array2.refC
         if array2.refC == 0:
            dealloc(array2.data)
            dealloc(array2)
            debugFree(array2.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array1
         var array205: ptr ArrayT = func4(addr params0, getPath(), loopsFactor)
         debugReturn(array205.id)
         dealloc(params0.data)
         dec array205.refC
         if array205.refC == 0:
            dealloc(array205.data)
            dealloc(array205)
            debugFree(array205.id)
      var array215: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array215 = vars.data[pCounter]
         inc array215.refC
         debugCopy(array215.id)
      else:
         array215 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array215.size = 483
         array215.refC = 1
         array215.id = 215
         array215.data = cast[ptr UncheckedArray[uint32]](alloc(array215.size * sizeof(uint32)))
         zeroMem(array215.data, array215.size * sizeof(uint32))
         debugNew(array215.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array1
      params0.data[1] = array215
      var array216: ptr ArrayT = func5(addr params0, loopsFactor)
      debugReturn(array216.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array219: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array219 = vars.data[pCounter]
            inc array219.refC
            debugCopy(array219.id)
         else:
            array219 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array219.size = 438
            array219.refC = 1
            array219.id = 219
            array219.data = cast[ptr UncheckedArray[uint32]](alloc(array219.size * sizeof(uint32)))
            zeroMem(array219.data, array219.size * sizeof(uint32))
            debugNew(array219.id)
         let loopLimit64 = (50) div (3) + 1
         for loop64 in 0 ..< loopLimit64:
            discard
            for i in 0 ..< array215.size:
               dec array215.data[i]
            for i in 0 ..< array1.size:
               if array1.data[i] == 74:
                  return array1
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array1
         params1.data[1] = array215
         params1.data[2] = array216
         params1.data[3] = array219
         var array220: ptr ArrayT = func18(addr params1, getPath(), loopsFactor)
         debugReturn(array220.id)
         dealloc(params1.data)
         dec array220.refC
         if array220.refC == 0:
            dealloc(array220.data)
            dealloc(array220)
            debugFree(array220.id)
         dec array219.refC
         if array219.refC == 0:
            dealloc(array219.data)
            dealloc(array219)
            debugFree(array219.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array1
         params1.data[1] = array215
         params1.data[2] = array216
         var array242: ptr ArrayT = func14(addr params1, getPath(), loopsFactor)
         debugReturn(array242.id)
         dealloc(params1.data)
         dec array242.refC
         if array242.refC == 0:
            dealloc(array242.data)
            dealloc(array242)
            debugFree(array242.id)
      for i in 0 ..< array215.size:
         if array215.data[i] == 93:
            return array215
      dec array216.refC
      if array216.refC == 0:
         dealloc(array216.data)
         dealloc(array216)
         debugFree(array216.id)
      dec array215.refC
      if array215.refC == 0:
         dealloc(array215.data)
         dealloc(array215)
         debugFree(array215.id)
   return array1

