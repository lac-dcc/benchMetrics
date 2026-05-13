proc func51*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array88: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array88 = vars.data[pCounter]
      inc array88.refC
      debugCopy(array88.id)
   else:
      array88 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array88.size = 804
      array88.refC = 1
      array88.id = 88
      array88.data = cast[ptr UncheckedArray[uint32]](alloc(array88.size * sizeof(uint32)))
      zeroMem(array88.data, array88.size * sizeof(uint32))
      debugNew(array88.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array88
   var array89: ptr ArrayT = func54(addr params0, getPath(), loopsFactor)
   debugReturn(array89.id)
   dealloc(params0.data)
   let loopLimit28 = (50) div (4) + 1
   for loop28 in 0 ..< loopLimit28:
      discard
      for i in 0 ..< array88.size:
         inc array88.data[i]
   for i in 0 ..< array88.size:
      if array88.data[i] == 99:
         return array88
   dec array88.refC
   if array88.refC == 0:
      dealloc(array88.data)
      dealloc(array88)
      debugFree(array88.id)
   return array89

