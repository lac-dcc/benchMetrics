module functions

import os
import rand

pub fn func43(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array19 := Array{}
   if p_counter > 0 {
       array19 = vars.data[p_counter-1]
       p_counter--
       array19.ref_c++
   } else {
       array19 = Array{
           size: 818,
           ref_c: 1,
           id: 19,
           data: []u32{len: 818}
       }
   }
   return array19
}
