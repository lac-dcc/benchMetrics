proc func59*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array16: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array16 = vars.data[pCounter]
      inc array16.refC
      debugCopy(array16.id)
   else:
      array16 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array16.size = 919
      array16.refC = 1
      array16.id = 16
      array16.data = cast[ptr UncheckedArray[uint32]](alloc(array16.size * sizeof(uint32)))
      zeroMem(array16.data, array16.size * sizeof(uint32))
      debugNew(array16.id)
   let loopLimit9 = (50) div (6) + 1
   for loop9 in 0 ..< loopLimit9:
      discard
      for i in 0 ..< array16.size:
         inc array16.data[i]
   for i in 0 ..< array16.size:
      if array16.data[i] == 98:
         return array16
   return array16

