proc func44*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array81: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array81 = vars.data[pCounter]
         inc array81.refC
         debugCopy(array81.id)
      else:
         array81 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array81.size = 772
         array81.refC = 1
         array81.id = 81
         array81.data = cast[ptr UncheckedArray[uint32]](alloc(array81.size * sizeof(uint32)))
         zeroMem(array81.data, array81.size * sizeof(uint32))
         debugNew(array81.id)
      let loopLimit27 = (50) div (4) + 1
      for loop27 in 0 ..< loopLimit27:
         discard
         for i in 0 ..< array81.size:
            dec array81.data[i]
         for i in 0 ..< array81.size:
            if array81.data[i] == 90:
               return array81
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array81
      var array82: ptr ArrayT = func54(addr params0, getPath(), loopsFactor)
      debugReturn(array82.id)
      dealloc(params0.data)
      dec array82.refC
      if array82.refC == 0:
         dealloc(array82.data)
         dealloc(array82)
         debugFree(array82.id)
      dec array81.refC
      if array81.refC == 0:
         dealloc(array81.data)
         dealloc(array81)
         debugFree(array81.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array83: ptr ArrayT = func50(addr params0, getPath(), loopsFactor)
      debugReturn(array83.id)
      dealloc(params0.data)
      dec array83.refC
      if array83.refC == 0:
         dealloc(array83.data)
         dealloc(array83)
         debugFree(array83.id)
   var array84: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array84 = vars.data[pCounter]
      inc array84.refC
      debugCopy(array84.id)
   else:
      array84 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array84.size = 669
      array84.refC = 1
      array84.id = 84
      array84.data = cast[ptr UncheckedArray[uint32]](alloc(array84.size * sizeof(uint32)))
      zeroMem(array84.data, array84.size * sizeof(uint32))
      debugNew(array84.id)
   return array84

