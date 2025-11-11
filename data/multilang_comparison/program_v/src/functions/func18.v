module functions

import os
import rand

pub fn func18(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array125 := func19(params0, get_path(), loops_factor)
      array125.ref_c--
      if array125.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array135 := func20(params0, get_path(), loops_factor)
      array135.ref_c--
      if array135.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array140 := func21(params0, get_path(), loops_factor)
   return array140
}
