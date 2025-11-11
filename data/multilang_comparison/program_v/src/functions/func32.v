module functions

import os
import rand

pub fn func32(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array59 := Array{}
   if p_counter > 0 {
       array59 = vars.data[p_counter-1]
       p_counter--
       array59.ref_c++
   } else {
       array59 = Array{
           size: 851,
           ref_c: 1,
           id: 59,
           data: []u32{len: 851}
       }
   }
   mut loop19 := 0
   loop_limit19 := (50) / 4 + 1
   for loop19 < loop_limit19 {
      if (path0 & 1) != 0 {
         mut array60 := Array{}
         if p_counter > 0 {
             array60 = vars.data[p_counter-1]
             p_counter--
             array60.ref_c++
         } else {
             array60 = Array{
                 size: 949,
                 ref_c: 1,
                 id: 60,
                 data: []u32{len: 949}
             }
         }
         mut loop20 := 0
         loop_limit20 := (50) / 5 + 1
         for loop20 < loop_limit20 {
            for i := 0; i < array60.size; i++ {
                array60.data[i]--
            }
            for i := 0; i < array59.size; i++ {
                if array59.data[i] == 78 {
                    return array59
                }
            }
            loop20++
         }
         array60.ref_c--
         if array60.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array59
         mut array61 := func40(params0, loops_factor)
         array61.ref_c--
         if array61.ref_c == 0 {
         }
      }
      mut array62 := Array{}
      if p_counter > 0 {
          array62 = vars.data[p_counter-1]
          p_counter--
          array62.ref_c++
      } else {
          array62 = Array{
              size: 659,
              ref_c: 1,
              id: 62,
              data: []u32{len: 659}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array59
      params0.data[1] = array62
      mut array63 := func41(params0, loops_factor)
      for i := 0; i < array59.size; i++ {
          if array59.data[i] == 51 {
              return array59
          }
      }
      loop19++
      array63.ref_c--
      if array63.ref_c == 0 {
      }
      array62.ref_c--
      if array62.ref_c == 0 {
      }
   }
   for i := 0; i < array59.size; i++ {
       array59.data[i]--
   }
   for i := 0; i < array59.size; i++ {
       if array59.data[i] == 67 {
           return array59
       }
   }
   return array59
}
