module functions

import os
import rand

pub fn func7(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut loop47 := 0
   loop_limit47 := (50) / 2 + 1
   for loop47 < loop_limit47 {
      if (path0 & 1) != 0 {
         mut array160 := Array{}
         if p_counter > 0 {
             array160 = vars.data[p_counter-1]
             p_counter--
             array160.ref_c++
         } else {
             array160 = Array{
                 size: 986,
                 ref_c: 1,
                 id: 160,
                 data: []u32{len: 986}
             }
         }
         mut loop48 := 0
         loop_limit48 := (50) / 3 + 1
         for loop48 < loop_limit48 {
            for i := 0; i < array160.size; i++ {
                array160.data[i]--
            }
            for i := 0; i < array160.size; i++ {
                if array160.data[i] == 10 {
                    return array160
                }
            }
            loop48++
         }
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array160
         mut array161 := func24(params0, get_path(), loops_factor)
         array161.ref_c--
         if array161.ref_c == 0 {
         }
         array160.ref_c--
         if array160.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 0,
             data: []functions.Array{len: 0}
         }
         mut array162 := func16(params0, get_path(), loops_factor)
         array162.ref_c--
         if array162.ref_c == 0 {
         }
      }
      mut array163 := Array{}
      if p_counter > 0 {
          array163 = vars.data[p_counter-1]
          p_counter--
          array163.ref_c++
      } else {
          array163 = Array{
              size: 23,
              ref_c: 1,
              id: 163,
              data: []u32{len: 23}
          }
      }
      mut params0 := ArrayParam{
          size: 1,
          data: []functions.Array{len: 1}
      }
      params0.data[0] = array163
      mut array164 := func17(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array165 := Array{}
         if p_counter > 0 {
             array165 = vars.data[p_counter-1]
             p_counter--
             array165.ref_c++
         } else {
             array165 = Array{
                 size: 590,
                 ref_c: 1,
                 id: 165,
                 data: []u32{len: 590}
             }
         }
         mut loop49 := 0
         loop_limit49 := (50) / 3 + 1
         for loop49 < loop_limit49 {
            for i := 0; i < array164.size; i++ {
                array164.data[i]--
            }
            for i := 0; i < array165.size; i++ {
                if array165.data[i] == 93 {
                    return array165
                }
            }
            loop49++
         }
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array163
         params1.data[1] = array164
         params1.data[2] = array165
         mut array166 := func28(params1, get_path(), loops_factor)
         array166.ref_c--
         if array166.ref_c == 0 {
         }
         array165.ref_c--
         if array165.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params1.data[0] = array163
         params1.data[1] = array164
         mut array167 := func22(params1, get_path(), loops_factor)
         array167.ref_c--
         if array167.ref_c == 0 {
         }
      }
      for i := 0; i < array163.size; i++ {
          if array163.data[i] == 34 {
              return array163
          }
      }
      loop47++
      array164.ref_c--
      if array164.ref_c == 0 {
      }
      array163.ref_c--
      if array163.ref_c == 0 {
      }
   }
   mut array168 := Array{}
   if p_counter > 0 {
       array168 = vars.data[p_counter-1]
       p_counter--
       array168.ref_c++
   } else {
       array168 = Array{
           size: 347,
           ref_c: 1,
           id: 168,
           data: []u32{len: 347}
       }
   }
   return array168
}
