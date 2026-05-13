proc func62*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array24: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array24 = vars.data[pCounter]
      inc array24.refC
      debugCopy(array24.id)
   else:
      array24 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array24.size = 846
      array24.refC = 1
      array24.id = 24
      array24.data = cast[ptr UncheckedArray[uint32]](alloc(array24.size * sizeof(uint32)))
      zeroMem(array24.data, array24.size * sizeof(uint32))
      debugNew(array24.id)
   return array24

