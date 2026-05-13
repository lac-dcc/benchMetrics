proc func13*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array198: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array198 = vars.data[pCounter]
      inc array198.refC
      debugCopy(array198.id)
   else:
      array198 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array198.size = 290
      array198.refC = 1
      array198.id = 198
      array198.data = cast[ptr UncheckedArray[uint32]](alloc(array198.size * sizeof(uint32)))
      zeroMem(array198.data, array198.size * sizeof(uint32))
      debugNew(array198.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array198
   var array199: ptr ArrayT = func17(addr params0, loopsFactor)
   debugReturn(array199.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array202: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array202 = vars.data[pCounter]
         inc array202.refC
         debugCopy(array202.id)
      else:
         array202 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array202.size = 886
         array202.refC = 1
         array202.id = 202
         array202.data = cast[ptr UncheckedArray[uint32]](alloc(array202.size * sizeof(uint32)))
         zeroMem(array202.data, array202.size * sizeof(uint32))
         debugNew(array202.id)
      let loopLimit59 = (50) div (3) + 1
      for loop59 in 0 ..< loopLimit59:
         discard
         for i in 0 ..< array198.size:
            dec array198.data[i]
         for i in 0 ..< array199.size:
            if array199.data[i] == 12:
               return array199
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array198
      params1.data[1] = array199
      params1.data[2] = array202
      var array203: ptr ArrayT = func28(addr params1, getPath(), loopsFactor)
      debugReturn(array203.id)
      dealloc(params1.data)
      dec array203.refC
      if array203.refC == 0:
         dealloc(array203.data)
         dealloc(array203)
         debugFree(array203.id)
      dec array202.refC
      if array202.refC == 0:
         dealloc(array202.data)
         dealloc(array202)
         debugFree(array202.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array198
      params1.data[1] = array199
      var array204: ptr ArrayT = func22(addr params1, getPath(), loopsFactor)
      debugReturn(array204.id)
      dealloc(params1.data)
      dec array204.refC
      if array204.refC == 0:
         dealloc(array204.data)
         dealloc(array204)
         debugFree(array204.id)
   dec array198.refC
   if array198.refC == 0:
      dealloc(array198.data)
      dealloc(array198)
      debugFree(array198.id)
   return array199

