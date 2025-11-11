module functions

import os
import rand

pub fn func35(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array30 := Array{}
   if p_counter > 0 {
       array30 = vars.data[p_counter-1]
       p_counter--
       array30.ref_c++
   } else {
       array30 = Array{
           size: 159,
           ref_c: 1,
           id: 30,
           data: []u32{len: 159}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array30
   mut array31 := func42(params0, get_path(), loops_factor)
   mut loop10 := 0
   loop_limit10 := (50) / 4 + 1
   for loop10 < loop_limit10 {
      for i := 0; i < array30.size; i++ {
          array30.data[i]++
      }
      loop10++
   }
   for i := 0; i < array31.size; i++ {
       if array31.data[i] == 12 {
           return array31
       }
   }
   array31.ref_c--
   if array31.ref_c == 0 {
   }
   return array30
}
