module functions

import os
import rand

pub fn func25(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop22 := 0
   loop_limit22 := (50) / 3 + 1
   for loop22 < loop_limit22 {
      if (path0 & 1) != 0 {
         mut array69 := Array{}
         if p_counter > 0 {
             array69 = vars.data[p_counter-1]
             p_counter--
             array69.ref_c++
         } else {
             array69 = Array{
                 size: 499,
                 ref_c: 1,
                 id: 69,
                 data: []u32{len: 499}
             }
         }
         mut loop23 := 0
         loop_limit23 := (50) / 4 + 1
         for loop23 < loop_limit23 {
            for i := 0; i < array69.size; i++ {
                array69.data[i]--
            }
            for i := 0; i < array69.size; i++ {
                if array69.data[i] == 18 {
                    return array69
                }
            }
            loop23++
         }
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array69
         mut array70 := func42(params0, get_path(), loops_factor)
         array70.ref_c--
         if array70.ref_c == 0 {
         }
         array69.ref_c--
         if array69.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 0,
             data: []functions.Array{len: 0}
         }
         mut array71 := func34(params0, loops_factor)
         array71.ref_c--
         if array71.ref_c == 0 {
         }
      }
      mut array72 := Array{}
      if p_counter > 0 {
          array72 = vars.data[p_counter-1]
          p_counter--
          array72.ref_c++
      } else {
          array72 = Array{
              size: 42,
              ref_c: 1,
              id: 72,
              data: []u32{len: 42}
          }
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array72
      mut array73 := func35(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array74 := Array{}
         if p_counter > 0 {
             array74 = vars.data[p_counter-1]
             p_counter--
             array74.ref_c++
         } else {
             array74 = Array{
                 size: 676,
                 ref_c: 1,
                 id: 74,
                 data: []u32{len: 676}
             }
         }
         mut loop24 := 0
         loop_limit24 := (50) / 4 + 1
         for loop24 < loop_limit24 {
            for i := 0; i < array72.size; i++ {
                array72.data[i]--
            }
            for i := 0; i < array74.size; i++ {
                if array74.data[i] == 54 {
                    return array74
                }
            }
            loop24++
         }
         array74.ref_c--
         if array74.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params1.data[0] = array72
         params1.data[1] = array73
         mut array75 := func40(params1, loops_factor)
         array75.ref_c--
         if array75.ref_c == 0 {
         }
      }
      for i := 0; i < array72.size; i++ {
          if array72.data[i] == 23 {
              return array72
          }
      }
      loop22++
      array73.ref_c--
      if array73.ref_c == 0 {
      }
      array72.ref_c--
      if array72.ref_c == 0 {
      }
   }
   mut array76 := Array{}
   if p_counter > 0 {
       array76 = vars.data[p_counter-1]
       p_counter--
       array76.ref_c++
   } else {
       array76 = Array{
           size: 509,
           ref_c: 1,
           id: 76,
           data: []u32{len: 509}
       }
   }
   return array76
}
