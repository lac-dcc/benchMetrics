proc func38*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   if (PATH0 and 1'u64) != 0:
      discard
      var array139: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array139 = vars.data[pCounter]
         inc array139.refC
         debugCopy(array139.id)
      else:
         array139 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array139.size = 255
         array139.refC = 1
         array139.id = 139
         array139.data = cast[ptr UncheckedArray[uint32]](alloc(array139.size * sizeof(uint32)))
         zeroMem(array139.data, array139.size * sizeof(uint32))
         debugNew(array139.id)
      let loopLimit43 = (50) div (4) + 1
      for loop43 in 0 ..< loopLimit43:
         discard
         for i in 0 ..< array139.size:
            dec array139.data[i]
         for i in 0 ..< array139.size:
            if array139.data[i] == 79:
               return array139
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array139
      var array140: ptr ArrayT = func46(addr params0, getPath(), loopsFactor)
      debugReturn(array140.id)
      dealloc(params0.data)
      dec array140.refC
      if array140.refC == 0:
         dealloc(array140.data)
         dealloc(array140)
         debugFree(array140.id)
      dec array139.refC
      if array139.refC == 0:
         dealloc(array139.data)
         dealloc(array139)
         debugFree(array139.id)
   else:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array141: ptr ArrayT = func40(addr params0, getPath(), loopsFactor)
      debugReturn(array141.id)
      dealloc(params0.data)
      dec array141.refC
      if array141.refC == 0:
         dealloc(array141.data)
         dealloc(array141)
         debugFree(array141.id)
   var array142: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array142 = vars.data[pCounter]
      inc array142.refC
      debugCopy(array142.id)
   else:
      array142 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array142.size = 567
      array142.refC = 1
      array142.id = 142
      array142.data = cast[ptr UncheckedArray[uint32]](alloc(array142.size * sizeof(uint32)))
      zeroMem(array142.data, array142.size * sizeof(uint32))
      debugNew(array142.id)
   return array142

