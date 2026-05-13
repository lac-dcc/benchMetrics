proc func9*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array271: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array271 = vars.data[pCounter]
      inc array271.refC
      debugCopy(array271.id)
   else:
      array271 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array271.size = 571
      array271.refC = 1
      array271.id = 271
      array271.data = cast[ptr UncheckedArray[uint32]](alloc(array271.size * sizeof(uint32)))
      zeroMem(array271.data, array271.size * sizeof(uint32))
      debugNew(array271.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array271
   var array272: ptr ArrayT = func15(addr params0, loopsFactor)
   debugReturn(array272.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array275: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array275 = vars.data[pCounter]
         inc array275.refC
         debugCopy(array275.id)
      else:
         array275 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array275.size = 868
         array275.refC = 1
         array275.id = 275
         array275.data = cast[ptr UncheckedArray[uint32]](alloc(array275.size * sizeof(uint32)))
         zeroMem(array275.data, array275.size * sizeof(uint32))
         debugNew(array275.id)
      let loopLimit79 = (50) div (2) + 1
      for loop79 in 0 ..< loopLimit79:
         discard
         for i in 0 ..< array275.size:
            dec array275.data[i]
         for i in 0 ..< array271.size:
            if array271.data[i] == 6:
               return array271
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array271
      params1.data[1] = array272
      params1.data[2] = array275
      var array276: ptr ArrayT = func24(addr params1, getPath(), loopsFactor)
      debugReturn(array276.id)
      dealloc(params1.data)
      dec array276.refC
      if array276.refC == 0:
         dealloc(array276.data)
         dealloc(array276)
         debugFree(array276.id)
      dec array275.refC
      if array275.refC == 0:
         dealloc(array275.data)
         dealloc(array275)
         debugFree(array275.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array271
      params1.data[1] = array272
      var array277: ptr ArrayT = func16(addr params1, getPath(), loopsFactor)
      debugReturn(array277.id)
      dealloc(params1.data)
      dec array277.refC
      if array277.refC == 0:
         dealloc(array277.data)
         dealloc(array277)
         debugFree(array277.id)
   dec array271.refC
   if array271.refC == 0:
      dealloc(array271.data)
      dealloc(array271)
      debugFree(array271.id)
   return array272

