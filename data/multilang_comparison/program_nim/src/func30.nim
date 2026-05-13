proc func30*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array69: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array69 = vars.data[pCounter]
         inc array69.refC
         debugCopy(array69.id)
      else:
         array69 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array69.size = 237
         array69.refC = 1
         array69.id = 69
         array69.data = cast[ptr UncheckedArray[uint32]](alloc(array69.size * sizeof(uint32)))
         zeroMem(array69.data, array69.size * sizeof(uint32))
         debugNew(array69.id)
      let loopLimit23 = (50) div (4) + 1
      for loop23 in 0 ..< loopLimit23:
         discard
         for i in 0 ..< array69.size:
            dec array69.data[i]
         for i in 0 ..< array69.size:
            if array69.data[i] == 18:
               return array69
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array69
      var array70: ptr ArrayT = func42(addr params0, getPath(), loopsFactor)
      debugReturn(array70.id)
      dealloc(params0.data)
      dec array70.refC
      if array70.refC == 0:
         dealloc(array70.data)
         dealloc(array70)
         debugFree(array70.id)
      dec array69.refC
      if array69.refC == 0:
         dealloc(array69.data)
         dealloc(array69)
         debugFree(array69.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array93: ptr ArrayT = func34(addr params0, getPath(), loopsFactor)
      debugReturn(array93.id)
      dealloc(params0.data)
      dec array93.refC
      if array93.refC == 0:
         dealloc(array93.data)
         dealloc(array93)
         debugFree(array93.id)
   var array103: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array103 = vars.data[pCounter]
      inc array103.refC
      debugCopy(array103.id)
   else:
      array103 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array103.size = 933
      array103.refC = 1
      array103.id = 103
      array103.data = cast[ptr UncheckedArray[uint32]](alloc(array103.size * sizeof(uint32)))
      zeroMem(array103.data, array103.size * sizeof(uint32))
      debugNew(array103.id)
   return array103

