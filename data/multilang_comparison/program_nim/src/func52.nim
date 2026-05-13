proc func52*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array28: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array28 = vars.data[pCounter]
      inc array28.refC
      debugCopy(array28.id)
   else:
      array28 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array28.size = 367
      array28.refC = 1
      array28.id = 28
      array28.data = cast[ptr UncheckedArray[uint32]](alloc(array28.size * sizeof(uint32)))
      zeroMem(array28.data, array28.size * sizeof(uint32))
      debugNew(array28.id)
   let loopLimit11 = (50) div (5) + 1
   for loop11 in 0 ..< loopLimit11:
      discard
      for i in 0 ..< array28.size:
         if array28.data[i] == 64:
            return array28
   for i in 0 ..< array28.size:
      dec array28.data[i]
   for i in 0 ..< array28.size:
      if array28.data[i] == 87:
         return array28
   return array28

