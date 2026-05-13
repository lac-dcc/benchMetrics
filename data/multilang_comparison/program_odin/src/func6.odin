package main

func6 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array159 := func7(&params0, get_path());
      defer delete(params0.data);
      array159.refC -= 1;
      if array159.refC == 0 {
          delete(array159.data);
          free(array159);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array169 := func8(&params0, get_path());
      defer delete(params0.data);
      array169.refC -= 1;
      if array169.refC == 0 {
          delete(array169.data);
          free(array169);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array174 := func9(&params0, get_path());
   defer delete(params0.data);
   return array174;
}

