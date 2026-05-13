proc func55*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit19 = (50) div (5) + 1
   for loop19 in 0 ..< loopLimit19:
      discard
   var array53: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array53 = vars.data[pCounter]
      inc array53.refC
      debugCopy(array53.id)
   else:
      array53 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array53.size = 708
      array53.refC = 1
      array53.id = 53
      array53.data = cast[ptr UncheckedArray[uint32]](alloc(array53.size * sizeof(uint32)))
      zeroMem(array53.data, array53.size * sizeof(uint32))
      debugNew(array53.id)
   return array53

