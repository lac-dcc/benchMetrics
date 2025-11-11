module functions

import os
import rand

pub fn func42(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array18 := func43(params0, loops_factor)
      array18.ref_c--
      if array18.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array20 := func44(params0, loops_factor)
      array20.ref_c--
      if array20.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array22 := func45(params0, loops_factor)
   return array22
}
