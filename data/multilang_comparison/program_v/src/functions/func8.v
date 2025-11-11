module functions

import os
import rand

pub fn func8(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array170 := Array{}
      if p_counter > 0 {
          array170 = vars.data[p_counter-1]
          p_counter--
          array170.ref_c++
      } else {
          array170 = Array{
              size: 882,
              ref_c: 1,
              id: 170,
              data: []u32{len: 882}
          }
      }
      mut loop50 := 0
      loop_limit50 := (50) / 2 + 1
      for loop50 < loop_limit50 {
         for i := 0; i < array170.size; i++ {
             array170.data[i]--
         }
         for i := 0; i < array170.size; i++ {
             if array170.data[i] == 52 {
                 return array170
             }
         }
         loop50++
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array170
      mut array171 := func18(params0, get_path(), loops_factor)
      array171.ref_c--
      if array171.ref_c == 0 {
      }
      array170.ref_c--
      if array170.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array172 := func14(params0, get_path(), loops_factor)
      array172.ref_c--
      if array172.ref_c == 0 {
      }
   }
   mut array173 := Array{}
   if p_counter > 0 {
       array173 = vars.data[p_counter-1]
       p_counter--
       array173.ref_c++
   } else {
       array173 = Array{
           size: 160,
           ref_c: 1,
           id: 173,
           data: []u32{len: 160}
       }
   }
   return array173
}
