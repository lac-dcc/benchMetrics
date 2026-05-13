package main

func28 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array7 := func29(&params0, get_path());
      defer delete(params0.data);
      array7.refC -= 1;
      if array7.refC == 0 {
          delete(array7.data);
          free(array7);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array15 := func30(&params0, get_path());
      defer delete(params0.data);
      array15.refC -= 1;
      if array15.refC == 0 {
          delete(array15.data);
          free(array15);
      }
   }
   params0_data := make([]^Array, 0);
   params0 := ArrayParam{
       data = params0_data,
       size = 0,
   };
   array27 := func31(&params0, get_path());
   defer delete(params0.data);
   return array27;
}

