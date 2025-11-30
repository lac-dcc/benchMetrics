package main

func24 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array68 := func25(&params0, get_path());
      defer delete(params0.data);
      array68.refC -= 1;
      if array68.refC == 0 {
          delete(array68.data);
          free(array68);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array77 := func26(&params0, get_path());
      defer delete(params0.data);
      array77.refC -= 1;
      if array77.refC == 0 {
          delete(array77.data);
          free(array77);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array82 := func27(&params0, get_path());
   defer delete(params0.data);
   return array82;
}

