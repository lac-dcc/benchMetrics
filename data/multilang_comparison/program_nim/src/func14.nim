proc func14*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array243: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array243 = vars.data[pCounter]
      inc array243.refC
      debugCopy(array243.id)
   else:
      array243 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array243.size = 904
      array243.refC = 1
      array243.id = 243
      array243.data = cast[ptr UncheckedArray[uint32]](alloc(array243.size * sizeof(uint32)))
      zeroMem(array243.data, array243.size * sizeof(uint32))
      debugNew(array243.id)
   let loopLimit70 = (50) div (3) + 1
   for loop70 in 0 ..< loopLimit70:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array244: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array244 = vars.data[pCounter]
            inc array244.refC
            debugCopy(array244.id)
         else:
            array244 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array244.size = 176
            array244.refC = 1
            array244.id = 244
            array244.data = cast[ptr UncheckedArray[uint32]](alloc(array244.size * sizeof(uint32)))
            zeroMem(array244.data, array244.size * sizeof(uint32))
            debugNew(array244.id)
         let loopLimit71 = (50) div (4) + 1
         for loop71 in 0 ..< loopLimit71:
            discard
            for i in 0 ..< array244.size:
               dec array244.data[i]
            for i in 0 ..< array244.size:
               if array244.data[i] == 59:
                  return array244
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array243
         params0.data[1] = array244
         var array245: ptr ArrayT = func28(addr params0, getPath(), loopsFactor)
         debugReturn(array245.id)
         dealloc(params0.data)
         dec array245.refC
         if array245.refC == 0:
            dealloc(array245.data)
            dealloc(array245)
            debugFree(array245.id)
         dec array244.refC
         if array244.refC == 0:
            dealloc(array244.data)
            dealloc(array244)
            debugFree(array244.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array243
         var array246: ptr ArrayT = func22(addr params0, getPath(), loopsFactor)
         debugReturn(array246.id)
         dealloc(params0.data)
         dec array246.refC
         if array246.refC == 0:
            dealloc(array246.data)
            dealloc(array246)
            debugFree(array246.id)
      var array247: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array247 = vars.data[pCounter]
         inc array247.refC
         debugCopy(array247.id)
      else:
         array247 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array247.size = 127
         array247.refC = 1
         array247.id = 247
         array247.data = cast[ptr UncheckedArray[uint32]](alloc(array247.size * sizeof(uint32)))
         zeroMem(array247.data, array247.size * sizeof(uint32))
         debugNew(array247.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array243
      params0.data[1] = array247
      var array248: ptr ArrayT = func23(addr params0, loopsFactor)
      debugReturn(array248.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array249: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array249 = vars.data[pCounter]
            inc array249.refC
            debugCopy(array249.id)
         else:
            array249 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array249.size = 560
            array249.refC = 1
            array249.id = 249
            array249.data = cast[ptr UncheckedArray[uint32]](alloc(array249.size * sizeof(uint32)))
            zeroMem(array249.data, array249.size * sizeof(uint32))
            debugNew(array249.id)
         let loopLimit72 = (50) div (4) + 1
         for loop72 in 0 ..< loopLimit72:
            discard
            for i in 0 ..< array248.size:
               dec array248.data[i]
            for i in 0 ..< array247.size:
               if array247.data[i] == 63:
                  return array247
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array243
         params1.data[1] = array247
         params1.data[2] = array248
         params1.data[3] = array249
         var array250: ptr ArrayT = func36(addr params1, getPath(), loopsFactor)
         debugReturn(array250.id)
         dealloc(params1.data)
         dec array250.refC
         if array250.refC == 0:
            dealloc(array250.data)
            dealloc(array250)
            debugFree(array250.id)
         dec array249.refC
         if array249.refC == 0:
            dealloc(array249.data)
            dealloc(array249)
            debugFree(array249.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array243
         params1.data[1] = array247
         params1.data[2] = array248
         var array251: ptr ArrayT = func32(addr params1, getPath(), loopsFactor)
         debugReturn(array251.id)
         dealloc(params1.data)
         dec array251.refC
         if array251.refC == 0:
            dealloc(array251.data)
            dealloc(array251)
            debugFree(array251.id)
      for i in 0 ..< array248.size:
         if array248.data[i] == 91:
            return array248
      dec array248.refC
      if array248.refC == 0:
         dealloc(array248.data)
         dealloc(array248)
         debugFree(array248.id)
      dec array247.refC
      if array247.refC == 0:
         dealloc(array247.data)
         dealloc(array247)
         debugFree(array247.id)
   for i in 0 ..< array243.size:
      dec array243.data[i]
   for i in 0 ..< array243.size:
      if array243.data[i] == 14:
         return array243
   return array243

