proc func4*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array206: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array206 = vars.data[pCounter]
      inc array206.refC
      debugCopy(array206.id)
   else:
      array206 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array206.size = 641
      array206.refC = 1
      array206.id = 206
      array206.data = cast[ptr UncheckedArray[uint32]](alloc(array206.size * sizeof(uint32)))
      zeroMem(array206.data, array206.size * sizeof(uint32))
      debugNew(array206.id)
   let loopLimit60 = (50) div (3) + 1
   for loop60 in 0 ..< loopLimit60:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array207: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array207 = vars.data[pCounter]
            inc array207.refC
            debugCopy(array207.id)
         else:
            array207 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array207.size = 620
            array207.refC = 1
            array207.id = 207
            array207.data = cast[ptr UncheckedArray[uint32]](alloc(array207.size * sizeof(uint32)))
            zeroMem(array207.data, array207.size * sizeof(uint32))
            debugNew(array207.id)
         let loopLimit61 = (50) div (4) + 1
         for loop61 in 0 ..< loopLimit61:
            discard
            for i in 0 ..< array207.size:
               dec array207.data[i]
            for i in 0 ..< array207.size:
               if array207.data[i] == 88:
                  return array207
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array206
         params0.data[1] = array207
         var array208: ptr ArrayT = func24(addr params0, getPath(), loopsFactor)
         debugReturn(array208.id)
         dealloc(params0.data)
         dec array208.refC
         if array208.refC == 0:
            dealloc(array208.data)
            dealloc(array208)
            debugFree(array208.id)
         dec array207.refC
         if array207.refC == 0:
            dealloc(array207.data)
            dealloc(array207)
            debugFree(array207.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array206
         var array209: ptr ArrayT = func16(addr params0, getPath(), loopsFactor)
         debugReturn(array209.id)
         dealloc(params0.data)
         dec array209.refC
         if array209.refC == 0:
            dealloc(array209.data)
            dealloc(array209)
            debugFree(array209.id)
      var array210: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array210 = vars.data[pCounter]
         inc array210.refC
         debugCopy(array210.id)
      else:
         array210 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array210.size = 856
         array210.refC = 1
         array210.id = 210
         array210.data = cast[ptr UncheckedArray[uint32]](alloc(array210.size * sizeof(uint32)))
         zeroMem(array210.data, array210.size * sizeof(uint32))
         debugNew(array210.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array206
      params0.data[1] = array210
      var array211: ptr ArrayT = func17(addr params0, loopsFactor)
      debugReturn(array211.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array212: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array212 = vars.data[pCounter]
            inc array212.refC
            debugCopy(array212.id)
         else:
            array212 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array212.size = 260
            array212.refC = 1
            array212.id = 212
            array212.data = cast[ptr UncheckedArray[uint32]](alloc(array212.size * sizeof(uint32)))
            zeroMem(array212.data, array212.size * sizeof(uint32))
            debugNew(array212.id)
         let loopLimit62 = (50) div (4) + 1
         for loop62 in 0 ..< loopLimit62:
            discard
            for i in 0 ..< array210.size:
               dec array210.data[i]
            for i in 0 ..< array210.size:
               if array210.data[i] == 5:
                  return array210
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array206
         params1.data[1] = array210
         params1.data[2] = array211
         params1.data[3] = array212
         var array213: ptr ArrayT = func28(addr params1, getPath(), loopsFactor)
         debugReturn(array213.id)
         dealloc(params1.data)
         dec array213.refC
         if array213.refC == 0:
            dealloc(array213.data)
            dealloc(array213)
            debugFree(array213.id)
         dec array212.refC
         if array212.refC == 0:
            dealloc(array212.data)
            dealloc(array212)
            debugFree(array212.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array206
         params1.data[1] = array210
         params1.data[2] = array211
         var array214: ptr ArrayT = func22(addr params1, getPath(), loopsFactor)
         debugReturn(array214.id)
         dealloc(params1.data)
         dec array214.refC
         if array214.refC == 0:
            dealloc(array214.data)
            dealloc(array214)
            debugFree(array214.id)
      for i in 0 ..< array206.size:
         if array206.data[i] == 73:
            return array206
      dec array211.refC
      if array211.refC == 0:
         dealloc(array211.data)
         dealloc(array211)
         debugFree(array211.id)
      dec array210.refC
      if array210.refC == 0:
         dealloc(array210.data)
         dealloc(array210)
         debugFree(array210.id)
   for i in 0 ..< array206.size:
      dec array206.data[i]
   for i in 0 ..< array206.size:
      if array206.data[i] == 37:
         return array206
   return array206

