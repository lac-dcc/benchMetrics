package main

func36 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array49 := func37(&params0);
      defer delete(params0.data);
      array49.refC -= 1;
      if array49.refC == 0 {
          delete(array49.data);
          free(array49);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array51 := func38(&params0, get_path());
      defer delete(params0.data);
      array51.refC -= 1;
      if array51.refC == 0 {
          delete(array51.data);
          free(array51);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array55 := func39(&params0);
   defer delete(params0.data);
   return array55;
}

