proc func58*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array13: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array13 = vars.data[pCounter]
      inc array13.refC
      debugCopy(array13.id)
   else:
      array13 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array13.size = 167
      array13.refC = 1
      array13.id = 13
      array13.data = cast[ptr UncheckedArray[uint32]](alloc(array13.size * sizeof(uint32)))
      zeroMem(array13.data, array13.size * sizeof(uint32))
      debugNew(array13.id)
   for i in 0 ..< array13.size:
      dec array13.data[i]
   for i in 0 ..< array13.size:
      if array13.data[i] == 11:
         return array13
   return array13

