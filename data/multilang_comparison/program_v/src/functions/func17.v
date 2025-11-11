module functions

import os
import rand

pub fn func17(vars ArrayParam, loops_factor int) Array {
   mut p_counter := vars.size
   mut array104 := Array{}
   if p_counter > 0 {
       array104 = vars.data[p_counter-1]
       p_counter--
       array104.ref_c++
   } else {
       array104 = Array{
           size: 630,
           ref_c: 1,
           id: 104,
           data: []u32{len: 630}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array104
   mut array105 := func24(params0, get_path(), loops_factor)
   mut loop31 := 0
   loop_limit31 := (50) / 3 + 1
   for loop31 < loop_limit31 {
      for i := 0; i < array104.size; i++ {
          array104.data[i]++
      }
      loop31++
   }
   for i := 0; i < array105.size; i++ {
       if array105.data[i] == 5 {
           return array105
       }
   }
   array105.ref_c--
   if array105.ref_c == 0 {
   }
   return array104
}
