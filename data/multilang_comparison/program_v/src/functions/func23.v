module functions

import os
import rand

pub fn func23(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array45 := Array{}
   if p_counter > 0 {
       array45 = vars.data[p_counter-1]
       p_counter--
       array45.ref_c++
   } else {
       array45 = Array{
           size: 982,
           ref_c: 1,
           id: 45,
           data: []u32{len: 982}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array45
   mut array46 := func28(params0, get_path(), loops_factor)
   mut loop15 := 0
   loop_limit15 := (50) / 4 + 1
   for loop15 < loop_limit15 {
      for i := 0; i < array46.size; i++ {
          array46.data[i]++
      }
      loop15++
   }
   for i := 0; i < array45.size; i++ {
       if array45.data[i] == 15 {
           return array45
       }
   }
   array45.ref_c--
   if array45.ref_c == 0 {
   }
   return array46
}
