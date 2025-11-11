module functions

import os
import rand

pub fn func0(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array1 := Array{}
   if p_counter > 0 {
       array1 = vars.data[p_counter-1]
       p_counter--
       array1.ref_c++
   } else {
       array1 = Array{
           size: 782,
           ref_c: 1,
           id: 1,
           data: []u32{len: 782}
       }
   }
   mut loop1 := 0
   loop_limit1 := (50) / 2 + 1
   for loop1 < loop_limit1 {
      if (path0 & 1) != 0 {
         mut array2 := Array{}
         if p_counter > 0 {
             array2 = vars.data[p_counter-1]
             p_counter--
             array2.ref_c++
         } else {
             array2 = Array{
                 size: 281,
                 ref_c: 1,
                 id: 2,
                 data: []u32{len: 281}
             }
         }
         mut loop2 := 0
         loop_limit2 := (50) / 3 + 1
         for loop2 < loop_limit2 {
            for i := 0; i < array1.size; i++ {
                array1.data[i]--
            }
            for i := 0; i < array2.size; i++ {
                if array2.data[i] == 95 {
                    return array2
                }
            }
            loop2++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array1
         params0.data[1] = array2
         mut array3 := func10(params0, get_path(), loops_factor)
         array3.ref_c--
         if array3.ref_c == 0 {
         }
         array2.ref_c--
         if array2.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array1
         mut array109 := func4(params0, get_path(), loops_factor)
         array109.ref_c--
         if array109.ref_c == 0 {
         }
      }
      mut array119 := Array{}
      if p_counter > 0 {
          array119 = vars.data[p_counter-1]
          p_counter--
          array119.ref_c++
      } else {
          array119 = Array{
              size: 814,
              ref_c: 1,
              id: 119,
              data: []u32{len: 814}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array1
      params0.data[1] = array119
      mut array120 := func5(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array123 := Array{}
         if p_counter > 0 {
             array123 = vars.data[p_counter-1]
             p_counter--
             array123.ref_c++
         } else {
             array123 = Array{
                 size: 799,
                 ref_c: 1,
                 id: 123,
                 data: []u32{len: 799}
             }
         }
         mut loop37 := 0
         loop_limit37 := (50) / 3 + 1
         for loop37 < loop_limit37 {
            for i := 0; i < array123.size; i++ {
                array123.data[i]--
            }
            for i := 0; i < array123.size; i++ {
                if array123.data[i] == 83 {
                    return array123
                }
            }
            loop37++
         }
         mut params1 := ArrayParam{
             size: 4,
             data: []functions.Array{len: 4}
         }
         params1.data[0] = array1
         params1.data[1] = array119
         params1.data[2] = array120
         params1.data[3] = array123
         mut array124 := func18(params1, get_path(), loops_factor)
         array124.ref_c--
         if array124.ref_c == 0 {
         }
         array123.ref_c--
         if array123.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array1
         params1.data[1] = array119
         params1.data[2] = array120
         mut array146 := func14(params1, get_path(), loops_factor)
         array146.ref_c--
         if array146.ref_c == 0 {
         }
      }
      for i := 0; i < array120.size; i++ {
          if array120.data[i] == 92 {
              return array120
          }
      }
      loop1++
      array120.ref_c--
      if array120.ref_c == 0 {
      }
      array119.ref_c--
      if array119.ref_c == 0 {
      }
   }
   return array1
}
