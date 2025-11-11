module functions

import os
import rand

pub fn func5(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array121 := Array{}
   if p_counter > 0 {
       array121 = vars.data[p_counter-1]
       p_counter--
       array121.ref_c++
   } else {
       array121 = Array{
           size: 978,
           ref_c: 1,
           id: 121,
           data: []u32{len: 978}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array121
   mut array122 := func10(params0, get_path(), loops_factor)
   mut loop36 := 0
   loop_limit36 := (50) / 3 + 1
   for loop36 < loop_limit36 {
      for i := 0; i < array122.size; i++ {
          array122.data[i]++
      }
      loop36++
   }
   for i := 0; i < array122.size; i++ {
       if array122.data[i] == 3 {
           return array122
       }
   }
   array122.ref_c--
   if array122.ref_c == 0 {
   }
   return array121
}
