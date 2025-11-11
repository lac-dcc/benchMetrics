module functions

import os
import rand

pub fn func41(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array13 := Array{}
   if p_counter > 0 {
       array13 = vars.data[p_counter-1]
       p_counter--
       array13.ref_c++
   } else {
       array13 = Array{
           size: 996,
           ref_c: 1,
           id: 13,
           data: []u32{len: 996}
       }
   }
   mut loop7 := 0
   loop_limit7 := (50) / 5 + 1
   for loop7 < loop_limit7 {
      for i := 0; i < array13.size; i++ {
          array13.data[i]++
      }
      loop7++
   }
   for i := 0; i < array13.size; i++ {
       if array13.data[i] == 43 {
           return array13
       }
   }
   return array13
}
