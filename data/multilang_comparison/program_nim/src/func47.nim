proc func47*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit7 = (50) div (5) + 1
   for loop7 in 0 ..< loopLimit7:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array11: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array11 = vars.data[pCounter]
            inc array11.refC
            debugCopy(array11.id)
         else:
            array11 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array11.size = 135
            array11.refC = 1
            array11.id = 11
            array11.data = cast[ptr UncheckedArray[uint32]](alloc(array11.size * sizeof(uint32)))
            zeroMem(array11.data, array11.size * sizeof(uint32))
            debugNew(array11.id)
         let loopLimit8 = (50) div (6) + 1
         for loop8 in 0 ..< loopLimit8:
            discard
            for i in 0 ..< array11.size:
               dec array11.data[i]
            for i in 0 ..< array11.size:
               if array11.data[i] == 22:
                  return array11
         dec array11.refC
         if array11.refC == 0:
            dealloc(array11.data)
            dealloc(array11)
            debugFree(array11.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array12: ptr ArrayT = func58(addr params0, loopsFactor)
         debugReturn(array12.id)
         dealloc(params0.data)
         dec array12.refC
         if array12.refC == 0:
            dealloc(array12.data)
            dealloc(array12)
            debugFree(array12.id)
      var array14: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array14 = vars.data[pCounter]
         inc array14.refC
         debugCopy(array14.id)
      else:
         array14 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array14.size = 229
         array14.refC = 1
         array14.id = 14
         array14.data = cast[ptr UncheckedArray[uint32]](alloc(array14.size * sizeof(uint32)))
         zeroMem(array14.data, array14.size * sizeof(uint32))
         debugNew(array14.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array14
      var array15: ptr ArrayT = func59(addr params0, loopsFactor)
      debugReturn(array15.id)
      dealloc(params0.data)
      for i in 0 ..< array15.size:
         if array15.data[i] == 70:
            return array15
      dec array15.refC
      if array15.refC == 0:
         dealloc(array15.data)
         dealloc(array15)
         debugFree(array15.id)
      dec array14.refC
      if array14.refC == 0:
         dealloc(array14.data)
         dealloc(array14)
         debugFree(array14.id)
   var array17: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array17 = vars.data[pCounter]
      inc array17.refC
      debugCopy(array17.id)
   else:
      array17 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array17.size = 413
      array17.refC = 1
      array17.id = 17
      array17.data = cast[ptr UncheckedArray[uint32]](alloc(array17.size * sizeof(uint32)))
      zeroMem(array17.data, array17.size * sizeof(uint32))
      debugNew(array17.id)
   return array17

