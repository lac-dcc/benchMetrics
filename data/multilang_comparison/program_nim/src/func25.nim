proc func25*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit49 = (50) div (3) + 1
   for loop49 in 0 ..< loopLimit49:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array164: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array164 = vars.data[pCounter]
            inc array164.refC
            debugCopy(array164.id)
         else:
            array164 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array164.size = 460
            array164.refC = 1
            array164.id = 164
            array164.data = cast[ptr UncheckedArray[uint32]](alloc(array164.size * sizeof(uint32)))
            zeroMem(array164.data, array164.size * sizeof(uint32))
            debugNew(array164.id)
         let loopLimit50 = (50) div (4) + 1
         for loop50 in 0 ..< loopLimit50:
            discard
            for i in 0 ..< array164.size:
               dec array164.data[i]
            for i in 0 ..< array164.size:
               if array164.data[i] == 27:
                  return array164
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array164
         var array165: ptr ArrayT = func42(addr params0, getPath(), loopsFactor)
         debugReturn(array165.id)
         dealloc(params0.data)
         dec array165.refC
         if array165.refC == 0:
            dealloc(array165.data)
            dealloc(array165)
            debugFree(array165.id)
         dec array164.refC
         if array164.refC == 0:
            dealloc(array164.data)
            dealloc(array164)
            debugFree(array164.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array166: ptr ArrayT = func34(addr params0, getPath(), loopsFactor)
         debugReturn(array166.id)
         dealloc(params0.data)
         dec array166.refC
         if array166.refC == 0:
            dealloc(array166.data)
            dealloc(array166)
            debugFree(array166.id)
      var array167: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array167 = vars.data[pCounter]
         inc array167.refC
         debugCopy(array167.id)
      else:
         array167 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array167.size = 794
         array167.refC = 1
         array167.id = 167
         array167.data = cast[ptr UncheckedArray[uint32]](alloc(array167.size * sizeof(uint32)))
         zeroMem(array167.data, array167.size * sizeof(uint32))
         debugNew(array167.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array167
      var array168: ptr ArrayT = func35(addr params0, loopsFactor)
      debugReturn(array168.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array169: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array169 = vars.data[pCounter]
            inc array169.refC
            debugCopy(array169.id)
         else:
            array169 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array169.size = 43
            array169.refC = 1
            array169.id = 169
            array169.data = cast[ptr UncheckedArray[uint32]](alloc(array169.size * sizeof(uint32)))
            zeroMem(array169.data, array169.size * sizeof(uint32))
            debugNew(array169.id)
         let loopLimit51 = (50) div (4) + 1
         for loop51 in 0 ..< loopLimit51:
            discard
            for i in 0 ..< array169.size:
               dec array169.data[i]
            for i in 0 ..< array169.size:
               if array169.data[i] == 28:
                  return array169
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array167
         params1.data[1] = array168
         params1.data[2] = array169
         var array170: ptr ArrayT = func46(addr params1, getPath(), loopsFactor)
         debugReturn(array170.id)
         dealloc(params1.data)
         dec array170.refC
         if array170.refC == 0:
            dealloc(array170.data)
            dealloc(array170)
            debugFree(array170.id)
         dec array169.refC
         if array169.refC == 0:
            dealloc(array169.data)
            dealloc(array169)
            debugFree(array169.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array167
         params1.data[1] = array168
         var array171: ptr ArrayT = func40(addr params1, getPath(), loopsFactor)
         debugReturn(array171.id)
         dealloc(params1.data)
         dec array171.refC
         if array171.refC == 0:
            dealloc(array171.data)
            dealloc(array171)
            debugFree(array171.id)
      for i in 0 ..< array167.size:
         if array167.data[i] == 59:
            return array167
      dec array168.refC
      if array168.refC == 0:
         dealloc(array168.data)
         dealloc(array168)
         debugFree(array168.id)
      dec array167.refC
      if array167.refC == 0:
         dealloc(array167.data)
         dealloc(array167)
         debugFree(array167.id)
   var array172: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array172 = vars.data[pCounter]
      inc array172.refC
      debugCopy(array172.id)
   else:
      array172 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array172.size = 151
      array172.refC = 1
      array172.id = 172
      array172.data = cast[ptr UncheckedArray[uint32]](alloc(array172.size * sizeof(uint32)))
      zeroMem(array172.data, array172.size * sizeof(uint32))
      debugNew(array172.id)
   return array172

