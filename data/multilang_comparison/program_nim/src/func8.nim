proc func8*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array266: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array266 = vars.data[pCounter]
         inc array266.refC
         debugCopy(array266.id)
      else:
         array266 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array266.size = 925
         array266.refC = 1
         array266.id = 266
         array266.data = cast[ptr UncheckedArray[uint32]](alloc(array266.size * sizeof(uint32)))
         zeroMem(array266.data, array266.size * sizeof(uint32))
         debugNew(array266.id)
      let loopLimit77 = (50) div (2) + 1
      for loop77 in 0 ..< loopLimit77:
         discard
         for i in 0 ..< array266.size:
            dec array266.data[i]
         for i in 0 ..< array266.size:
            if array266.data[i] == 18:
               return array266
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array266
      var array267: ptr ArrayT = func18(addr params0, getPath(), loopsFactor)
      debugReturn(array267.id)
      dealloc(params0.data)
      dec array267.refC
      if array267.refC == 0:
         dealloc(array267.data)
         dealloc(array267)
         debugFree(array267.id)
      dec array266.refC
      if array266.refC == 0:
         dealloc(array266.data)
         dealloc(array266)
         debugFree(array266.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array268: ptr ArrayT = func14(addr params0, getPath(), loopsFactor)
      debugReturn(array268.id)
      dealloc(params0.data)
      dec array268.refC
      if array268.refC == 0:
         dealloc(array268.data)
         dealloc(array268)
         debugFree(array268.id)
   var array269: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array269 = vars.data[pCounter]
      inc array269.refC
      debugCopy(array269.id)
   else:
      array269 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array269.size = 90
      array269.refC = 1
      array269.id = 269
      array269.data = cast[ptr UncheckedArray[uint32]](alloc(array269.size * sizeof(uint32)))
      zeroMem(array269.data, array269.size * sizeof(uint32))
      debugNew(array269.id)
   return array269

