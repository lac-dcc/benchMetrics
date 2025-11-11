module functions

import os
import rand

pub fn func40(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array10 := Array{}
   if p_counter > 0 {
       array10 = vars.data[p_counter-1]
       p_counter--
       array10.ref_c++
   } else {
       array10 = Array{
           size: 228,
           ref_c: 1,
           id: 10,
           data: []u32{len: 228}
       }
   }
   for i := 0; i < array10.size; i++ {
       array10.data[i]--
   }
   for i := 0; i < array10.size; i++ {
       if array10.data[i] == 94 {
           return array10
       }
   }
   return array10
}
