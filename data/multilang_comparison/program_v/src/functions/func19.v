module functions

import os
import rand

pub fn func19(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop38 := 0
   loop_limit38 := (50) / 3 + 1
   for loop38 < loop_limit38 {
      if (path0 & 1) != 0 {
         mut array126 := Array{}
         if p_counter > 0 {
             array126 = vars.data[p_counter-1]
             p_counter--
             array126.ref_c++
         } else {
             array126 = Array{
                 size: 258,
                 ref_c: 1,
                 id: 126,
                 data: []u32{len: 258}
             }
         }
         mut loop39 := 0
         loop_limit39 := (50) / 4 + 1
         for loop39 < loop_limit39 {
            for i := 0; i < array126.size; i++ {
                array126.data[i]--
            }
            for i := 0; i < array126.size; i++ {
                if array126.data[i] == 82 {
                    return array126
                }
            }
            loop39++
         }
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array126
         mut array127 := func36(params0, get_path(), loops_factor)
         array127.ref_c--
         if array127.ref_c == 0 {
         }
         array126.ref_c--
         if array126.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 0,
             data: []functions.Array{len: 0}
         }
         mut array128 := func32(params0, get_path(), loops_factor)
         array128.ref_c--
         if array128.ref_c == 0 {
         }
      }
      mut array129 := Array{}
      if p_counter > 0 {
          array129 = vars.data[p_counter-1]
          p_counter--
          array129.ref_c++
      } else {
          array129 = Array{
              size: 721,
              ref_c: 1,
              id: 129,
              data: []u32{len: 721}
          }
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array129
      mut array130 := func33(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array131 := Array{}
         if p_counter > 0 {
             array131 = vars.data[p_counter-1]
             p_counter--
             array131.ref_c++
         } else {
             array131 = Array{
                 size: 834,
                 ref_c: 1,
                 id: 131,
                 data: []u32{len: 834}
             }
         }
         mut loop40 := 0
         loop_limit40 := (50) / 4 + 1
         for loop40 < loop_limit40 {
            for i := 0; i < array130.size; i++ {
                array130.data[i]--
            }
            for i := 0; i < array131.size; i++ {
                if array131.data[i] == 84 {
                    return array131
                }
            }
            loop40++
         }
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array129
         params1.data[1] = array130
         params1.data[2] = array131
         mut array132 := func42(params1, get_path(), loops_factor)
         array132.ref_c--
         if array132.ref_c == 0 {
         }
         array131.ref_c--
         if array131.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params1.data[0] = array129
         params1.data[1] = array130
         mut array133 := func34(params1, loops_factor)
         array133.ref_c--
         if array133.ref_c == 0 {
         }
      }
      for i := 0; i < array129.size; i++ {
          if array129.data[i] == 46 {
              return array129
          }
      }
      loop38++
      array130.ref_c--
      if array130.ref_c == 0 {
      }
      array129.ref_c--
      if array129.ref_c == 0 {
      }
   }
   mut array134 := Array{}
   if p_counter > 0 {
       array134 = vars.data[p_counter-1]
       p_counter--
       array134.ref_c++
   } else {
       array134 = Array{
           size: 876,
           ref_c: 1,
           id: 134,
           data: []u32{len: 876}
       }
   }
   return array134
}
