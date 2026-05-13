proc func12*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array161: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array161 = vars.data[pCounter]
         inc array161.refC
         debugCopy(array161.id)
      else:
         array161 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array161.size = 975
         array161.refC = 1
         array161.id = 161
         array161.data = cast[ptr UncheckedArray[uint32]](alloc(array161.size * sizeof(uint32)))
         zeroMem(array161.data, array161.size * sizeof(uint32))
         debugNew(array161.id)
      let loopLimit48 = (50) div (3) + 1
      for loop48 in 0 ..< loopLimit48:
         discard
         for i in 0 ..< array161.size:
            dec array161.data[i]
         for i in 0 ..< array161.size:
            if array161.data[i] == 29:
               return array161
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array161
      var array162: ptr ArrayT = func24(addr params0, getPath(), loopsFactor)
      debugReturn(array162.id)
      dealloc(params0.data)
      dec array162.refC
      if array162.refC == 0:
         dealloc(array162.data)
         dealloc(array162)
         debugFree(array162.id)
      dec array161.refC
      if array161.refC == 0:
         dealloc(array161.data)
         dealloc(array161)
         debugFree(array161.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array186: ptr ArrayT = func16(addr params0, getPath(), loopsFactor)
      debugReturn(array186.id)
      dealloc(params0.data)
      dec array186.refC
      if array186.refC == 0:
         dealloc(array186.data)
         dealloc(array186)
         debugFree(array186.id)
   var array196: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array196 = vars.data[pCounter]
      inc array196.refC
      debugCopy(array196.id)
   else:
      array196 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array196.size = 552
      array196.refC = 1
      array196.id = 196
      array196.data = cast[ptr UncheckedArray[uint32]](alloc(array196.size * sizeof(uint32)))
      zeroMem(array196.data, array196.size * sizeof(uint32))
      debugNew(array196.id)
   return array196

