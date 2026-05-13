package main

func42 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array18 := func43(&params0);
      defer delete(params0.data);
      array18.refC -= 1;
      if array18.refC == 0 {
          delete(array18.data);
          free(array18);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array20 := func44(&params0);
      defer delete(params0.data);
      array20.refC -= 1;
      if array20.refC == 0 {
          delete(array20.data);
          free(array20);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array22 := func45(&params0);
   defer delete(params0.data);
   return array22;
}

