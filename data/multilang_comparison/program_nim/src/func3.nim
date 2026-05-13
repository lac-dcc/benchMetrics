proc func3*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array291: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array291 = vars.data[pCounter]
      inc array291.refC
      debugCopy(array291.id)
   else:
      array291 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array291.size = 522
      array291.refC = 1
      array291.id = 291
      array291.data = cast[ptr UncheckedArray[uint32]](alloc(array291.size * sizeof(uint32)))
      zeroMem(array291.data, array291.size * sizeof(uint32))
      debugNew(array291.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array291
   var array292: ptr ArrayT = func6(addr params0, getPath(), loopsFactor)
   debugReturn(array292.id)
   dealloc(params0.data)
   let loopLimit83 = (50) div (2) + 1
   for loop83 in 0 ..< loopLimit83:
      discard
      for i in 0 ..< array291.size:
         inc array291.data[i]
   for i in 0 ..< array292.size:
      if array292.data[i] == 32:
         return array292
   dec array292.refC
   if array292.refC == 0:
      dealloc(array292.data)
      dealloc(array292)
      debugFree(array292.id)
   return array291

