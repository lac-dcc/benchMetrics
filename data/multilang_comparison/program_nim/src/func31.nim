proc func31*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array105: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array105 = vars.data[pCounter]
      inc array105.refC
      debugCopy(array105.id)
   else:
      array105 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array105.size = 199
      array105.refC = 1
      array105.id = 105
      array105.data = cast[ptr UncheckedArray[uint32]](alloc(array105.size * sizeof(uint32)))
      zeroMem(array105.data, array105.size * sizeof(uint32))
      debugNew(array105.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array105
   var array106: ptr ArrayT = func35(addr params0, loopsFactor)
   debugReturn(array106.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array109: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array109 = vars.data[pCounter]
         inc array109.refC
         debugCopy(array109.id)
      else:
         array109 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array109.size = 926
         array109.refC = 1
         array109.id = 109
         array109.data = cast[ptr UncheckedArray[uint32]](alloc(array109.size * sizeof(uint32)))
         zeroMem(array109.data, array109.size * sizeof(uint32))
         debugNew(array109.id)
      let loopLimit34 = (50) div (4) + 1
      for loop34 in 0 ..< loopLimit34:
         discard
         for i in 0 ..< array109.size:
            dec array109.data[i]
         for i in 0 ..< array109.size:
            if array109.data[i] == 40:
               return array109
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array105
      params1.data[1] = array106
      params1.data[2] = array109
      var array110: ptr ArrayT = func46(addr params1, getPath(), loopsFactor)
      debugReturn(array110.id)
      dealloc(params1.data)
      dec array110.refC
      if array110.refC == 0:
         dealloc(array110.data)
         dealloc(array110)
         debugFree(array110.id)
      dec array109.refC
      if array109.refC == 0:
         dealloc(array109.data)
         dealloc(array109)
         debugFree(array109.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array105
      params1.data[1] = array106
      var array111: ptr ArrayT = func40(addr params1, getPath(), loopsFactor)
      debugReturn(array111.id)
      dealloc(params1.data)
      dec array111.refC
      if array111.refC == 0:
         dealloc(array111.data)
         dealloc(array111)
         debugFree(array111.id)
   dec array106.refC
   if array106.refC == 0:
      dealloc(array106.data)
      dealloc(array106)
      debugFree(array106.id)
   return array105

