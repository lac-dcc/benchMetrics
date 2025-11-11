module functions

import os
import rand

pub fn func14(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array147 := Array{}
   if p_counter > 0 {
       array147 = vars.data[p_counter-1]
       p_counter--
       array147.ref_c++
   } else {
       array147 = Array{
           size: 84,
           ref_c: 1,
           id: 147,
           data: []u32{len: 84}
       }
   }
   mut loop43 := 0
   loop_limit43 := (50) / 3 + 1
   for loop43 < loop_limit43 {
      if (path0 & 1) != 0 {
         mut array148 := Array{}
         if p_counter > 0 {
             array148 = vars.data[p_counter-1]
             p_counter--
             array148.ref_c++
         } else {
             array148 = Array{
                 size: 445,
                 ref_c: 1,
                 id: 148,
                 data: []u32{len: 445}
             }
         }
         mut loop44 := 0
         loop_limit44 := (50) / 4 + 1
         for loop44 < loop_limit44 {
            for i := 0; i < array147.size; i++ {
                array147.data[i]--
            }
            for i := 0; i < array148.size; i++ {
                if array148.data[i] == 0 {
                    return array148
                }
            }
            loop44++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array147
         params0.data[1] = array148
         mut array149 := func28(params0, get_path(), loops_factor)
         array149.ref_c--
         if array149.ref_c == 0 {
         }
         array148.ref_c--
         if array148.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array147
         mut array150 := func22(params0, get_path(), loops_factor)
         array150.ref_c--
         if array150.ref_c == 0 {
         }
      }
      mut array151 := Array{}
      if p_counter > 0 {
          array151 = vars.data[p_counter-1]
          p_counter--
          array151.ref_c++
      } else {
          array151 = Array{
              size: 428,
              ref_c: 1,
              id: 151,
              data: []u32{len: 428}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array147
      params0.data[1] = array151
      mut array152 := func23(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array153 := Array{}
         if p_counter > 0 {
             array153 = vars.data[p_counter-1]
             p_counter--
             array153.ref_c++
         } else {
             array153 = Array{
                 size: 224,
                 ref_c: 1,
                 id: 153,
                 data: []u32{len: 224}
             }
         }
         mut loop45 := 0
         loop_limit45 := (50) / 4 + 1
         for loop45 < loop_limit45 {
            for i := 0; i < array151.size; i++ {
                array151.data[i]--
            }
            for i := 0; i < array147.size; i++ {
                if array147.data[i] == 88 {
                    return array147
                }
            }
            loop45++
         }
         mut params1 := ArrayParam{
             size: 4,
             data: []functions.Array{len: 4}
         }
         params1.data[0] = array147
         params1.data[1] = array151
         params1.data[2] = array152
         params1.data[3] = array153
         mut array154 := func36(params1, get_path(), loops_factor)
         array154.ref_c--
         if array154.ref_c == 0 {
         }
         array153.ref_c--
         if array153.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array147
         params1.data[1] = array151
         params1.data[2] = array152
         mut array155 := func32(params1, get_path(), loops_factor)
         array155.ref_c--
         if array155.ref_c == 0 {
         }
      }
      for i := 0; i < array151.size; i++ {
          if array151.data[i] == 0 {
              return array151
          }
      }
      loop43++
      array152.ref_c--
      if array152.ref_c == 0 {
      }
      array151.ref_c--
      if array151.ref_c == 0 {
      }
   }
   for i := 0; i < array147.size; i++ {
       array147.data[i]--
   }
   for i := 0; i < array147.size; i++ {
       if array147.data[i] == 39 {
           return array147
       }
   }
   return array147
}
