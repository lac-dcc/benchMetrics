module functions

import os
import rand

pub fn func11(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop3 := 0
   loop_limit3 := (50) / 3 + 1
   for loop3 < loop_limit3 {
      if (path0 & 1) != 0 {
         mut array5 := Array{}
         if p_counter > 0 {
             array5 = vars.data[p_counter-1]
             p_counter--
             array5.ref_c++
         } else {
             array5 = Array{
                 size: 555,
                 ref_c: 1,
                 id: 5,
                 data: []u32{len: 555}
             }
         }
         mut loop4 := 0
         loop_limit4 := (50) / 4 + 1
         for loop4 < loop_limit4 {
            for i := 0; i < array5.size; i++ {
                array5.data[i]--
            }
            for i := 0; i < array5.size; i++ {
                if array5.data[i] == 76 {
                    return array5
                }
            }
            loop4++
         }
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array5
         mut array6 := func28(params0, get_path(), loops_factor)
         array6.ref_c--
         if array6.ref_c == 0 {
         }
         array5.ref_c--
         if array5.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 0,
             data: []functions.Array{len: 0}
         }
         mut array34 := func22(params0, get_path(), loops_factor)
         array34.ref_c--
         if array34.ref_c == 0 {
         }
      }
      mut array43 := Array{}
      if p_counter > 0 {
          array43 = vars.data[p_counter-1]
          p_counter--
          array43.ref_c++
      } else {
          array43 = Array{
              size: 381,
              ref_c: 1,
              id: 43,
              data: []u32{len: 381}
          }
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array43
      mut array44 := func23(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array47 := Array{}
         if p_counter > 0 {
             array47 = vars.data[p_counter-1]
             p_counter--
             array47.ref_c++
         } else {
             array47 = Array{
                 size: 811,
                 ref_c: 1,
                 id: 47,
                 data: []u32{len: 811}
             }
         }
         mut loop16 := 0
         loop_limit16 := (50) / 4 + 1
         for loop16 < loop_limit16 {
            for i := 0; i < array47.size; i++ {
                array47.data[i]--
            }
            for i := 0; i < array47.size; i++ {
                if array47.data[i] == 90 {
                    return array47
                }
            }
            loop16++
         }
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array43
         params1.data[1] = array44
         params1.data[2] = array47
         mut array48 := func36(params1, get_path(), loops_factor)
         array48.ref_c--
         if array48.ref_c == 0 {
         }
         array47.ref_c--
         if array47.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params1.data[0] = array43
         params1.data[1] = array44
         mut array58 := func32(params1, get_path(), loops_factor)
         array58.ref_c--
         if array58.ref_c == 0 {
         }
      }
      for i := 0; i < array43.size; i++ {
          if array43.data[i] == 75 {
              return array43
          }
      }
      loop3++
      array44.ref_c--
      if array44.ref_c == 0 {
      }
      array43.ref_c--
      if array43.ref_c == 0 {
      }
   }
   mut array64 := Array{}
   if p_counter > 0 {
       array64 = vars.data[p_counter-1]
       p_counter--
       array64.ref_c++
   } else {
       array64 = Array{
           size: 510,
           ref_c: 1,
           id: 64,
           data: []u32{len: 510}
       }
   }
   return array64
}
