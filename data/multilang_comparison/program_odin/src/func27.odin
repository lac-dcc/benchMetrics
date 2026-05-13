package main

func27 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array83: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array83 = vars.data[pCounter];
       array83.refC += 1;
   } else {
       array83 = new(Array);
       array83.size = 730;
       array83.refC = 1;
       array83.id = 83;
       array83.data = make([]u32, array83.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array83;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array84 := func33(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array87: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array87 = vars.data[pCounter];
          array87.refC += 1;
      } else {
          array87 = new(Array);
          array87.size = 282;
          array87.refC = 1;
          array87.id = 87;
          array87.data = make([]u32, array87.size);
      }
      loop27: int = 0
      loopLimit27 :: (50)/3 + 1;
      for loop27 < loopLimit27 {
         for i in 0..<array87.size { 
             array87.data[i] -= 1;
         }
         for i in 0..<array87.size {
             if array87.data[i] == 37 {
                 return array87;
             }
         }
         loop27 += 1;
      }
      params1_data := make([]^Array, 3);
      params1_data[0] = array83;
      params1_data[1] = array84;
      params1_data[2] = array87;
      params1 := ArrayParam{
          data = params1_data,
          size = 3,
      };
      array88 := func42(&params1, get_path());
      defer delete(params1.data);
      array88.refC -= 1;
      if array88.refC == 0 {
          delete(array88.data);
          free(array88);
      }
      array87.refC -= 1;
      if array87.refC == 0 {
          delete(array87.data);
          free(array87);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array83;
      params1_data[1] = array84;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array89 := func34(&params1);
      defer delete(params1.data);
      array89.refC -= 1;
      if array89.refC == 0 {
          delete(array89.data);
          free(array89);
      }
   }
   array84.refC -= 1;
   if array84.refC == 0 {
       delete(array84.data);
       free(array84);
   }
   return array83;
}

