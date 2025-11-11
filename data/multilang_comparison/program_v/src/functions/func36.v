module functions

import os
import rand

pub fn func36(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array49 := func37(params0, loops_factor)
      array49.ref_c--
      if array49.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array51 := func38(params0, get_path(), loops_factor)
      array51.ref_c--
      if array51.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array55 := func39(params0, loops_factor)
   return array55
}
