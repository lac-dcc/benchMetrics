proc getPath*(): uint64 =
   let path = getEnv("BENCH_PATH")
   if path.len > 0:
      return uint64(parseInt(path))
   else:
      let hi = uint64(benchgenRand())
      let lo = uint64(benchgenRand())
      return (hi shl 32) or lo

