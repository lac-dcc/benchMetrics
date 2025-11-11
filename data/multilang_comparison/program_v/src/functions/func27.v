module functions

import os
import rand

pub fn func27(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array83 := Array{}
   if p_counter > 0 {
       array83 = vars.data[p_counter-1]
       p_counter--
       array83.ref_c++
   } else {
       array83 = Array{
           size: 157,
           ref_c: 1,
           id: 83,
           data: []u32{len: 157}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array83
   mut array84 := func33(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array87 := Array{}
      if p_counter > 0 {
          array87 = vars.data[p_counter-1]
          p_counter--
          array87.ref_c++
      } else {
          array87 = Array{
              size: 654,
              ref_c: 1,
              id: 87,
              data: []u32{len: 654}
          }
      }
      mut loop27 := 0
      loop_limit27 := (50) / 3 + 1
      for loop27 < loop_limit27 {
         for i := 0; i < array87.size; i++ {
             array87.data[i]--
         }
         for i := 0; i < array87.size; i++ {
             if array87.data[i] == 23 {
                 return array87
             }
         }
         loop27++
      }
      mut params1 := ArrayParam{
          size: 3,
          data: []functions.Array{len: 3}
      }
      params1.data[0] = array83
      params1.data[1] = array84
      params1.data[2] = array87
      mut array88 := func42(params1, get_path(), loops_factor)
      array88.ref_c--
      if array88.ref_c == 0 {
      }
      array87.ref_c--
      if array87.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array83
      params1.data[1] = array84
      mut array89 := func34(params1, loops_factor)
      array89.ref_c--
      if array89.ref_c == 0 {
      }
   }
   array84.ref_c--
   if array84.ref_c == 0 {
   }
   return array83
}
