proc func32*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array150: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array150 = vars.data[pCounter]
      inc array150.refC
      debugCopy(array150.id)
   else:
      array150 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array150.size = 958
      array150.refC = 1
      array150.id = 150
      array150.data = cast[ptr UncheckedArray[uint32]](alloc(array150.size * sizeof(uint32)))
      zeroMem(array150.data, array150.size * sizeof(uint32))
      debugNew(array150.id)
   let loopLimit45 = (50) div (4) + 1
   for loop45 in 0 ..< loopLimit45:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array151: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array151 = vars.data[pCounter]
            inc array151.refC
            debugCopy(array151.id)
         else:
            array151 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array151.size = 498
            array151.refC = 1
            array151.id = 151
            array151.data = cast[ptr UncheckedArray[uint32]](alloc(array151.size * sizeof(uint32)))
            zeroMem(array151.data, array151.size * sizeof(uint32))
            debugNew(array151.id)
         let loopLimit46 = (50) div (5) + 1
         for loop46 in 0 ..< loopLimit46:
            discard
            for i in 0 ..< array150.size:
               dec array150.data[i]
            for i in 0 ..< array150.size:
               if array150.data[i] == 53:
                  return array150
         var params0: ArrayTParam
         params0.size = 2
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array150
         params0.data[1] = array151
         var array152: ptr ArrayT = func46(addr params0, getPath(), loopsFactor)
         debugReturn(array152.id)
         dealloc(params0.data)
         dec array152.refC
         if array152.refC == 0:
            dealloc(array152.data)
            dealloc(array152)
            debugFree(array152.id)
         dec array151.refC
         if array151.refC == 0:
            dealloc(array151.data)
            dealloc(array151)
            debugFree(array151.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array150
         var array153: ptr ArrayT = func40(addr params0, getPath(), loopsFactor)
         debugReturn(array153.id)
         dealloc(params0.data)
         dec array153.refC
         if array153.refC == 0:
            dealloc(array153.data)
            dealloc(array153)
            debugFree(array153.id)
      var array154: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array154 = vars.data[pCounter]
         inc array154.refC
         debugCopy(array154.id)
      else:
         array154 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array154.size = 648
         array154.refC = 1
         array154.id = 154
         array154.data = cast[ptr UncheckedArray[uint32]](alloc(array154.size * sizeof(uint32)))
         zeroMem(array154.data, array154.size * sizeof(uint32))
         debugNew(array154.id)
      var params0: ArrayTParam
      params0.size = 2
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array150
      params0.data[1] = array154
      var array155: ptr ArrayT = func41(addr params0, loopsFactor)
      debugReturn(array155.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array156: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array156 = vars.data[pCounter]
            inc array156.refC
            debugCopy(array156.id)
         else:
            array156 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array156.size = 567
            array156.refC = 1
            array156.id = 156
            array156.data = cast[ptr UncheckedArray[uint32]](alloc(array156.size * sizeof(uint32)))
            zeroMem(array156.data, array156.size * sizeof(uint32))
            debugNew(array156.id)
         let loopLimit47 = (50) div (5) + 1
         for loop47 in 0 ..< loopLimit47:
            discard
            for i in 0 ..< array155.size:
               dec array155.data[i]
            for i in 0 ..< array150.size:
               if array150.data[i] == 29:
                  return array150
         var params1: ArrayTParam
         params1.size = 4
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array150
         params1.data[1] = array154
         params1.data[2] = array155
         params1.data[3] = array156
         var array157: ptr ArrayT = func54(addr params1, getPath(), loopsFactor)
         debugReturn(array157.id)
         dealloc(params1.data)
         dec array157.refC
         if array157.refC == 0:
            dealloc(array157.data)
            dealloc(array157)
            debugFree(array157.id)
         dec array156.refC
         if array156.refC == 0:
            dealloc(array156.data)
            dealloc(array156)
            debugFree(array156.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array150
         params1.data[1] = array154
         params1.data[2] = array155
         var array158: ptr ArrayT = func50(addr params1, getPath(), loopsFactor)
         debugReturn(array158.id)
         dealloc(params1.data)
         dec array158.refC
         if array158.refC == 0:
            dealloc(array158.data)
            dealloc(array158)
            debugFree(array158.id)
      for i in 0 ..< array155.size:
         if array155.data[i] == 90:
            return array155
      dec array155.refC
      if array155.refC == 0:
         dealloc(array155.data)
         dealloc(array155)
         debugFree(array155.id)
      dec array154.refC
      if array154.refC == 0:
         dealloc(array154.data)
         dealloc(array154)
         debugFree(array154.id)
   for i in 0 ..< array150.size:
      dec array150.data[i]
   for i in 0 ..< array150.size:
      if array150.data[i] == 63:
         return array150
   return array150

