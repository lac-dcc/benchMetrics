module functions

import os
import rand

pub fn func34(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array25 := Array{}
   if p_counter > 0 {
       array25 = vars.data[p_counter-1]
       p_counter--
       array25.ref_c++
   } else {
       array25 = Array{
           size: 559,
           ref_c: 1,
           id: 25,
           data: []u32{len: 559}
       }
   }
   mut loop9 := 0
   loop_limit9 := (50) / 4 + 1
   for loop9 < loop_limit9 {
      for i := 0; i < array25.size; i++ {
          if array25.data[i] == 81 {
              return array25
          }
      }
      loop9++
   }
   for i := 0; i < array25.size; i++ {
       array25.data[i]--
   }
   for i := 0; i < array25.size; i++ {
       if array25.data[i] == 57 {
           return array25
       }
   }
   return array25
}
