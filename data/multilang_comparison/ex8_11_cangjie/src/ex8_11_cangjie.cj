

var benchgen_state: UInt64 = 1u64;

func benchgen_srand(seed: UInt64) {
    benchgen_state = seed;
}

@OverflowWrapping
func benchgen_rand(): UInt64 {
    let magicNumber: UInt64 = 6364136223846793005u64
    benchgen_state = (magicNumber * benchgen_state) + 1u64;
    return benchgen_state >> 32;
}

main() {
   var loopsFactor : Int64 = 0;
   benchgen_srand(0);
   var path: UInt64 = get_path();
   var loop0: UInt64 = 0;
   var loopLimit0: UInt64 = UInt64((50)/1 + 1);
   for(_ in loop0..loopLimit0) {
      var params0: ArrayTParam;
      params0= ArrayTParam(0)
      var array0 = func0(params0, path, loopsFactor);
      var array252: ArrayT;
      array252 = ArrayT(278,252,1)
      if((get_path() & 1) != 1) {
         if((get_path() & 1) != 1) {
            var array253: ArrayT;
            array253 = ArrayT(159,253,1)
            var loop73: UInt64 = 0;
            var loopLimit73: UInt64 = UInt64((50)/2 + 1);
            for(_ in loop73..loopLimit73) {
               for (i in 0..array253.size) {
                  array253.data[i]+=1;
               }
               for (i in 0..array0.size) {
                  if (array0.data[i] == 83) { 
                     array0.data[i] += 83;
                  }
               }
            }
            var params1: ArrayTParam;
            params1= ArrayTParam(3)
            params1.data[0] = array0;
            params1.data[1] = array252;
            params1.data[2] = array253;
            var array254 = func6(params1, path, loopsFactor);
         }
         else {
            var params1: ArrayTParam;
            params1= ArrayTParam(2)
            params1.data[0] = array0;
            params1.data[1] = array252;
            var array278 = func2(params1, path, loopsFactor);
         }
      }
      else {
         var params1: ArrayTParam;
         params1= ArrayTParam(2)
         params1.data[0] = array0;
         params1.data[1] = array252;
         var array288 = func1(params1, path, loopsFactor);
      }
   }

}

