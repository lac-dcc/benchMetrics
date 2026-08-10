func get_path(): UInt64{
   var hi = benchgen_rand();
   var lo = benchgen_rand();
   return (hi << 32) | lo;
}

