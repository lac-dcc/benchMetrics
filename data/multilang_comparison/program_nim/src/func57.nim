proc func57*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array59: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array59 = vars.data[pCounter]
      inc array59.refC
      debugCopy(array59.id)
   else:
      array59 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array59.size = 764
      array59.refC = 1
      array59.id = 59
      array59.data = cast[ptr UncheckedArray[uint32]](alloc(array59.size * sizeof(uint32)))
      zeroMem(array59.data, array59.size * sizeof(uint32))
      debugNew(array59.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array59
   var array60: ptr ArrayT = func59(addr params0, loopsFactor)
   debugReturn(array60.id)
   dealloc(params0.data)
   dec array60.refC
   if array60.refC == 0:
      dealloc(array60.data)
      dealloc(array60)
      debugFree(array60.id)
   return array59

