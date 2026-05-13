proc func11*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit3 = (50) div (3) + 1
   for loop3 in 0 ..< loopLimit3:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array5: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array5 = vars.data[pCounter]
            inc array5.refC
            debugCopy(array5.id)
         else:
            array5 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array5.size = 59
            array5.refC = 1
            array5.id = 5
            array5.data = cast[ptr UncheckedArray[uint32]](alloc(array5.size * sizeof(uint32)))
            zeroMem(array5.data, array5.size * sizeof(uint32))
            debugNew(array5.id)
         let loopLimit4 = (50) div (4) + 1
         for loop4 in 0 ..< loopLimit4:
            discard
            for i in 0 ..< array5.size:
               dec array5.data[i]
            for i in 0 ..< array5.size:
               if array5.data[i] == 40:
                  return array5
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array5
         var array6: ptr ArrayT = func28(addr params0, getPath(), loopsFactor)
         debugReturn(array6.id)
         dealloc(params0.data)
         dec array6.refC
         if array6.refC == 0:
            dealloc(array6.data)
            dealloc(array6)
            debugFree(array6.id)
         dec array5.refC
         if array5.refC == 0:
            dealloc(array5.data)
            dealloc(array5)
            debugFree(array5.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array112: ptr ArrayT = func22(addr params0, getPath(), loopsFactor)
         debugReturn(array112.id)
         dealloc(params0.data)
         dec array112.refC
         if array112.refC == 0:
            dealloc(array112.data)
            dealloc(array112)
            debugFree(array112.id)
      var array122: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array122 = vars.data[pCounter]
         inc array122.refC
         debugCopy(array122.id)
      else:
         array122 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array122.size = 705
         array122.refC = 1
         array122.id = 122
         array122.data = cast[ptr UncheckedArray[uint32]](alloc(array122.size * sizeof(uint32)))
         zeroMem(array122.data, array122.size * sizeof(uint32))
         debugNew(array122.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array122
      var array123: ptr ArrayT = func23(addr params0, loopsFactor)
      debugReturn(array123.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array126: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array126 = vars.data[pCounter]
            inc array126.refC
            debugCopy(array126.id)
         else:
            array126 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array126.size = 396
            array126.refC = 1
            array126.id = 126
            array126.data = cast[ptr UncheckedArray[uint32]](alloc(array126.size * sizeof(uint32)))
            zeroMem(array126.data, array126.size * sizeof(uint32))
            debugNew(array126.id)
         let loopLimit39 = (50) div (4) + 1
         for loop39 in 0 ..< loopLimit39:
            discard
            for i in 0 ..< array123.size:
               dec array123.data[i]
            for i in 0 ..< array122.size:
               if array122.data[i] == 84:
                  return array122
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array122
         params1.data[1] = array123
         params1.data[2] = array126
         var array127: ptr ArrayT = func36(addr params1, getPath(), loopsFactor)
         debugReturn(array127.id)
         dealloc(params1.data)
         dec array127.refC
         if array127.refC == 0:
            dealloc(array127.data)
            dealloc(array127)
            debugFree(array127.id)
         dec array126.refC
         if array126.refC == 0:
            dealloc(array126.data)
            dealloc(array126)
            debugFree(array126.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array122
         params1.data[1] = array123
         var array149: ptr ArrayT = func32(addr params1, getPath(), loopsFactor)
         debugReturn(array149.id)
         dealloc(params1.data)
         dec array149.refC
         if array149.refC == 0:
            dealloc(array149.data)
            dealloc(array149)
            debugFree(array149.id)
      for i in 0 ..< array123.size:
         if array123.data[i] == 92:
            return array123
      dec array123.refC
      if array123.refC == 0:
         dealloc(array123.data)
         dealloc(array123)
         debugFree(array123.id)
      dec array122.refC
      if array122.refC == 0:
         dealloc(array122.data)
         dealloc(array122)
         debugFree(array122.id)
   var array159: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array159 = vars.data[pCounter]
      inc array159.refC
      debugCopy(array159.id)
   else:
      array159 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array159.size = 686
      array159.refC = 1
      array159.id = 159
      array159.data = cast[ptr UncheckedArray[uint32]](alloc(array159.size * sizeof(uint32)))
      zeroMem(array159.data, array159.size * sizeof(uint32))
      debugNew(array159.id)
   return array159

