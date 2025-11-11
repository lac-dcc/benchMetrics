module functions

import os
import rand

pub fn func33(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array85 := Array{}
   if p_counter > 0 {
       array85 = vars.data[p_counter-1]
       p_counter--
       array85.ref_c++
   } else {
       array85 = Array{
           size: 744,
           ref_c: 1,
           id: 85,
           data: []u32{len: 744}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array85
   mut array86 := func36(params0, get_path(), loops_factor)
   mut loop26 := 0
   loop_limit26 := (50) / 3 + 1
   for loop26 < loop_limit26 {
      for i := 0; i < array86.size; i++ {
          array86.data[i]++
      }
      loop26++
   }
   for i := 0; i < array85.size; i++ {
       if array85.data[i] == 76 {
           return array85
       }
   }
   array86.ref_c--
   if array86.ref_c == 0 {
   }
   return array85
}
