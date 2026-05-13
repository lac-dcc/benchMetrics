proc func27*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array179: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array179 = vars.data[pCounter]
      inc array179.refC
      debugCopy(array179.id)
   else:
      array179 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array179.size = 900
      array179.refC = 1
      array179.id = 179
      array179.data = cast[ptr UncheckedArray[uint32]](alloc(array179.size * sizeof(uint32)))
      zeroMem(array179.data, array179.size * sizeof(uint32))
      debugNew(array179.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array179
   var array180: ptr ArrayT = func33(addr params0, loopsFactor)
   debugReturn(array180.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array183: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array183 = vars.data[pCounter]
         inc array183.refC
         debugCopy(array183.id)
      else:
         array183 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array183.size = 144
         array183.refC = 1
         array183.id = 183
         array183.data = cast[ptr UncheckedArray[uint32]](alloc(array183.size * sizeof(uint32)))
         zeroMem(array183.data, array183.size * sizeof(uint32))
         debugNew(array183.id)
      let loopLimit54 = (50) div (3) + 1
      for loop54 in 0 ..< loopLimit54:
         discard
         for i in 0 ..< array179.size:
            dec array179.data[i]
         for i in 0 ..< array180.size:
            if array180.data[i] == 82:
               return array180
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array179
      params1.data[1] = array180
      params1.data[2] = array183
      var array184: ptr ArrayT = func42(addr params1, getPath(), loopsFactor)
      debugReturn(array184.id)
      dealloc(params1.data)
      dec array184.refC
      if array184.refC == 0:
         dealloc(array184.data)
         dealloc(array184)
         debugFree(array184.id)
      dec array183.refC
      if array183.refC == 0:
         dealloc(array183.data)
         dealloc(array183)
         debugFree(array183.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array179
      params1.data[1] = array180
      var array185: ptr ArrayT = func34(addr params1, getPath(), loopsFactor)
      debugReturn(array185.id)
      dealloc(params1.data)
      dec array185.refC
      if array185.refC == 0:
         dealloc(array185.data)
         dealloc(array185)
         debugFree(array185.id)
   dec array180.refC
   if array180.refC == 0:
      dealloc(array180.data)
      dealloc(array180)
      debugFree(array180.id)
   return array179

