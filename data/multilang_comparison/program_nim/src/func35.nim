proc func35*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array107: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array107 = vars.data[pCounter]
      inc array107.refC
      debugCopy(array107.id)
   else:
      array107 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array107.size = 996
      array107.refC = 1
      array107.id = 107
      array107.data = cast[ptr UncheckedArray[uint32]](alloc(array107.size * sizeof(uint32)))
      zeroMem(array107.data, array107.size * sizeof(uint32))
      debugNew(array107.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array107
   var array108: ptr ArrayT = func42(addr params0, getPath(), loopsFactor)
   debugReturn(array108.id)
   dealloc(params0.data)
   let loopLimit33 = (50) div (4) + 1
   for loop33 in 0 ..< loopLimit33:
      discard
      for i in 0 ..< array108.size:
         inc array108.data[i]
   for i in 0 ..< array107.size:
      if array107.data[i] == 90:
         return array107
   dec array107.refC
   if array107.refC == 0:
      dealloc(array107.data)
      dealloc(array107)
      debugFree(array107.id)
   return array108

