module functions

import os
import rand

pub fn func13(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array102 := Array{}
   if p_counter > 0 {
       array102 = vars.data[p_counter-1]
       p_counter--
       array102.ref_c++
   } else {
       array102 = Array{
           size: 156,
           ref_c: 1,
           id: 102,
           data: []u32{len: 156}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array102
   mut array103 := func17(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array106 := Array{}
      if p_counter > 0 {
          array106 = vars.data[p_counter-1]
          p_counter--
          array106.ref_c++
      } else {
          array106 = Array{
              size: 58,
              ref_c: 1,
              id: 106,
              data: []u32{len: 58}
          }
      }
      mut loop32 := 0
      loop_limit32 := (50) / 3 + 1
      for loop32 < loop_limit32 {
         for i := 0; i < array103.size; i++ {
             array103.data[i]--
         }
         for i := 0; i < array106.size; i++ {
             if array106.data[i] == 98 {
                 return array106
             }
         }
         loop32++
      }
      mut params1 := ArrayParam{
          size: 3,
          data: []functions.Array{len: 3}
      }
      params1.data[0] = array102
      params1.data[1] = array103
      params1.data[2] = array106
      mut array107 := func28(params1, get_path(), loops_factor)
      array107.ref_c--
      if array107.ref_c == 0 {
      }
      array106.ref_c--
      if array106.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array102
      params1.data[1] = array103
      mut array108 := func22(params1, get_path(), loops_factor)
      array108.ref_c--
      if array108.ref_c == 0 {
      }
   }
   array103.ref_c--
   if array103.ref_c == 0 {
   }
   return array102
}
