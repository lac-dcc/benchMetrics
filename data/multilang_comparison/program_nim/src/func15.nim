proc func15*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array273: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array273 = vars.data[pCounter]
      inc array273.refC
      debugCopy(array273.id)
   else:
      array273 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array273.size = 685
      array273.refC = 1
      array273.id = 273
      array273.data = cast[ptr UncheckedArray[uint32]](alloc(array273.size * sizeof(uint32)))
      zeroMem(array273.data, array273.size * sizeof(uint32))
      debugNew(array273.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array273
   var array274: ptr ArrayT = func18(addr params0, getPath(), loopsFactor)
   debugReturn(array274.id)
   dealloc(params0.data)
   let loopLimit78 = (50) div (2) + 1
   for loop78 in 0 ..< loopLimit78:
      discard
      for i in 0 ..< array273.size:
         inc array273.data[i]
   for i in 0 ..< array274.size:
      if array274.data[i] == 5:
         return array274
   dec array274.refC
   if array274.refC == 0:
      dealloc(array274.data)
      dealloc(array274)
      debugFree(array274.id)
   return array273

