proc func40*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array38: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array38 = vars.data[pCounter]
      inc array38.refC
      debugCopy(array38.id)
   else:
      array38 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array38.size = 97
      array38.refC = 1
      array38.id = 38
      array38.data = cast[ptr UncheckedArray[uint32]](alloc(array38.size * sizeof(uint32)))
      zeroMem(array38.data, array38.size * sizeof(uint32))
      debugNew(array38.id)
   let loopLimit14 = (50) div (5) + 1
   for loop14 in 0 ..< loopLimit14:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array39: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array39 = vars.data[pCounter]
            inc array39.refC
            debugCopy(array39.id)
         else:
            array39 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array39.size = 902
            array39.refC = 1
            array39.id = 39
            array39.data = cast[ptr UncheckedArray[uint32]](alloc(array39.size * sizeof(uint32)))
            zeroMem(array39.data, array39.size * sizeof(uint32))
            debugNew(array39.id)
         let loopLimit15 = (50) div (6) + 1
         for loop15 in 0 ..< loopLimit15:
            discard
            for i in 0 ..< array39.size:
               dec array39.data[i]
            for i in 0 ..< array38.size:
               if array38.data[i] == 52:
                  return array38
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array38
         params0.data[1] = array39
         var array40: ptr ArrayT = func60(addr params0, getPath(), loopsFactor)
         debugReturn(array40.id)
         dealloc(params0.data)
         dec array40.refC
         if array40.refC == 0:
            dealloc(array40.data)
            dealloc(array40)
            debugFree(array40.id)
         dec array39.refC
         if array39.refC == 0:
            dealloc(array39.data)
            dealloc(array39)
            debugFree(array39.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array38
         var array41: ptr ArrayT = func52(addr params0, loopsFactor)
         debugReturn(array41.id)
         dealloc(params0.data)
         dec array41.refC
         if array41.refC == 0:
            dealloc(array41.data)
            dealloc(array41)
            debugFree(array41.id)
      var array42: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array42 = vars.data[pCounter]
         inc array42.refC
         debugCopy(array42.id)
      else:
         array42 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array42.size = 441
         array42.refC = 1
         array42.id = 42
         array42.data = cast[ptr UncheckedArray[uint32]](alloc(array42.size * sizeof(uint32)))
         zeroMem(array42.data, array42.size * sizeof(uint32))
         debugNew(array42.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array38
      params0.data[1] = array42
      var array43: ptr ArrayT = func53(addr params0, loopsFactor)
      debugReturn(array43.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array44: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array44 = vars.data[pCounter]
            inc array44.refC
            debugCopy(array44.id)
         else:
            array44 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array44.size = 444
            array44.refC = 1
            array44.id = 44
            array44.data = cast[ptr UncheckedArray[uint32]](alloc(array44.size * sizeof(uint32)))
            zeroMem(array44.data, array44.size * sizeof(uint32))
            debugNew(array44.id)
         let loopLimit16 = (50) div (6) + 1
         for loop16 in 0 ..< loopLimit16:
            discard
            for i in 0 ..< array44.size:
               dec array44.data[i]
            for i in 0 ..< array38.size:
               if array38.data[i] == 29:
                  return array38
         dec array44.refC
         if array44.refC == 0:
            dealloc(array44.data)
            dealloc(array44)
            debugFree(array44.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array38
         params1.data[1] = array42
         params1.data[2] = array43
         var array45: ptr ArrayT = func58(addr params1, loopsFactor)
         debugReturn(array45.id)
         dealloc(params1.data)
         dec array45.refC
         if array45.refC == 0:
            dealloc(array45.data)
            dealloc(array45)
            debugFree(array45.id)
      for i in 0 ..< array38.size:
         if array38.data[i] == 71:
            return array38
      dec array43.refC
      if array43.refC == 0:
         dealloc(array43.data)
         dealloc(array43)
         debugFree(array43.id)
      dec array42.refC
      if array42.refC == 0:
         dealloc(array42.data)
         dealloc(array42)
         debugFree(array42.id)
   for i in 0 ..< array38.size:
      dec array38.data[i]
   for i in 0 ..< array38.size:
      if array38.data[i] == 9:
         return array38
   return array38

