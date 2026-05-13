proc func1*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT =
   var pCounter = vars.size
   var array289: ptr ArrayT
   if pCounter > 0:
      dec pCounter
      array289 = vars.data[pCounter]
      inc array289.refC
      debugCopy(array289.id)
   else:
      array289 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array289.size = 573
      array289.refC = 1
      array289.id = 289
      array289.data = cast[ptr UncheckedArray[uint32]](alloc(array289.size * sizeof(uint32)))
      zeroMem(array289.data, array289.size * sizeof(uint32))
      debugNew(array289.id)
   var params0: ArrayTParam
   params0.size = 1
   params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
   params0.data[0] = array289
   var array290: ptr ArrayT = func3(addr params0, loopsFactor)
   debugReturn(array290.id)
   dealloc(params0.data)
   if (PATH0 and 1'u64) != 0:
      discard
      var array293: ptr ArrayT
      if pCounter > 0:
         dec pCounter
         array293 = vars.data[pCounter]
         inc array293.refC
         debugCopy(array293.id)
      else:
         array293 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
         array293.size = 954
         array293.refC = 1
         array293.id = 293
         array293.data = cast[ptr UncheckedArray[uint32]](alloc(array293.size * sizeof(uint32)))
         zeroMem(array293.data, array293.size * sizeof(uint32))
         debugNew(array293.id)
      let loopLimit84 = (50) div (2) + 1
      for loop84 in 0 ..< loopLimit84:
         discard
         for i in 0 ..< array289.size:
            dec array289.data[i]
         for i in 0 ..< array293.size:
            if array293.data[i] == 86:
               return array293
      var params1: ArrayTParam
      params1.size = 3
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array289
      params1.data[1] = array290
      params1.data[2] = array293
      var array294: ptr ArrayT = func10(addr params1, getPath(), loopsFactor)
      debugReturn(array294.id)
      dealloc(params1.data)
      dec array294.refC
      if array294.refC == 0:
         dealloc(array294.data)
         dealloc(array294)
         debugFree(array294.id)
      dec array293.refC
      if array293.refC == 0:
         dealloc(array293.data)
         dealloc(array293)
         debugFree(array293.id)
   else:
      discard
      var params1: ArrayTParam
      params1.size = 2
      params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
      params1.data[0] = array289
      params1.data[1] = array290
      var array295: ptr ArrayT = func4(addr params1, getPath(), loopsFactor)
      debugReturn(array295.id)
      dealloc(params1.data)
      dec array295.refC
      if array295.refC == 0:
         dealloc(array295.data)
         dealloc(array295)
         debugFree(array295.id)
   dec array290.refC
   if array290.refC == 0:
      dealloc(array290.data)
      dealloc(array290)
      debugFree(array290.id)
   return array289

