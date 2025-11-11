module functions

import os
import rand

pub fn func31(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array28 := Array{}
   if p_counter > 0 {
       array28 = vars.data[p_counter-1]
       p_counter--
       array28.ref_c++
   } else {
       array28 = Array{
           size: 890,
           ref_c: 1,
           id: 28,
           data: []u32{len: 890}
       }
   }
   mut params0 := ArrayParam{
       size: 1,
       data: []functions.Array{len: 1}
   }
   params0.data[0] = array28
   mut array29 := func35(params0, loops_factor)
   if (path0 & 1) != 0 {
      mut array32 := Array{}
      if p_counter > 0 {
          array32 = vars.data[p_counter-1]
          p_counter--
          array32.ref_c++
      } else {
          array32 = Array{
              size: 289,
              ref_c: 1,
              id: 32,
              data: []u32{len: 289}
          }
      }
      mut loop11 := 0
      loop_limit11 := (50) / 4 + 1
      for loop11 < loop_limit11 {
         for i := 0; i < array32.size; i++ {
             array32.data[i]--
         }
         for i := 0; i < array32.size; i++ {
             if array32.data[i] == 44 {
                 return array32
             }
         }
         loop11++
      }
      array32.ref_c--
      if array32.ref_c == 0 {
      }
   } else {
      mut params1 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params1.data[0] = array28
      params1.data[1] = array29
      mut array33 := func40(params1, loops_factor)
      array33.ref_c--
      if array33.ref_c == 0 {
      }
   }
   array29.ref_c--
   if array29.ref_c == 0 {
   }
   return array28
}
