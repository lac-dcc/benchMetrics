module functions

import os
import rand

pub fn func28(vars ArrayParam, path0 u64, loops_factor int) Array {
   mut p_counter := vars.size
   if (path0 & 1) != 0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array7 := func29(params0, get_path(), loops_factor)
      array7.ref_c--
      if array7.ref_c == 0 {
      }
   } else {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array15 := func30(params0, get_path(), loops_factor)
      array15.ref_c--
      if array15.ref_c == 0 {
      }
   }
   mut params0 := ArrayParam{
       size: 0,
       data: []functions.Array{len: 0}
   }
   mut array27 := func31(params0, get_path(), loops_factor)
   return array27
}
