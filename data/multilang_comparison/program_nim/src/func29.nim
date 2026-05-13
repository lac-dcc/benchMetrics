proc func29*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit5 = (50) div (4) + 1
   for loop5 in 0 ..< loopLimit5:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array8: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array8 = vars.data[pCounter]
            inc array8.refC
            debugCopy(array8.id)
         else:
            array8 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array8.size = 368
            array8.refC = 1
            array8.id = 8
            array8.data = cast[ptr UncheckedArray[uint32]](alloc(array8.size * sizeof(uint32)))
            zeroMem(array8.data, array8.size * sizeof(uint32))
            debugNew(array8.id)
         let loopLimit6 = (50) div (5) + 1
         for loop6 in 0 ..< loopLimit6:
            discard
            for i in 0 ..< array8.size:
               dec array8.data[i]
            for i in 0 ..< array8.size:
               if array8.data[i] == 82:
                  return array8
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array8
         var array9: ptr ArrayT = func46(addr params0, getPath(), loopsFactor)
         debugReturn(array9.id)
         dealloc(params0.data)
         dec array9.refC
         if array9.refC == 0:
            dealloc(array9.data)
            dealloc(array9)
            debugFree(array9.id)
         dec array8.refC
         if array8.refC == 0:
            dealloc(array8.data)
            dealloc(array8)
            debugFree(array8.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array37: ptr ArrayT = func40(addr params0, getPath(), loopsFactor)
         debugReturn(array37.id)
         dealloc(params0.data)
         dec array37.refC
         if array37.refC == 0:
            dealloc(array37.data)
            dealloc(array37)
            debugFree(array37.id)
      var array46: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array46 = vars.data[pCounter]
         inc array46.refC
         debugCopy(array46.id)
      else:
         array46 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array46.size = 567
         array46.refC = 1
         array46.id = 46
         array46.data = cast[ptr UncheckedArray[uint32]](alloc(array46.size * sizeof(uint32)))
         zeroMem(array46.data, array46.size * sizeof(uint32))
         debugNew(array46.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array46
      var array47: ptr ArrayT = func41(addr params0, loopsFactor)
      debugReturn(array47.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array50: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array50 = vars.data[pCounter]
            inc array50.refC
            debugCopy(array50.id)
         else:
            array50 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array50.size = 528
            array50.refC = 1
            array50.id = 50
            array50.data = cast[ptr UncheckedArray[uint32]](alloc(array50.size * sizeof(uint32)))
            zeroMem(array50.data, array50.size * sizeof(uint32))
            debugNew(array50.id)
         let loopLimit18 = (50) div (5) + 1
         for loop18 in 0 ..< loopLimit18:
            discard
            for i in 0 ..< array46.size:
               dec array46.data[i]
            for i in 0 ..< array50.size:
               if array50.data[i] == 29:
                  return array50
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array46
         params1.data[1] = array47
         params1.data[2] = array50
         var array51: ptr ArrayT = func54(addr params1, getPath(), loopsFactor)
         debugReturn(array51.id)
         dealloc(params1.data)
         dec array51.refC
         if array51.refC == 0:
            dealloc(array51.data)
            dealloc(array51)
            debugFree(array51.id)
         dec array50.refC
         if array50.refC == 0:
            dealloc(array50.data)
            dealloc(array50)
            debugFree(array50.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array46
         params1.data[1] = array47
         var array61: ptr ArrayT = func50(addr params1, getPath(), loopsFactor)
         debugReturn(array61.id)
         dealloc(params1.data)
         dec array61.refC
         if array61.refC == 0:
            dealloc(array61.data)
            dealloc(array61)
            debugFree(array61.id)
      for i in 0 ..< array47.size:
         if array47.data[i] == 74:
            return array47
      dec array47.refC
      if array47.refC == 0:
         dealloc(array47.data)
         dealloc(array47)
         debugFree(array47.id)
      dec array46.refC
      if array46.refC == 0:
         dealloc(array46.data)
         dealloc(array46)
         debugFree(array46.id)
   var array67: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array67 = vars.data[pCounter]
      inc array67.refC
      debugCopy(array67.id)
   else:
      array67 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array67.size = 121
      array67.refC = 1
      array67.id = 67
      array67.data = cast[ptr UncheckedArray[uint32]](alloc(array67.size * sizeof(uint32)))
      zeroMem(array67.data, array67.size * sizeof(uint32))
      debugNew(array67.id)
   return array67

