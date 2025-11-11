module functions

import os
import rand

pub fn func21(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array141 := Array{}
   if p_counter > 0 {
       array141 = vars.data[p_counter-1]
       p_counter--
       array141.ref_c++
   } else {
       array141 = Array{
           size: 707,
           ref_c: 1,
           id: 141,
           data: []u32{len: 707}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array141
   mut array142 := func23(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array143 := Array{}
      if p_counter > 0 {
          array143 = vars.data[p_counter-1]
          p_counter--
          array143.ref_c++
      } else {
          array143 = Array{
              size: 885,
              ref_c: 1,
              id: 143,
              data: []u32{len: 885}
          }
      }
      mut loop42 := 0
      loop_limit42 := (50) / 3 + 1
      for loop42 < loop_limit42 {
         for i := 0; i < array143.size; i++ {
             array143.data[i]--
         }
         for i := 0; i < array141.size; i++ {
             if array141.data[i] == 26 {
                 return array141
             }
         }
         loop42++
      }
      mut params1 := ArrayParam{
          size: 3,
          data: []functions.Array{len: 3}
      }
      params1.data[0] = array141
      params1.data[1] = array142
      params1.data[2] = array143
      mut array144 := func36(params1, get_path(), loops_factor)
      array144.ref_c--
      if array144.ref_c == 0 {
      }
      array143.ref_c--
      if array143.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array141
      params1.data[1] = array142
      mut array145 := func32(params1, get_path(), loops_factor)
      array145.ref_c--
      if array145.ref_c == 0 {
      }
   }
   array142.ref_c--
   if array142.ref_c == 0 {
   }
   return array141
}
