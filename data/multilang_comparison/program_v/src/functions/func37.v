module functions

import os
import rand

pub fn func37(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop17 := 0
   loop_limit17 := (50) / 4 + 1
   for loop17 < loop_limit17 {
      loop17++
   }
   mut array50 := Array{}
   if p_counter > 0 {
       array50 = vars.data[p_counter-1]
       p_counter--
       array50.ref_c++
   } else {
       array50 = Array{
           size: 968,
           ref_c: 1,
           id: 50,
           data: []u32{len: 968}
       }
   }
   return array50
}
