proc func21*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array237: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array237 = vars.data[pCounter]
      inc array237.refC
      debugCopy(array237.id)
   else:
      array237 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array237.size = 231
      array237.refC = 1
      array237.id = 237
      array237.data = cast[ptr UncheckedArray[uint32]](alloc(array237.size * sizeof(uint32)))
      zeroMem(array237.data, array237.size * sizeof(uint32))
      debugNew(array237.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array237
   var array238: ptr ArrayT = func23(addr params0, loopsFactor)
   debugReturn(array238.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array239: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array239 = vars.data[pCounter]
         inc array239.refC
         debugCopy(array239.id)
      else:
         array239 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array239.size = 404
         array239.refC = 1
         array239.id = 239
         array239.data = cast[ptr UncheckedArray[uint32]](alloc(array239.size * sizeof(uint32)))
         zeroMem(array239.data, array239.size * sizeof(uint32))
         debugNew(array239.id)
      let loopLimit69 = (50) div (3) + 1
      for loop69 in 0 ..< loopLimit69:
         discard
         for i in 0 ..< array239.size:
            dec array239.data[i]
         for i in 0 ..< array238.size:
            if array238.data[i] == 18:
               return array238
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array237
      params1.data[1] = array238
      params1.data[2] = array239
      var array240: ptr ArrayT = func36(addr params1, getPath(), loopsFactor)
      debugReturn(array240.id)
      dealloc(params1.data)
      dec array240.refC
      if array240.refC == 0:
         dealloc(array240.data)
         dealloc(array240)
         debugFree(array240.id)
      dec array239.refC
      if array239.refC == 0:
         dealloc(array239.data)
         dealloc(array239)
         debugFree(array239.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array237
      params1.data[1] = array238
      var array241: ptr ArrayT = func32(addr params1, getPath(), loopsFactor)
      debugReturn(array241.id)
      dealloc(params1.data)
      dec array241.refC
      if array241.refC == 0:
         dealloc(array241.data)
         dealloc(array241)
         debugFree(array241.id)
   dec array237.refC
   if array237.refC == 0:
      dealloc(array237.data)
      dealloc(array237)
      debugFree(array237.id)
   return array238

