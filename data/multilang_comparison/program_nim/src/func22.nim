proc func22*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array113: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array113 = vars.data[pCounter]
      inc array113.refC
      debugCopy(array113.id)
   else:
      array113 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array113.size = 179
      array113.refC = 1
      array113.id = 113
      array113.data = cast[ptr UncheckedArray[uint32]](alloc(array113.size * sizeof(uint32)))
      zeroMem(array113.data, array113.size * sizeof(uint32))
      debugNew(array113.id)
   let loopLimit35 = (50) div (4) + 1
   for loop35 in 0 ..< loopLimit35:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array114: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array114 = vars.data[pCounter]
            inc array114.refC
            debugCopy(array114.id)
         else:
            array114 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array114.size = 418
            array114.refC = 1
            array114.id = 114
            array114.data = cast[ptr UncheckedArray[uint32]](alloc(array114.size * sizeof(uint32)))
            zeroMem(array114.data, array114.size * sizeof(uint32))
            debugNew(array114.id)
         let loopLimit36 = (50) div (5) + 1
         for loop36 in 0 ..< loopLimit36:
            discard
            for i in 0 ..< array114.size:
               dec array114.data[i]
            for i in 0 ..< array113.size:
               if array113.data[i] == 48:
                  return array113
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array113
         params0.data[1] = array114
         var array115: ptr ArrayT = func42(addr params0, getPath(), loopsFactor)
         debugReturn(array115.id)
         dealloc(params0.data)
         dec array115.refC
         if array115.refC == 0:
            dealloc(array115.data)
            dealloc(array115)
            debugFree(array115.id)
         dec array114.refC
         if array114.refC == 0:
            dealloc(array114.data)
            dealloc(array114)
            debugFree(array114.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array113
         var array116: ptr ArrayT = func34(addr params0, getPath(), loopsFactor)
         debugReturn(array116.id)
         dealloc(params0.data)
         dec array116.refC
         if array116.refC == 0:
            dealloc(array116.data)
            dealloc(array116)
            debugFree(array116.id)
      var array117: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array117 = vars.data[pCounter]
         inc array117.refC
         debugCopy(array117.id)
      else:
         array117 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array117.size = 210
         array117.refC = 1
         array117.id = 117
         array117.data = cast[ptr UncheckedArray[uint32]](alloc(array117.size * sizeof(uint32)))
         zeroMem(array117.data, array117.size * sizeof(uint32))
         debugNew(array117.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array113
      params0.data[1] = array117
      var array118: ptr ArrayT = func35(addr params0, loopsFactor)
      debugReturn(array118.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array119: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array119 = vars.data[pCounter]
            inc array119.refC
            debugCopy(array119.id)
         else:
            array119 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array119.size = 206
            array119.refC = 1
            array119.id = 119
            array119.data = cast[ptr UncheckedArray[uint32]](alloc(array119.size * sizeof(uint32)))
            zeroMem(array119.data, array119.size * sizeof(uint32))
            debugNew(array119.id)
         let loopLimit37 = (50) div (5) + 1
         for loop37 in 0 ..< loopLimit37:
            discard
            for i in 0 ..< array117.size:
               dec array117.data[i]
            for i in 0 ..< array117.size:
               if array117.data[i] == 72:
                  return array117
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array113
         params1.data[1] = array117
         params1.data[2] = array118
         params1.data[3] = array119
         var array120: ptr ArrayT = func46(addr params1, getPath(), loopsFactor)
         debugReturn(array120.id)
         dealloc(params1.data)
         dec array120.refC
         if array120.refC == 0:
            dealloc(array120.data)
            dealloc(array120)
            debugFree(array120.id)
         dec array119.refC
         if array119.refC == 0:
            dealloc(array119.data)
            dealloc(array119)
            debugFree(array119.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array113
         params1.data[1] = array117
         params1.data[2] = array118
         var array121: ptr ArrayT = func40(addr params1, getPath(), loopsFactor)
         debugReturn(array121.id)
         dealloc(params1.data)
         dec array121.refC
         if array121.refC == 0:
            dealloc(array121.data)
            dealloc(array121)
            debugFree(array121.id)
      for i in 0 ..< array113.size:
         if array113.data[i] == 4:
            return array113
      dec array118.refC
      if array118.refC == 0:
         dealloc(array118.data)
         dealloc(array118)
         debugFree(array118.id)
      dec array117.refC
      if array117.refC == 0:
         dealloc(array117.data)
         dealloc(array117)
         debugFree(array117.id)
   for i in 0 ..< array113.size:
      dec array113.data[i]
   for i in 0 ..< array113.size:
      if array113.data[i] == 40:
         return array113
   return array113

