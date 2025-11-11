module functions

import os
import rand

pub fn func6(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array159 := func7(params0, get_path(), loops_factor)
      array159.ref_c--
      if array159.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array169 := func8(params0, get_path(), loops_factor)
      array169.ref_c--
      if array169.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array174 := func9(params0, get_path(), loops_factor)
   return array174
}
