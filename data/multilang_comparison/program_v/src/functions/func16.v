module functions

import os
import rand

pub fn func16(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array91 := Array{}
   if p_counter > 0 {
       array91 = vars.data[p_counter-1]
       p_counter--
       array91.ref_c++
   } else {
       array91 = Array{
           size: 908,
           ref_c: 1,
           id: 91,
           data: []u32{len: 908}
       }
   }
   mut loop28 := 0
   loop_limit28 := (50) / 3 + 1
   for loop28 < loop_limit28 {
      if (path0 & 1) != 0 {
         mut array92 := Array{}
         if p_counter > 0 {
             array92 = vars.data[p_counter-1]
             p_counter--
             array92.ref_c++
         } else {
             array92 = Array{
                 size: 26,
                 ref_c: 1,
                 id: 92,
                 data: []u32{len: 26}
             }
         }
         mut loop29 := 0
         loop_limit29 := (50) / 4 + 1
         for loop29 < loop_limit29 {
            for i := 0; i < array91.size; i++ {
                array91.data[i]--
            }
            for i := 0; i < array91.size; i++ {
                if array91.data[i] == 89 {
                    return array91
                }
            }
            loop29++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array91
         params0.data[1] = array92
         mut array93 := func36(params0, get_path(), loops_factor)
         array93.ref_c--
         if array93.ref_c == 0 {
         }
         array92.ref_c--
         if array92.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array91
         mut array94 := func32(params0, get_path(), loops_factor)
         array94.ref_c--
         if array94.ref_c == 0 {
         }
      }
      mut array95 := Array{}
      if p_counter > 0 {
          array95 = vars.data[p_counter-1]
          p_counter--
          array95.ref_c++
      } else {
          array95 = Array{
              size: 396,
              ref_c: 1,
              id: 95,
              data: []u32{len: 396}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array91
      params0.data[1] = array95
      mut array96 := func33(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array97 := Array{}
         if p_counter > 0 {
             array97 = vars.data[p_counter-1]
             p_counter--
             array97.ref_c++
         } else {
             array97 = Array{
                 size: 896,
                 ref_c: 1,
                 id: 97,
                 data: []u32{len: 896}
             }
         }
         mut loop30 := 0
         loop_limit30 := (50) / 4 + 1
         for loop30 < loop_limit30 {
            for i := 0; i < array97.size; i++ {
                array97.data[i]--
            }
            for i := 0; i < array91.size; i++ {
                if array91.data[i] == 98 {
                    return array91
                }
            }
            loop30++
         }
         mut params1 := ArrayParam{
             size: 4,
             data: []functions.Array{len: 4}
         }
         params1.data[0] = array91
         params1.data[1] = array95
         params1.data[2] = array96
         params1.data[3] = array97
         mut array98 := func42(params1, get_path(), loops_factor)
         array98.ref_c--
         if array98.ref_c == 0 {
         }
         array97.ref_c--
         if array97.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array91
         params1.data[1] = array95
         params1.data[2] = array96
         mut array99 := func34(params1, loops_factor)
         array99.ref_c--
         if array99.ref_c == 0 {
         }
      }
      for i := 0; i < array95.size; i++ {
          if array95.data[i] == 26 {
              return array95
          }
      }
      loop28++
      array96.ref_c--
      if array96.ref_c == 0 {
      }
      array95.ref_c--
      if array95.ref_c == 0 {
      }
   }
   for i := 0; i < array91.size; i++ {
       array91.data[i]--
   }
   for i := 0; i < array91.size; i++ {
       if array91.data[i] == 68 {
           return array91
       }
   }
   return array91
}
