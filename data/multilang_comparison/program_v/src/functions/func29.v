module functions

import os
import rand

pub fn func29(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop5 := 0
   loop_limit5 := (50) / 4 + 1
   for loop5 < loop_limit5 {
      if (path0 & 1) != 0 {
         mut array8 := Array{}
         if p_counter > 0 {
             array8 = vars.data[p_counter-1]
             p_counter--
             array8.ref_c++
         } else {
             array8 = Array{
                 size: 736,
                 ref_c: 1,
                 id: 8,
                 data: []u32{len: 736}
             }
         }
         mut loop6 := 0
         loop_limit6 := (50) / 5 + 1
         for loop6 < loop_limit6 {
            for i := 0; i < array8.size; i++ {
                array8.data[i]--
            }
            for i := 0; i < array8.size; i++ {
                if array8.data[i] == 84 {
                    return array8
                }
            }
            loop6++
         }
         array8.ref_c--
         if array8.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 0,
             data: []functions.Array{len: 0}
         }
         mut array9 := func40(params0, loops_factor)
         array9.ref_c--
         if array9.ref_c == 0 {
         }
      }
      mut array11 := Array{}
      if p_counter > 0 {
          array11 = vars.data[p_counter-1]
          p_counter--
          array11.ref_c++
      } else {
          array11 = Array{
              size: 326,
              ref_c: 1,
              id: 11,
              data: []u32{len: 326}
          }
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array11
      mut array12 := func41(params0, loops_factor)
      for i := 0; i < array12.size; i++ {
          if array12.data[i] == 90 {
              return array12
          }
      }
      loop5++
      array12.ref_c--
      if array12.ref_c == 0 {
      }
      array11.ref_c--
      if array11.ref_c == 0 {
      }
   }
   mut array14 := Array{}
   if p_counter > 0 {
       array14 = vars.data[p_counter-1]
       p_counter--
       array14.ref_c++
   } else {
       array14 = Array{
           size: 614,
           ref_c: 1,
           id: 14,
           data: []u32{len: 614}
       }
   }
   return array14
}
