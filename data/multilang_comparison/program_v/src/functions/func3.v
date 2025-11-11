module functions

import os
import rand

pub fn func3(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array195 := Array{}
   if p_counter > 0 {
       array195 = vars.data[p_counter-1]
       p_counter--
       array195.ref_c++
   } else {
       array195 = Array{
           size: 196,
           ref_c: 1,
           id: 195,
           data: []u32{len: 196}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array195
   mut array196 := func6(params0, get_path(), loops_factor)
   mut loop56 := 0
   loop_limit56 := (50) / 2 + 1
   for loop56 < loop_limit56 {
      for i := 0; i < array195.size; i++ {
          array195.data[i]++
      }
      loop56++
   }
   for i := 0; i < array195.size; i++ {
       if array195.data[i] == 58 {
           return array195
       }
   }
   array196.ref_c--
   if array196.ref_c == 0 {
   }
   return array195
}
