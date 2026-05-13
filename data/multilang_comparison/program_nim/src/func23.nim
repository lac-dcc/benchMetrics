proc func23*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array124: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array124 = vars.data[pCounter]
      inc array124.refC
      debugCopy(array124.id)
   else:
      array124 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array124.size = 150
      array124.refC = 1
      array124.id = 124
      array124.data = cast[ptr UncheckedArray[uint32]](alloc(array124.size * sizeof(uint32)))
      zeroMem(array124.data, array124.size * sizeof(uint32))
      debugNew(array124.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array124
   var array125: ptr ArrayT = func28(addr params0, getPath(), loopsFactor)
   debugReturn(array125.id)
   dealloc(params0.data)
   let loopLimit38 = (50) div (4) + 1
   for loop38 in 0 ..< loopLimit38:
      discard
      for i in 0 ..< array124.size:
         inc array124.data[i]
   for i in 0 ..< array124.size:
      if array124.data[i] == 22:
         return array124
   dec array124.refC
   if array124.refC == 0:
      dealloc(array124.data)
      dealloc(array124)
      debugFree(array124.id)
   return array125

