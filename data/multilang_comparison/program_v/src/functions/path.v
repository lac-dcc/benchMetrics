module functions

import os
import rand
import strconv

pub fn get_path() u64 {
    path := os.getenv('BENCH_PATH')
    if path != '' {
        val := strconv.parse_uint(path, 10, 64) or { return 0 }
        return val
    }
    n := u64(rand.u32())
    return (n << 32) | u64(rand.u32())
}
