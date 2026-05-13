proc func53*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array33: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array33 = vars.data[pCounter]
      inc array33.refC
      debugCopy(array33.id)
   else:
      array33 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array33.size = 399
      array33.refC = 1
      array33.id = 33
      array33.data = cast[ptr UncheckedArray[uint32]](alloc(array33.size * sizeof(uint32)))
      zeroMem(array33.data, array33.size * sizeof(uint32))
      debugNew(array33.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array33
   var array34: ptr ArrayT = func60(addr params0, getPath(), loopsFactor)
   debugReturn(array34.id)
   dealloc(params0.data)
   let loopLimit12 = (50) div (5) + 1
   for loop12 in 0 ..< loopLimit12:
      discard
      for i in 0 ..< array33.size:
         inc array33.data[i]
   for i in 0 ..< array33.size:
      if array33.data[i] == 39:
         return array33
   dec array34.refC
   if array34.refC == 0:
      dealloc(array34.data)
      dealloc(array34)
      debugFree(array34.id)
   return array33

