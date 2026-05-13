proc func33*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array181: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array181 = vars.data[pCounter]
      inc array181.refC
      debugCopy(array181.id)
   else:
      array181 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array181.size = 949
      array181.refC = 1
      array181.id = 181
      array181.data = cast[ptr UncheckedArray[uint32]](alloc(array181.size * sizeof(uint32)))
      zeroMem(array181.data, array181.size * sizeof(uint32))
      debugNew(array181.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array181
   var array182: ptr ArrayT = func36(addr params0, getPath(), loopsFactor)
   debugReturn(array182.id)
   dealloc(params0.data)
   let loopLimit53 = (50) div (3) + 1
   for loop53 in 0 ..< loopLimit53:
      discard
      for i in 0 ..< array181.size:
         inc array181.data[i]
   for i in 0 ..< array181.size:
      if array181.data[i] == 95:
         return array181
   dec array181.refC
   if array181.refC == 0:
      dealloc(array181.data)
      dealloc(array181)
      debugFree(array181.id)
   return array182

