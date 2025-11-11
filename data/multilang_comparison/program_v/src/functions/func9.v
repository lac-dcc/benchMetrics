module functions

import os
import rand

pub fn func9(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array175 := Array{}
   if p_counter > 0 {
       array175 = vars.data[p_counter-1]
       p_counter--
       array175.ref_c++
   } else {
       array175 = Array{
           size: 409,
           ref_c: 1,
           id: 175,
           data: []u32{len: 409}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array175
   mut array176 := func15(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array179 := Array{}
      if p_counter > 0 {
          array179 = vars.data[p_counter-1]
          p_counter--
          array179.ref_c++
      } else {
          array179 = Array{
              size: 558,
              ref_c: 1,
              id: 179,
              data: []u32{len: 558}
          }
      }
      mut loop52 := 0
      loop_limit52 := (50) / 2 + 1
      for loop52 < loop_limit52 {
         for i := 0; i < array176.size; i++ {
             array176.data[i]--
         }
         for i := 0; i < array176.size; i++ {
             if array176.data[i] == 49 {
                 return array176
             }
         }
         loop52++
      }
      mut params1 := ArrayParam{
          size: 3,
          data: []functions.Array{len: 3}
      }
      params1.data[0] = array175
      params1.data[1] = array176
      params1.data[2] = array179
      mut array180 := func24(params1, get_path(), loops_factor)
      array180.ref_c--
      if array180.ref_c == 0 {
      }
      array179.ref_c--
      if array179.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array175
      params1.data[1] = array176
      mut array181 := func16(params1, get_path(), loops_factor)
      array181.ref_c--
      if array181.ref_c == 0 {
      }
   }
   array175.ref_c--
   if array175.ref_c == 0 {
   }
   return array176
}
