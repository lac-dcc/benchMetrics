proc func26*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array174: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array174 = vars.data[pCounter]
         inc array174.refC
         debugCopy(array174.id)
      else:
         array174 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array174.size = 692
         array174.refC = 1
         array174.id = 174
         array174.data = cast[ptr UncheckedArray[uint32]](alloc(array174.size * sizeof(uint32)))
         zeroMem(array174.data, array174.size * sizeof(uint32))
         debugNew(array174.id)
      let loopLimit52 = (50) div (3) + 1
      for loop52 in 0 ..< loopLimit52:
         discard
         for i in 0 ..< array174.size:
            dec array174.data[i]
         for i in 0 ..< array174.size:
            if array174.data[i] == 4:
               return array174
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array174
      var array175: ptr ArrayT = func36(addr params0, getPath(), loopsFactor)
      debugReturn(array175.id)
      dealloc(params0.data)
      dec array175.refC
      if array175.refC == 0:
         dealloc(array175.data)
         dealloc(array175)
         debugFree(array175.id)
      dec array174.refC
      if array174.refC == 0:
         dealloc(array174.data)
         dealloc(array174)
         debugFree(array174.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array176: ptr ArrayT = func32(addr params0, getPath(), loopsFactor)
      debugReturn(array176.id)
      dealloc(params0.data)
      dec array176.refC
      if array176.refC == 0:
         dealloc(array176.data)
         dealloc(array176)
         debugFree(array176.id)
   var array177: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array177 = vars.data[pCounter]
      inc array177.refC
      debugCopy(array177.id)
   else:
      array177 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array177.size = 429
      array177.refC = 1
      array177.id = 177
      array177.data = cast[ptr UncheckedArray[uint32]](alloc(array177.size * sizeof(uint32)))
      zeroMem(array177.data, array177.size * sizeof(uint32))
      debugNew(array177.id)
   return array177

