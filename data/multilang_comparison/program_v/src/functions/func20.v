module functions

import os
import rand

pub fn func20(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut array136 := Array{}
      if p_counter > 0 {
          array136 = vars.data[p_counter-1]
          p_counter--
          array136.ref_c++
      } else {
          array136 = Array{
              size: 337,
              ref_c: 1,
              id: 136,
              data: []u32{len: 337}
          }
      }
      mut loop41 := 0
      loop_limit41 := (50) / 3 + 1
      for loop41 < loop_limit41 {
         for i := 0; i < array136.size; i++ {
             array136.data[i]--
         }
         for i := 0; i < array136.size; i++ {
             if array136.data[i] == 3 {
                 return array136
             }
         }
         loop41++
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array136
      mut array137 := func28(params0, get_path(), loops_factor)
      array137.ref_c--
      if array137.ref_c == 0 {
      }
      array136.ref_c--
      if array136.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array138 := func22(params0, get_path(), loops_factor)
      array138.ref_c--
      if array138.ref_c == 0 {
      }
   }
   mut array139 := Array{}
   if p_counter > 0 {
       array139 = vars.data[p_counter-1]
       p_counter--
       array139.ref_c++
   } else {
       array139 = Array{
           size: 201,
           ref_c: 1,
           id: 139,
           data: []u32{len: 201}
       }
   }
   return array139
}
