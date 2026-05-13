proc func41*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array48: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array48 = vars.data[pCounter]
      inc array48.refC
      debugCopy(array48.id)
   else:
      array48 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array48.size = 353
      array48.refC = 1
      array48.id = 48
      array48.data = cast[ptr UncheckedArray[uint32]](alloc(array48.size * sizeof(uint32)))
      zeroMem(array48.data, array48.size * sizeof(uint32))
      debugNew(array48.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array48
   var array49: ptr ArrayT = func46(addr params0, getPath(), loopsFactor)
   debugReturn(array49.id)
   dealloc(params0.data)
   let loopLimit17 = (50) div (5) + 1
   for loop17 in 0 ..< loopLimit17:
      discard
      for i in 0 ..< array48.size:
         inc array48.data[i]
   for i in 0 ..< array49.size:
      if array49.data[i] == 19:
         return array49
   dec array49.refC
   if array49.refC == 0:
      dealloc(array49.data)
      dealloc(array49)
      debugFree(array49.id)
   return array48

