module functions

import os
import rand

pub fn func45(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array23 := Array{}
   if p_counter > 0 {
       array23 = vars.data[p_counter-1]
       p_counter--
       array23.ref_c++
   } else {
       array23 = Array{
           size: 398,
           ref_c: 1,
           id: 23,
           data: []u32{len: 398}
       }
   }
   return array23
}
