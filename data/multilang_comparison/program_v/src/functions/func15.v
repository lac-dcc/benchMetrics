module functions

import os
import rand

pub fn func15(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array177 := Array{}
   if p_counter > 0 {
       array177 = vars.data[p_counter-1]
       p_counter--
       array177.ref_c++
   } else {
       array177 = Array{
           size: 408,
           ref_c: 1,
           id: 177,
           data: []u32{len: 408}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array177
   mut array178 := func18(params0, get_path(), loops_factor)
   mut loop51 := 0
   loop_limit51 := (50) / 2 + 1
   for loop51 < loop_limit51 {
      for i := 0; i < array178.size; i++ {
          array178.data[i]++
      }
      loop51++
   }
   for i := 0; i < array177.size; i++ {
       if array177.data[i] == 46 {
           return array177
       }
   }
   array177.ref_c--
   if array177.ref_c == 0 {
   }
   return array178
}
