package main

func18 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array125 := func19(&params0, get_path());
      defer delete(params0.data);
      array125.refC -= 1;
      if array125.refC == 0 {
          delete(array125.data);
          free(array125);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array135 := func20(&params0, get_path());
      defer delete(params0.data);
      array135.refC -= 1;
      if array135.refC == 0 {
          delete(array135.data);
          free(array135);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array140 := func21(&params0, get_path());
   defer delete(params0.data);
   return array140;
}

