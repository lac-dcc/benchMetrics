module functions

import os
import rand

pub fn func2(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   mut array183 := Array{}
   if p_counter > 0 {
       array183 = vars.data[p_counter-1]
       p_counter--
       array183.ref_c++
   } else {
       array183 = Array{
           size: 851,
           ref_c: 1,
           id: 183,
           data: []u32{len: 851}
       }
   }
   mut loop53 := 0
   loop_limit53 := (50) / 2 + 1
   for loop53 < loop_limit53 {
      if (path0 & 1) != 0 {
         mut array184 := Array{}
         if p_counter > 0 {
             array184 = vars.data[p_counter-1]
             p_counter--
             array184.ref_c++
         } else {
             array184 = Array{
                 size: 610,
                 ref_c: 1,
                 id: 184,
                 data: []u32{len: 610}
             }
         }
         mut loop54 := 0
         loop_limit54 := (50) / 3 + 1
         for loop54 < loop_limit54 {
            for i := 0; i < array183.size; i++ {
                array183.data[i]--
            }
            for i := 0; i < array184.size; i++ {
                if array184.data[i] == 98 {
                    return array184
                }
            }
            loop54++
         }
         mut params0 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params0.data[0] = array183
         params0.data[1] = array184
         mut array185 := func18(params0, get_path(), loops_factor)
         array185.ref_c--
         if array185.ref_c == 0 {
         }
         array184.ref_c--
         if array184.ref_c == 0 {
         }
      } else {
         mut params0 := ArrayParam{
             size: 1,
             data: []functions.Array{len: 1}
         }
         params0.data[0] = array183
         mut array186 := func14(params0, get_path(), loops_factor)
         array186.ref_c--
         if array186.ref_c == 0 {
         }
      }
      mut array187 := Array{}
      if p_counter > 0 {
          array187 = vars.data[p_counter-1]
          p_counter--
          array187.ref_c++
      } else {
          array187 = Array{
              size: 616,
              ref_c: 1,
              id: 187,
              data: []u32{len: 616}
          }
      }
      mut params0 := ArrayParam{
          size: 2,
          data: []functions.Array{len: 2}
      }
      params0.data[0] = array183
      params0.data[1] = array187
      mut array188 := func15(params0, loops_factor)
      if (path0 & 2) != 0 {
         mut array189 := Array{}
         if p_counter > 0 {
             array189 = vars.data[p_counter-1]
             p_counter--
             array189.ref_c++
         } else {
             array189 = Array{
                 size: 778,
                 ref_c: 1,
                 id: 189,
                 data: []u32{len: 778}
             }
         }
         mut loop55 := 0
         loop_limit55 := (50) / 3 + 1
         for loop55 < loop_limit55 {
            for i := 0; i < array187.size; i++ {
                array187.data[i]--
            }
            for i := 0; i < array187.size; i++ {
                if array187.data[i] == 8 {
                    return array187
                }
            }
            loop55++
         }
         mut params1 := ArrayParam{
             size: 4,
             data: []functions.Array{len: 4}
         }
         params1.data[0] = array183
         params1.data[1] = array187
         params1.data[2] = array188
         params1.data[3] = array189
         mut array190 := func24(params1, get_path(), loops_factor)
         array190.ref_c--
         if array190.ref_c == 0 {
         }
         array189.ref_c--
         if array189.ref_c == 0 {
         }
      } else {
         mut params1 := ArrayParam{
             size: 3,
             data: []functions.Array{len: 3}
         }
         params1.data[0] = array183
         params1.data[1] = array187
         params1.data[2] = array188
         mut array191 := func16(params1, get_path(), loops_factor)
         array191.ref_c--
         if array191.ref_c == 0 {
         }
      }
      for i := 0; i < array183.size; i++ {
          if array183.data[i] == 78 {
              return array183
          }
      }
      loop53++
      array188.ref_c--
      if array188.ref_c == 0 {
      }
      array187.ref_c--
      if array187.ref_c == 0 {
      }
   }
   for i := 0; i < array183.size; i++ {
       array183.data[i]--
   }
   for i := 0; i < array183.size; i++ {
       if array183.data[i] == 88 {
           return array183
       }
   }
   return array183
}
