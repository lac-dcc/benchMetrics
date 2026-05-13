proc func49*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array31: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array31 = vars.data[pCounter]
      inc array31.refC
      debugCopy(array31.id)
   else:
      array31 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array31.size = 403
      array31.refC = 1
      array31.id = 31
      array31.data = cast[ptr UncheckedArray[uint32]](alloc(array31.size * sizeof(uint32)))
      zeroMem(array31.data, array31.size * sizeof(uint32))
      debugNew(array31.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array31
   var array32: ptr ArrayT = func53(addr params0, loopsFactor)
   debugReturn(array32.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array35: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array35 = vars.data[pCounter]
         inc array35.refC
         debugCopy(array35.id)
      else:
         array35 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array35.size = 226
         array35.refC = 1
         array35.id = 35
         array35.data = cast[ptr UncheckedArray[uint32]](alloc(array35.size * sizeof(uint32)))
         zeroMem(array35.data, array35.size * sizeof(uint32))
         debugNew(array35.id)
      let loopLimit13 = (50) div (5) + 1
      for loop13 in 0 ..< loopLimit13:
         discard
         for i in 0 ..< array31.size:
            dec array31.data[i]
         for i in 0 ..< array31.size:
            if array31.data[i] == 39:
               return array31
      dec array35.refC
      if array35.refC == 0:
         dealloc(array35.data)
         dealloc(array35)
         debugFree(array35.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array31
      params1.data[1] = array32
      var array36: ptr ArrayT = func58(addr params1, loopsFactor)
      debugReturn(array36.id)
      dealloc(params1.data)
      dec array36.refC
      if array36.refC == 0:
         dealloc(array36.data)
         dealloc(array36)
         debugFree(array36.id)
   dec array32.refC
   if array32.refC == 0:
      dealloc(array32.data)
      dealloc(array32)
      debugFree(array32.id)
   return array31

