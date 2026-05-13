package main

func10 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array4 := func11(&params0, get_path());
      defer delete(params0.data);
      array4.refC -= 1;
      if array4.refC == 0 {
          delete(array4.data);
          free(array4);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array65 := func12(&params0, get_path());
      defer delete(params0.data);
      array65.refC -= 1;
      if array65.refC == 0 {
          delete(array65.data);
          free(array65);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array101 := func13(&params0, get_path());
   defer delete(params0.data);
   return array101;
}

