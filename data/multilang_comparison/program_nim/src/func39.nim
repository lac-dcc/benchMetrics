proc func39*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array144: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array144 = vars.data[pCounter]
      inc array144.refC
      debugCopy(array144.id)
   else:
      array144 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array144.size = 754
      array144.refC = 1
      array144.id = 144
      array144.data = cast[ptr UncheckedArray[uint32]](alloc(array144.size * sizeof(uint32)))
      zeroMem(array144.data, array144.size * sizeof(uint32))
      debugNew(array144.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array144
   var array145: ptr ArrayT = func41(addr params0, loopsFactor)
   debugReturn(array145.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array146: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array146 = vars.data[pCounter]
         inc array146.refC
         debugCopy(array146.id)
      else:
         array146 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array146.size = 944
         array146.refC = 1
         array146.id = 146
         array146.data = cast[ptr UncheckedArray[uint32]](alloc(array146.size * sizeof(uint32)))
         zeroMem(array146.data, array146.size * sizeof(uint32))
         debugNew(array146.id)
      let loopLimit44 = (50) div (4) + 1
      for loop44 in 0 ..< loopLimit44:
         discard
         for i in 0 ..< array145.size:
            dec array145.data[i]
         for i in 0 ..< array145.size:
            if array145.data[i] == 6:
               return array145
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array144
      params1.data[1] = array145
      params1.data[2] = array146
      var array147: ptr ArrayT = func54(addr params1, getPath(), loopsFactor)
      debugReturn(array147.id)
      dealloc(params1.data)
      dec array147.refC
      if array147.refC == 0:
         dealloc(array147.data)
         dealloc(array147)
         debugFree(array147.id)
      dec array146.refC
      if array146.refC == 0:
         dealloc(array146.data)
         dealloc(array146)
         debugFree(array146.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array144
      params1.data[1] = array145
      var array148: ptr ArrayT = func50(addr params1, getPath(), loopsFactor)
      debugReturn(array148.id)
      dealloc(params1.data)
      dec array148.refC
      if array148.refC == 0:
         dealloc(array148.data)
         dealloc(array148)
         debugFree(array148.id)
   dec array145.refC
   if array145.refC == 0:
      dealloc(array145.data)
      dealloc(array145)
      debugFree(array145.id)
   return array144

