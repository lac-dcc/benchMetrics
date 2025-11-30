package main

func1 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array193: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array193 = vars.data[pCounter];
       array193.refC += 1;
   } else {
       array193 = new(Array);
       array193.size = 606;
       array193.refC = 1;
       array193.id = 193;
       array193.data = make([]u32, array193.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array193;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array194 := func3(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array197: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array197 = vars.data[pCounter];
          array197.refC += 1;
      } else {
          array197 = new(Array);
          array197.size = 458;
          array197.refC = 1;
          array197.id = 197;
          array197.data = make([]u32, array197.size);
      }
      loop57: int = 0
      loopLimit57 :: (50)/2 + 1;
      for loop57 < loopLimit57 {
         for i in 0..<array197.size { 
             array197.data[i] -= 1;
         }
         for i in 0..<array197.size {
             if array197.data[i] == 89 {
                 return array197;
             }
         }
         loop57 += 1;
      }
      params1_data := make([]^Array, 3);
      params1_data[0] = array193;
      params1_data[1] = array194;
      params1_data[2] = array197;
      params1 := ArrayParam{
          data = params1_data,
          size = 3,
      };
      array198 := func10(&params1, get_path());
      defer delete(params1.data);
      array198.refC -= 1;
      if array198.refC == 0 {
          delete(array198.data);
          free(array198);
      }
      array197.refC -= 1;
      if array197.refC == 0 {
          delete(array197.data);
          free(array197);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array193;
      params1_data[1] = array194;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array199 := func4(&params1, get_path());
      defer delete(params1.data);
      array199.refC -= 1;
      if array199.refC == 0 {
          delete(array199.data);
          free(array199);
      }
   }
   array194.refC -= 1;
   if array194.refC == 0 {
       delete(array194.data);
       free(array194);
   }
   return array193;
}

