module functions

import os
import rand

pub fn func44(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array21 := Array{}
   if p_counter > 0 {
       array21 = vars.data[p_counter-1]
       p_counter--
       array21.ref_c++
   } else {
       array21 = Array{
           size: 217,
           ref_c: 1,
           id: 21,
           data: []u32{len: 217}
       }
   }
   return array21
}
