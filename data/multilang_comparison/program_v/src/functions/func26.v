module functions

import os
import rand

pub fn func26(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array78 := Array{}
      if p_counter > 0 {
          array78 = vars.data[p_counter-1]
          p_counter--
          array78.ref_c++
      } else {
          array78 = Array{
              size: 870,
              ref_c: 1,
              id: 78,
              data: []u32{len: 870}
          }
      }
      mut loop25 := 0
      loop_limit25 := (50) / 3 + 1
      for loop25 < loop_limit25 {
         for i := 0; i < array78.size; i++ {
             array78.data[i]--
         }
         for i := 0; i < array78.size; i++ {
             if array78.data[i] == 93 {
                 return array78
             }
         }
         loop25++
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array78
      mut array79 := func36(params0, get_path(), loops_factor)
      array79.ref_c--
      if array79.ref_c == 0 {
      }
      array78.ref_c--
      if array78.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array80 := func32(params0, get_path(), loops_factor)
      array80.ref_c--
      if array80.ref_c == 0 {
      }
   }
   mut array81 := Array{}
   if p_counter > 0 {
       array81 = vars.data[p_counter-1]
       p_counter--
       array81.ref_c++
   } else {
       array81 = Array{
           size: 254,
           ref_c: 1,
           id: 81,
           data: []u32{len: 254}
       }
   }
   return array81
}
