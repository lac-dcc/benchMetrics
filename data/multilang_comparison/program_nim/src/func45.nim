proc func45*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array86: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array86 = vars.data[pCounter]
      inc array86.refC
      debugCopy(array86.id)
   else:
      array86 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array86.size = 197
      array86.refC = 1
      array86.id = 86
      array86.data = cast[ptr UncheckedArray[uint32]](alloc(array86.size * sizeof(uint32)))
      zeroMem(array86.data, array86.size * sizeof(uint32))
      debugNew(array86.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array86
   var array87: ptr ArrayT = func51(addr params0, loopsFactor)
   debugReturn(array87.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array90: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array90 = vars.data[pCounter]
         inc array90.refC
         debugCopy(array90.id)
      else:
         array90 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array90.size = 746
         array90.refC = 1
         array90.id = 90
         array90.data = cast[ptr UncheckedArray[uint32]](alloc(array90.size * sizeof(uint32)))
         zeroMem(array90.data, array90.size * sizeof(uint32))
         debugNew(array90.id)
      let loopLimit29 = (50) div (4) + 1
      for loop29 in 0 ..< loopLimit29:
         discard
         for i in 0 ..< array90.size:
            dec array90.data[i]
         for i in 0 ..< array87.size:
            if array87.data[i] == 22:
               return array87
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array86
      params1.data[1] = array87
      params1.data[2] = array90
      var array91: ptr ArrayT = func60(addr params1, getPath(), loopsFactor)
      debugReturn(array91.id)
      dealloc(params1.data)
      dec array91.refC
      if array91.refC == 0:
         dealloc(array91.data)
         dealloc(array91)
         debugFree(array91.id)
      dec array90.refC
      if array90.refC == 0:
         dealloc(array90.data)
         dealloc(array90)
         debugFree(array90.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array86
      params1.data[1] = array87
      var array92: ptr ArrayT = func52(addr params1, loopsFactor)
      debugReturn(array92.id)
      dealloc(params1.data)
      dec array92.refC
      if array92.refC == 0:
         dealloc(array92.data)
         dealloc(array92)
         debugFree(array92.id)
   dec array86.refC
   if array86.refC == 0:
      dealloc(array86.data)
      dealloc(array86)
      debugFree(array86.id)
   return array87

