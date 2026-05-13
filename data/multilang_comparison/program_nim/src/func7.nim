proc func7*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit74 = (50) div (2) + 1
   for loop74 in 0 ..< loopLimit74:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array256: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array256 = vars.data[pCounter]
            inc array256.refC
            debugCopy(array256.id)
         else:
            array256 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array256.size = 593
            array256.refC = 1
            array256.id = 256
            array256.data = cast[ptr UncheckedArray[uint32]](alloc(array256.size * sizeof(uint32)))
            zeroMem(array256.data, array256.size * sizeof(uint32))
            debugNew(array256.id)
         let loopLimit75 = (50) div (3) + 1
         for loop75 in 0 ..< loopLimit75:
            discard
            for i in 0 ..< array256.size:
               dec array256.data[i]
            for i in 0 ..< array256.size:
               if array256.data[i] == 43:
                  return array256
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array256
         var array257: ptr ArrayT = func24(addr params0, getPath(), loopsFactor)
         debugReturn(array257.id)
         dealloc(params0.data)
         dec array257.refC
         if array257.refC == 0:
            dealloc(array257.data)
            dealloc(array257)
            debugFree(array257.id)
         dec array256.refC
         if array256.refC == 0:
            dealloc(array256.data)
            dealloc(array256)
            debugFree(array256.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array258: ptr ArrayT = func16(addr params0, getPath(), loopsFactor)
         debugReturn(array258.id)
         dealloc(params0.data)
         dec array258.refC
         if array258.refC == 0:
            dealloc(array258.data)
            dealloc(array258)
            debugFree(array258.id)
      var array259: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array259 = vars.data[pCounter]
         inc array259.refC
         debugCopy(array259.id)
      else:
         array259 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array259.size = 377
         array259.refC = 1
         array259.id = 259
         array259.data = cast[ptr UncheckedArray[uint32]](alloc(array259.size * sizeof(uint32)))
         zeroMem(array259.data, array259.size * sizeof(uint32))
         debugNew(array259.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array259
      var array260: ptr ArrayT = func17(addr params0, loopsFactor)
      debugReturn(array260.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array261: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array261 = vars.data[pCounter]
            inc array261.refC
            debugCopy(array261.id)
         else:
            array261 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array261.size = 88
            array261.refC = 1
            array261.id = 261
            array261.data = cast[ptr UncheckedArray[uint32]](alloc(array261.size * sizeof(uint32)))
            zeroMem(array261.data, array261.size * sizeof(uint32))
            debugNew(array261.id)
         let loopLimit76 = (50) div (3) + 1
         for loop76 in 0 ..< loopLimit76:
            discard
            for i in 0 ..< array259.size:
               dec array259.data[i]
            for i in 0 ..< array261.size:
               if array261.data[i] == 32:
                  return array261
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array259
         params1.data[1] = array260
         params1.data[2] = array261
         var array262: ptr ArrayT = func28(addr params1, getPath(), loopsFactor)
         debugReturn(array262.id)
         dealloc(params1.data)
         dec array262.refC
         if array262.refC == 0:
            dealloc(array262.data)
            dealloc(array262)
            debugFree(array262.id)
         dec array261.refC
         if array261.refC == 0:
            dealloc(array261.data)
            dealloc(array261)
            debugFree(array261.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array259
         params1.data[1] = array260
         var array263: ptr ArrayT = func22(addr params1, getPath(), loopsFactor)
         debugReturn(array263.id)
         dealloc(params1.data)
         dec array263.refC
         if array263.refC == 0:
            dealloc(array263.data)
            dealloc(array263)
            debugFree(array263.id)
      for i in 0 ..< array260.size:
         if array260.data[i] == 91:
            return array260
      dec array260.refC
      if array260.refC == 0:
         dealloc(array260.data)
         dealloc(array260)
         debugFree(array260.id)
      dec array259.refC
      if array259.refC == 0:
         dealloc(array259.data)
         dealloc(array259)
         debugFree(array259.id)
   var array264: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array264 = vars.data[pCounter]
      inc array264.refC
      debugCopy(array264.id)
   else:
      array264 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array264.size = 153
      array264.refC = 1
      array264.id = 264
      array264.data = cast[ptr UncheckedArray[uint32]](alloc(array264.size * sizeof(uint32)))
      zeroMem(array264.data, array264.size * sizeof(uint32))
      debugNew(array264.id)
   return array264

