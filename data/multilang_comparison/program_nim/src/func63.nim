proc func63*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array26: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array26 = vars.data[pCounter]
      inc array26.refC
      debugCopy(array26.id)
   else:
      array26 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array26.size = 124
      array26.refC = 1
      array26.id = 26
      array26.data = cast[ptr UncheckedArray[uint32]](alloc(array26.size * sizeof(uint32)))
      zeroMem(array26.data, array26.size * sizeof(uint32))
      debugNew(array26.id)
   return array26

