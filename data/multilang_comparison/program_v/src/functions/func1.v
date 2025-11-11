module functions

import os
import rand

pub fn func1(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array193 := Array{}
   if p_counter > 0 {
       array193 = vars.data[p_counter-1]
       p_counter--
       array193.ref_c++
   } else {
       array193 = Array{
           size: 780,
           ref_c: 1,
           id: 193,
           data: []u32{len: 780}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array193
   mut array194 := func3(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array197 := Array{}
      if p_counter > 0 {
          array197 = vars.data[p_counter-1]
          p_counter--
          array197.ref_c++
      } else {
          array197 = Array{
              size: 800,
              ref_c: 1,
              id: 197,
              data: []u32{len: 800}
          }
      }
      mut loop57 := 0
      loop_limit57 := (50) / 2 + 1
      for loop57 < loop_limit57 {
         for i := 0; i < array193.size; i++ {
             array193.data[i]--
         }
         for i := 0; i < array197.size; i++ {
             if array197.data[i] == 24 {
                 return array197
             }
         }
         loop57++
      }
      mut params1 := ArrayParam{
          size: 3,
          data: []functions.Array{len: 3}
      }
      params1.data[0] = array193
      params1.data[1] = array194
      params1.data[2] = array197
      mut array198 := func10(params1, get_path(), loops_factor)
      array198.ref_c--
      if array198.ref_c == 0 {
      }
      array197.ref_c--
      if array197.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array193
      params1.data[1] = array194
      mut array199 := func4(params1, get_path(), loops_factor)
      array199.ref_c--
      if array199.ref_c == 0 {
      }
   }
   array194.ref_c--
   if array194.ref_c == 0 {
   }
   return array193
}
