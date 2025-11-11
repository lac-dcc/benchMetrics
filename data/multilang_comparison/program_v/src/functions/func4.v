module functions

import os
import rand

pub fn func4(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array110 := Array{}
   if p_counter > 0 {
       array110 = vars.data[p_counter-1]
       p_counter--
       array110.ref_c++
   } else {
       array110 = Array{
           size: 321,
           ref_c: 1,
           id: 110,
           data: []u32{len: 321}
       }
   }
   mut loop33 := 0
   loop_limit33 := (50) / 3 + 1
   for loop33 < loop_limit33 {
      if (path0 & 1) != 0 {
         mut array111 := Array{}
         if p_counter > 0 {
             array111 = vars.data[p_counter-1]
             p_counter--
             array111.ref_c++
         } else {
             array111 = Array{
                 size: 751,
                 ref_c: 1,
                 id: 111,
                 data: []u32{len: 751}
             }
         }
         mut loop34 := 0
         loop_limit34 := (50) / 4 + 1
         for loop34 < loop_limit34 {
            for i := 0; i < array111.size; i++ {
                array111.data[i]--
            }
            for i := 0; i < array111.size; i++ {
                if array111.data[i] == 83 {
                    return array111
                }
            }
            loop34++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array110
         params0.data[1] = array111
         mut array112 := func24(params0, get_path(), loops_factor)
         array112.ref_c--
         if array112.ref_c == 0 {
         }
         array111.ref_c--
         if array111.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array110
         mut array113 := func16(params0, get_path(), loops_factor)
         array113.ref_c--
         if array113.ref_c == 0 {
         }
      }
      mut array114 := Array{}
      if p_counter > 0 {
          array114 = vars.data[p_counter-1]
          p_counter--
          array114.ref_c++
      } else {
          array114 = Array{
              size: 945,
              ref_c: 1,
              id: 114,
              data: []u32{len: 945}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array110
      params0.data[1] = array114
      mut array115 := func17(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array116 := Array{}
         if p_counter > 0 {
             array116 = vars.data[p_counter-1]
             p_counter--
             array116.ref_c++
         } else {
             array116 = Array{
                 size: 482,
                 ref_c: 1,
                 id: 116,
                 data: []u32{len: 482}
             }
         }
         mut loop35 := 0
         loop_limit35 := (50) / 4 + 1
         for loop35 < loop_limit35 {
            for i := 0; i < array110.size; i++ {
                array110.data[i]--
            }
            for i := 0; i < array114.size; i++ {
                if array114.data[i] == 3 {
                    return array114
                }
            }
            loop35++
         }
         mut params1 := ArrayParam{
             size: 4,
             data: []functions.Array{len: 4}
         }
         params1.data[0] = array110
         params1.data[1] = array114
         params1.data[2] = array115
         params1.data[3] = array116
         mut array117 := func28(params1, get_path(), loops_factor)
         array117.ref_c--
         if array117.ref_c == 0 {
         }
         array116.ref_c--
         if array116.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array110
         params1.data[1] = array114
         params1.data[2] = array115
         mut array118 := func22(params1, get_path(), loops_factor)
         array118.ref_c--
         if array118.ref_c == 0 {
         }
      }
      for i := 0; i < array110.size; i++ {
          if array110.data[i] == 25 {
              return array110
          }
      }
      loop33++
      array115.ref_c--
      if array115.ref_c == 0 {
      }
      array114.ref_c--
      if array114.ref_c == 0 {
      }
   }
   for i := 0; i < array110.size; i++ {
       array110.data[i]--
   }
   for i := 0; i < array110.size; i++ {
       if array110.data[i] == 21 {
           return array110
       }
   }
   return array110
}
