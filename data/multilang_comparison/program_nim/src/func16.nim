proc func16*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array187: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array187 = vars.data[pCounter]
      inc array187.refC
      debugCopy(array187.id)
   else:
      array187 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array187.size = 117
      array187.refC = 1
      array187.id = 187
      array187.data = cast[ptr UncheckedArray[uint32]](alloc(array187.size * sizeof(uint32)))
      zeroMem(array187.data, array187.size * sizeof(uint32))
      debugNew(array187.id)
   let loopLimit55 = (50) div (3) + 1
   for loop55 in 0 ..< loopLimit55:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array188: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array188 = vars.data[pCounter]
            inc array188.refC
            debugCopy(array188.id)
         else:
            array188 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array188.size = 23
            array188.refC = 1
            array188.id = 188
            array188.data = cast[ptr UncheckedArray[uint32]](alloc(array188.size * sizeof(uint32)))
            zeroMem(array188.data, array188.size * sizeof(uint32))
            debugNew(array188.id)
         let loopLimit56 = (50) div (4) + 1
         for loop56 in 0 ..< loopLimit56:
            discard
            for i in 0 ..< array188.size:
               dec array188.data[i]
            for i in 0 ..< array188.size:
               if array188.data[i] == 9:
                  return array188
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array187
         params0.data[1] = array188
         var array189: ptr ArrayT = func36(addr params0, getPath(), loopsFactor)
         debugReturn(array189.id)
         dealloc(params0.data)
         dec array189.refC
         if array189.refC == 0:
            dealloc(array189.data)
            dealloc(array189)
            debugFree(array189.id)
         dec array188.refC
         if array188.refC == 0:
            dealloc(array188.data)
            dealloc(array188)
            debugFree(array188.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array187
         var array190: ptr ArrayT = func32(addr params0, getPath(), loopsFactor)
         debugReturn(array190.id)
         dealloc(params0.data)
         dec array190.refC
         if array190.refC == 0:
            dealloc(array190.data)
            dealloc(array190)
            debugFree(array190.id)
      var array191: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array191 = vars.data[pCounter]
         inc array191.refC
         debugCopy(array191.id)
      else:
         array191 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array191.size = 677
         array191.refC = 1
         array191.id = 191
         array191.data = cast[ptr UncheckedArray[uint32]](alloc(array191.size * sizeof(uint32)))
         zeroMem(array191.data, array191.size * sizeof(uint32))
         debugNew(array191.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array187
      params0.data[1] = array191
      var array192: ptr ArrayT = func33(addr params0, loopsFactor)
      debugReturn(array192.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array193: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array193 = vars.data[pCounter]
            inc array193.refC
            debugCopy(array193.id)
         else:
            array193 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array193.size = 626
            array193.refC = 1
            array193.id = 193
            array193.data = cast[ptr UncheckedArray[uint32]](alloc(array193.size * sizeof(uint32)))
            zeroMem(array193.data, array193.size * sizeof(uint32))
            debugNew(array193.id)
         let loopLimit57 = (50) div (4) + 1
         for loop57 in 0 ..< loopLimit57:
            discard
            for i in 0 ..< array187.size:
               dec array187.data[i]
            for i in 0 ..< array191.size:
               if array191.data[i] == 14:
                  return array191
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array187
         params1.data[1] = array191
         params1.data[2] = array192
         params1.data[3] = array193
         var array194: ptr ArrayT = func42(addr params1, getPath(), loopsFactor)
         debugReturn(array194.id)
         dealloc(params1.data)
         dec array194.refC
         if array194.refC == 0:
            dealloc(array194.data)
            dealloc(array194)
            debugFree(array194.id)
         dec array193.refC
         if array193.refC == 0:
            dealloc(array193.data)
            dealloc(array193)
            debugFree(array193.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array187
         params1.data[1] = array191
         params1.data[2] = array192
         var array195: ptr ArrayT = func34(addr params1, getPath(), loopsFactor)
         debugReturn(array195.id)
         dealloc(params1.data)
         dec array195.refC
         if array195.refC == 0:
            dealloc(array195.data)
            dealloc(array195)
            debugFree(array195.id)
      for i in 0 ..< array191.size:
         if array191.data[i] == 0:
            return array191
      dec array192.refC
      if array192.refC == 0:
         dealloc(array192.data)
         dealloc(array192)
         debugFree(array192.id)
      dec array191.refC
      if array191.refC == 0:
         dealloc(array191.data)
         dealloc(array191)
         debugFree(array191.id)
   for i in 0 ..< array187.size:
      dec array187.data[i]
   for i in 0 ..< array187.size:
      if array187.data[i] == 94:
         return array187
   return array187

