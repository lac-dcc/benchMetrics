module functions

import os
import rand

pub fn func22(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array35 := Array{}
   if p_counter > 0 {
       array35 = vars.data[p_counter-1]
       p_counter--
       array35.ref_c++
   } else {
       array35 = Array{
           size: 95,
           ref_c: 1,
           id: 35,
           data: []u32{len: 95}
       }
   }
   mut loop12 := 0
   loop_limit12 := (50) / 4 + 1
   for loop12 < loop_limit12 {
      if (path0 & 1) != 0 {
         mut array36 := Array{}
         if p_counter > 0 {
             array36 = vars.data[p_counter-1]
             p_counter--
             array36.ref_c++
         } else {
             array36 = Array{
                 size: 287,
                 ref_c: 1,
                 id: 36,
                 data: []u32{len: 287}
             }
         }
         mut loop13 := 0
         loop_limit13 := (50) / 5 + 1
         for loop13 < loop_limit13 {
            for i := 0; i < array36.size; i++ {
                array36.data[i]--
            }
            for i := 0; i < array35.size; i++ {
                if array35.data[i] == 92 {
                    return array35
                }
            }
            loop13++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array35
         params0.data[1] = array36
         mut array37 := func42(params0, get_path(), loops_factor)
         array37.ref_c--
         if array37.ref_c == 0 {
         }
         array36.ref_c--
         if array36.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array35
         mut array38 := func34(params0, loops_factor)
         array38.ref_c--
         if array38.ref_c == 0 {
         }
      }
      mut array39 := Array{}
      if p_counter > 0 {
          array39 = vars.data[p_counter-1]
          p_counter--
          array39.ref_c++
      } else {
          array39 = Array{
              size: 89,
              ref_c: 1,
              id: 39,
              data: []u32{len: 89}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array35
      params0.data[1] = array39
      mut array40 := func35(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array41 := Array{}
         if p_counter > 0 {
             array41 = vars.data[p_counter-1]
             p_counter--
             array41.ref_c++
         } else {
             array41 = Array{
                 size: 645,
                 ref_c: 1,
                 id: 41,
                 data: []u32{len: 645}
             }
         }
         mut loop14 := 0
         loop_limit14 := (50) / 5 + 1
         for loop14 < loop_limit14 {
            for i := 0; i < array39.size; i++ {
                array39.data[i]--
            }
            for i := 0; i < array41.size; i++ {
                if array41.data[i] == 0 {
                    return array41
                }
            }
            loop14++
         }
         array41.ref_c--
         if array41.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array35
         params1.data[1] = array39
         params1.data[2] = array40
         mut array42 := func40(params1, loops_factor)
         array42.ref_c--
         if array42.ref_c == 0 {
         }
      }
      for i := 0; i < array40.size; i++ {
          if array40.data[i] == 94 {
              return array40
          }
      }
      loop12++
      array40.ref_c--
      if array40.ref_c == 0 {
      }
      array39.ref_c--
      if array39.ref_c == 0 {
      }
   }
   for i := 0; i < array35.size; i++ {
       array35.data[i]--
   }
   for i := 0; i < array35.size; i++ {
       if array35.data[i] == 32 {
           return array35
       }
   }
   return array35
}
