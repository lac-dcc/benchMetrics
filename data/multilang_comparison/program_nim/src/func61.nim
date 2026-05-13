proc func61*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array22: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array22 = vars.data[pCounter]
      inc array22.refC
      debugCopy(array22.id)
   else:
      array22 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array22.size = 84
      array22.refC = 1
      array22.id = 22
      array22.data = cast[ptr UncheckedArray[uint32]](alloc(array22.size * sizeof(uint32)))
      zeroMem(array22.data, array22.size * sizeof(uint32))
      debugNew(array22.id)
   return array22

