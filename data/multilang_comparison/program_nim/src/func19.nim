proc func19*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   let loopLimit65 = (50) div (3) + 1
   for loop65 in 0 ..< loopLimit65:
      discard
      if (PATH0 and 1'u64) != 0:
         discard
         var array222: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array222 = vars.data[pCounter]
            inc array222.refC
            debugCopy(array222.id)
         else:
            array222 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array222.size = 358
            array222.refC = 1
            array222.id = 222
            array222.data = cast[ptr UncheckedArray[uint32]](alloc(array222.size * sizeof(uint32)))
            zeroMem(array222.data, array222.size * sizeof(uint32))
            debugNew(array222.id)
         let loopLimit66 = (50) div (4) + 1
         for loop66 in 0 ..< loopLimit66:
            discard
            for i in 0 ..< array222.size:
               dec array222.data[i]
            for i in 0 ..< array222.size:
               if array222.data[i] == 17:
                  return array222
         var params0: ArrayTParam
         params0.size = 1
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         params0.data[0] = array222
         var array223: ptr ArrayT = func36(addr params0, getPath(), loopsFactor)
         debugReturn(array223.id)
         dealloc(params0.data)
         dec array223.refC
         if array223.refC == 0:
            dealloc(array223.data)
            dealloc(array223)
            debugFree(array223.id)
         dec array222.refC
         if array222.refC == 0:
            dealloc(array222.data)
            dealloc(array222)
            debugFree(array222.id)
      else:
         discard
         var params0: ArrayTParam
         params0.size = 0
         params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
         var array224: ptr ArrayT = func32(addr params0, getPath(), loopsFactor)
         debugReturn(array224.id)
         dealloc(params0.data)
         dec array224.refC
         if array224.refC == 0:
            dealloc(array224.data)
            dealloc(array224)
            debugFree(array224.id)
      var array225: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array225 = vars.data[pCounter]
         inc array225.refC
         debugCopy(array225.id)
      else:
         array225 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array225.size = 794
         array225.refC = 1
         array225.id = 225
         array225.data = cast[ptr UncheckedArray[uint32]](alloc(array225.size * sizeof(uint32)))
         zeroMem(array225.data, array225.size * sizeof(uint32))
         debugNew(array225.id)
      var params0: ArrayTParam
      params0.size = 1
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      params0.data[0] = array225
      var array226: ptr ArrayT = func33(addr params0, loopsFactor)
      debugReturn(array226.id)
      dealloc(params0.data)
      if (PATH0 and 2'u64) != 0:
         discard
         var array227: ptr ArrayT
         if pCounter > 0:
            dec pCounter
            array227 = vars.data[pCounter]
            inc array227.refC
            debugCopy(array227.id)
         else:
            array227 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array227.size = 431
            array227.refC = 1
            array227.id = 227
            array227.data = cast[ptr UncheckedArray[uint32]](alloc(array227.size * sizeof(uint32)))
            zeroMem(array227.data, array227.size * sizeof(uint32))
            debugNew(array227.id)
         let loopLimit67 = (50) div (4) + 1
         for loop67 in 0 ..< loopLimit67:
            discard
            for i in 0 ..< array226.size:
               dec array226.data[i]
            for i in 0 ..< array225.size:
               if array225.data[i] == 90:
                  return array225
         var params1: ArrayTParam
         params1.size = 3
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array225
         params1.data[1] = array226
         params1.data[2] = array227
         var array228: ptr ArrayT = func42(addr params1, getPath(), loopsFactor)
         debugReturn(array228.id)
         dealloc(params1.data)
         dec array228.refC
         if array228.refC == 0:
            dealloc(array228.data)
            dealloc(array228)
            debugFree(array228.id)
         dec array227.refC
         if array227.refC == 0:
            dealloc(array227.data)
            dealloc(array227)
            debugFree(array227.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array225
         params1.data[1] = array226
         var array229: ptr ArrayT = func34(addr params1, getPath(), loopsFactor)
         debugReturn(array229.id)
         dealloc(params1.data)
         dec array229.refC
         if array229.refC == 0:
            dealloc(array229.data)
            dealloc(array229)
            debugFree(array229.id)
      for i in 0 ..< array226.size:
         if array226.data[i] == 57:
            return array226
      dec array226.refC
      if array226.refC == 0:
         dealloc(array226.data)
         dealloc(array226)
         debugFree(array226.id)
      dec array225.refC
      if array225.refC == 0:
         dealloc(array225.data)
         dealloc(array225)
         debugFree(array225.id)
   var array230: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array230 = vars.data[pCounter]
      inc array230.refC
      debugCopy(array230.id)
   else:
      array230 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array230.size = 574
      array230.refC = 1
      array230.id = 230
      array230.data = cast[ptr UncheckedArray[uint32]](alloc(array230.size * sizeof(uint32)))
      zeroMem(array230.data, array230.size * sizeof(uint32))
      debugNew(array230.id)
   return array230

