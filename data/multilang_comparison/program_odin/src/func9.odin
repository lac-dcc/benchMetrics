package main

func9 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array175: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array175 = vars.data[pCounter];
       array175.refC += 1;
   } else {
       array175 = new(Array);
       array175.size = 234;
       array175.refC = 1;
       array175.id = 175;
       array175.data = make([]u32, array175.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array175;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array176 := func15(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array179: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array179 = vars.data[pCounter];
          array179.refC += 1;
      } else {
          array179 = new(Array);
          array179.size = 100;
          array179.refC = 1;
          array179.id = 179;
          array179.data = make([]u32, array179.size);
      }
      loop52: int = 0
      loopLimit52 :: (50)/2 + 1;
      for loop52 < loopLimit52 {
         for i in 0..<array175.size { 
             array175.data[i] -= 1;
         }
         for i in 0..<array175.size {
             if array175.data[i] == 94 {
                 return array175;
             }
         }
         loop52 += 1;
      }
      params1_data := make([]^Array, 3);
      params1_data[0] = array175;
      params1_data[1] = array176;
      params1_data[2] = array179;
      params1 := ArrayParam{
          data = params1_data,
          size = 3,
      };
      array180 := func24(&params1, get_path());
      defer delete(params1.data);
      array180.refC -= 1;
      if array180.refC == 0 {
          delete(array180.data);
          free(array180);
      }
      array179.refC -= 1;
      if array179.refC == 0 {
          delete(array179.data);
          free(array179);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array175;
      params1_data[1] = array176;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array181 := func16(&params1, get_path());
      defer delete(params1.data);
      array181.refC -= 1;
      if array181.refC == 0 {
          delete(array181.data);
          free(array181);
      }
   }
   array176.refC -= 1;
   if array176.refC == 0 {
       delete(array176.data);
       free(array176);
   }
   return array175;
}

