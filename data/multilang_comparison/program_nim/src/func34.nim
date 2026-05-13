proc func34*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array94: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array94 = vars.data[pCounter]
      inc array94.refC
      debugCopy(array94.id)
   else:
      array94 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array94.size = 320
      array94.refC = 1
      array94.id = 94
      array94.data = cast[ptr UncheckedArray[uint32]](alloc(array94.size * sizeof(uint32)))
      zeroMem(array94.data, array94.size * sizeof(uint32))
      debugNew(array94.id)
   let loopLimit30 = (50) div (4) + 1
   for loop30 in 0 ..< loopLimit30:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array95: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array95 = vars.data[pCounter]
            inc array95.refC
            debugCopy(array95.id)
         else:
            array95 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array95.size = 736
            array95.refC = 1
            array95.id = 95
            array95.data = cast[ptr UncheckedArray[uint32]](alloc(array95.size * sizeof(uint32)))
            zeroMem(array95.data, array95.size * sizeof(uint32))
            debugNew(array95.id)
         let loopLimit31 = (50) div (5) + 1
         for loop31 in 0 ..< loopLimit31:
            discard
            for i in 0 ..< array94.size:
               dec array94.data[i]
            for i in 0 ..< array94.size:
               if array94.data[i] == 22:
                  return array94
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array94
         params0.data[1] = array95
         var array96: ptr ArrayT = func54(addr params0, getPath(), loopsFactor)
         debugReturn(array96.id)
         dealloc(params0.data)
         dec array96.refC
         if array96.refC == 0:
            dealloc(array96.data)
            dealloc(array96)
            debugFree(array96.id)
         dec array95.refC
         if array95.refC == 0:
            dealloc(array95.data)
            dealloc(array95)
            debugFree(array95.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array94
         var array97: ptr ArrayT = func50(addr params0, getPath(), loopsFactor)
         debugReturn(array97.id)
         dealloc(params0.data)
         dec array97.refC
         if array97.refC == 0:
            dealloc(array97.data)
            dealloc(array97)
            debugFree(array97.id)
      var array98: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array98 = vars.data[pCounter]
         inc array98.refC
         debugCopy(array98.id)
      else:
         array98 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array98.size = 258
         array98.refC = 1
         array98.id = 98
         array98.data = cast[ptr UncheckedArray[uint32]](alloc(array98.size * sizeof(uint32)))
         zeroMem(array98.data, array98.size * sizeof(uint32))
         debugNew(array98.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array94
      params0.data[1] = array98
      var array99: ptr ArrayT = func51(addr params0, loopsFactor)
      debugReturn(array99.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array100: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array100 = vars.data[pCounter]
            inc array100.refC
            debugCopy(array100.id)
         else:
            array100 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array100.size = 62
            array100.refC = 1
            array100.id = 100
            array100.data = cast[ptr UncheckedArray[uint32]](alloc(array100.size * sizeof(uint32)))
            zeroMem(array100.data, array100.size * sizeof(uint32))
            debugNew(array100.id)
         let loopLimit32 = (50) div (5) + 1
         for loop32 in 0 ..< loopLimit32:
            discard
            for i in 0 ..< array94.size:
               dec array94.data[i]
            for i in 0 ..< array94.size:
               if array94.data[i] == 36:
                  return array94
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array94
         params1.data[1] = array98
         params1.data[2] = array99
         params1.data[3] = array100
         var array101: ptr ArrayT = func60(addr params1, getPath(), loopsFactor)
         debugReturn(array101.id)
         dealloc(params1.data)
         dec array101.refC
         if array101.refC == 0:
            dealloc(array101.data)
            dealloc(array101)
            debugFree(array101.id)
         dec array100.refC
         if array100.refC == 0:
            dealloc(array100.data)
            dealloc(array100)
            debugFree(array100.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array94
         params1.data[1] = array98
         params1.data[2] = array99
         var array102: ptr ArrayT = func52(addr params1, loopsFactor)
         debugReturn(array102.id)
         dealloc(params1.data)
         dec array102.refC
         if array102.refC == 0:
            dealloc(array102.data)
            dealloc(array102)
            debugFree(array102.id)
      for i in 0 ..< array99.size:
         if array99.data[i] == 71:
            return array99
      dec array99.refC
      if array99.refC == 0:
         dealloc(array99.data)
         dealloc(array99)
         debugFree(array99.id)
      dec array98.refC
      if array98.refC == 0:
         dealloc(array98.data)
         dealloc(array98)
         debugFree(array98.id)
   for i in 0 ..< array94.size:
      dec array94.data[i]
   for i in 0 ..< array94.size:
      if array94.data[i] == 81:
         return array94
   return array94

