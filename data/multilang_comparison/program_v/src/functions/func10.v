module functions

import os
import rand

pub fn func10(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array4 := func11(params0, get_path(), loops_factor)
      array4.ref_c--
      if array4.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array65 := func12(params0, get_path(), loops_factor)
      array65.ref_c--
      if array65.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array101 := func13(params0, get_path(), loops_factor)
   return array101
}
