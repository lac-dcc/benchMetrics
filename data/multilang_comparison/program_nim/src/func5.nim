proc func5*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array217: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array217 = vars.data[pCounter]
      inc array217.refC
      debugCopy(array217.id)
   else:
      array217 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array217.size = 757
      array217.refC = 1
      array217.id = 217
      array217.data = cast[ptr UncheckedArray[uint32]](alloc(array217.size * sizeof(uint32)))
      zeroMem(array217.data, array217.size * sizeof(uint32))
      debugNew(array217.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array217
   var array218: ptr ArrayT = func10(addr params0, getPath(), loopsFactor)
   debugReturn(array218.id)
   dealloc(params0.data)
   let loopLimit63 = (50) div (3) + 1
   for loop63 in 0 ..< loopLimit63:
      discard
      for i in 0 ..< array218.size:
         inc array218.data[i]
   for i in 0 ..< array217.size:
      if array217.data[i] == 59:
         return array217
   dec array218.refC
   if array218.refC == 0:
      dealloc(array218.data)
      dealloc(array218)
      debugFree(array218.id)
   return array217

