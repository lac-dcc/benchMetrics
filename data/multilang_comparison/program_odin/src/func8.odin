package main

func8 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array170: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array170 = vars.data[pCounter];
          array170.refC += 1;
      } else {
          array170 = new(Array);
          array170.size = 261;
          array170.refC = 1;
          array170.id = 170;
          array170.data = make([]u32, array170.size);
      }
      loop50: int = 0
      loopLimit50 :: (50)/2 + 1;
      for loop50 < loopLimit50 {
         for i in 0..<array170.size { 
             array170.data[i] -= 1;
         }
         for i in 0..<array170.size {
             if array170.data[i] == 17 {
                 return array170;
             }
         }
         loop50 += 1;
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array170;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array171 := func18(&params0, get_path());
      defer delete(params0.data);
      array171.refC -= 1;
      if array171.refC == 0 {
          delete(array171.data);
          free(array171);
      }
      array170.refC -= 1;
      if array170.refC == 0 {
          delete(array170.data);
          free(array170);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array172 := func14(&params0, get_path());
      defer delete(params0.data);
      array172.refC -= 1;
      if array172.refC == 0 {
          delete(array172.data);
          free(array172);
      }
   }
    array173: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array173 = vars.data[pCounter];
       array173.refC += 1;
   } else {
       array173 = new(Array);
       array173.size = 190;
       array173.refC = 1;
       array173.id = 173;
       array173.data = make([]u32, array173.size);
   }
   return array173;
}

