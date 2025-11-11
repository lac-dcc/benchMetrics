module functions

import os
import rand

pub fn func38(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array52 := Array{}
      if p_counter > 0 {
          array52 = vars.data[p_counter-1]
          p_counter--
          array52.ref_c++
      } else {
          array52 = Array{
              size: 636,
              ref_c: 1,
              id: 52,
              data: []u32{len: 636}
          }
      }
      mut loop18 := 0
      loop_limit18 := (50) / 4 + 1
      for loop18 < loop_limit18 {
         for i := 0; i < array52.size; i++ {
             array52.data[i]--
         }
         for i := 0; i < array52.size; i++ {
             if array52.data[i] == 5 {
                 return array52
             }
         }
         loop18++
      }
      array52.ref_c--
      if array52.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array53 := func40(params0, loops_factor)
      array53.ref_c--
      if array53.ref_c == 0 {
      }
   }
   mut array54 := Array{}
   if p_counter > 0 {
       array54 = vars.data[p_counter-1]
       p_counter--
       array54.ref_c++
   } else {
       array54 = Array{
           size: 142,
           ref_c: 1,
           id: 54,
           data: []u32{len: 142}
       }
   }
   return array54
}
