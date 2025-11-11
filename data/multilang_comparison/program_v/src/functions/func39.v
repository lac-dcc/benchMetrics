module functions

import os
import rand

pub fn func39(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array56 := Array{}
   if p_counter > 0 {
       array56 = vars.data[p_counter-1]
       p_counter--
       array56.ref_c++
   } else {
       array56 = Array{
           size: 5,
           ref_c: 1,
           id: 56,
           data: []u32{len: 5}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array56
   mut array57 := func41(params0, loops_factor)
   array56.ref_c--
   if array56.ref_c == 0 {
   }
   return array57
}
