module functions

import os
import rand

pub fn func24(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array68 := func25(params0, get_path(), loops_factor)
      array68.ref_c--
      if array68.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array77 := func26(params0, get_path(), loops_factor)
      array77.ref_c--
      if array77.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array82 := func27(params0, get_path(), loops_factor)
   return array82
}
