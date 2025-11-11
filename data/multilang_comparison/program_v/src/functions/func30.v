module functions

import os
import rand

pub fn func30(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array16 := Array{}
      if p_counter > 0 {
          array16 = vars.data[p_counter-1]
          p_counter--
          array16.ref_c++
      } else {
          array16 = Array{
              size: 945,
              ref_c: 1,
              id: 16,
              data: []u32{len: 945}
          }
      }
      mut loop8 := 0
      loop_limit8 := (50) / 4 + 1
      for loop8 < loop_limit8 {
         for i := 0; i < array16.size; i++ {
             array16.data[i]--
         }
         for i := 0; i < array16.size; i++ {
             if array16.data[i] == 91 {
                 return array16
             }
         }
         loop8++
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array16
      mut array17 := func42(params0, get_path(), loops_factor)
      array17.ref_c--
      if array17.ref_c == 0 {
      }
      array16.ref_c--
      if array16.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array24 := func34(params0, loops_factor)
      array24.ref_c--
      if array24.ref_c == 0 {
      }
   }
   mut array26 := Array{}
   if p_counter > 0 {
       array26 = vars.data[p_counter-1]
       p_counter--
       array26.ref_c++
   } else {
       array26 = Array{
           size: 685,
           ref_c: 1,
           id: 26,
           data: []u32{len: 685}
       }
   }
   return array26
}
