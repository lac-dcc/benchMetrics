proc func17*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array200: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array200 = vars.data[pCounter]
      inc array200.refC
      debugCopy(array200.id)
   else:
      array200 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array200.size = 51
      array200.refC = 1
      array200.id = 200
      array200.data = cast[ptr UncheckedArray[uint32]](alloc(array200.size * sizeof(uint32)))
      zeroMem(array200.data, array200.size * sizeof(uint32))
      debugNew(array200.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array200
   var array201: ptr ArrayT = func24(addr params0, getPath(), loopsFactor)
   debugReturn(array201.id)
   dealloc(params0.data)
   let loopLimit58 = (50) div (3) + 1
   for loop58 in 0 ..< loopLimit58:
      discard
      for i in 0 ..< array201.size:
         inc array201.data[i]
   for i in 0 ..< array201.size:
      if array201.data[i] == 27:
         return array201
   dec array201.refC
   if array201.refC == 0:
      dealloc(array201.data)
      dealloc(array201)
      debugFree(array201.id)
   return array200

