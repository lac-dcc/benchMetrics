module functions

import os
import rand

pub fn func12(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array66 := Array{}
      if p_counter > 0 {
          array66 = vars.data[p_counter-1]
          p_counter--
          array66.ref_c++
      } else {
          array66 = Array{
              size: 440,
              ref_c: 1,
              id: 66,
              data: []u32{len: 440}
          }
      }
      mut loop21 := 0
      loop_limit21 := (50) / 3 + 1
      for loop21 < loop_limit21 {
         for i := 0; i < array66.size; i++ {
             array66.data[i]--
         }
         for i := 0; i < array66.size; i++ {
             if array66.data[i] == 94 {
                 return array66
             }
         }
         loop21++
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array66
      mut array67 := func24(params0, get_path(), loops_factor)
      array67.ref_c--
      if array67.ref_c == 0 {
      }
      array66.ref_c--
      if array66.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array90 := func16(params0, get_path(), loops_factor)
      array90.ref_c--
      if array90.ref_c == 0 {
      }
   }
   mut array100 := Array{}
   if p_counter > 0 {
       array100 = vars.data[p_counter-1]
       p_counter--
       array100.ref_c++
   } else {
       array100 = Array{
           size: 101,
           ref_c: 1,
           id: 100,
           data: []u32{len: 101}
       }
   }
   return array100
}
