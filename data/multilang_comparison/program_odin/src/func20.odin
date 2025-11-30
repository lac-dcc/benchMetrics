package main

func20 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array136: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array136 = vars.data[pCounter];
          array136.refC += 1;
      } else {
          array136 = new(Array);
          array136.size = 498;
          array136.refC = 1;
          array136.id = 136;
          array136.data = make([]u32, array136.size);
      }
      loop41: int = 0
      loopLimit41 :: (50)/3 + 1;
      for loop41 < loopLimit41 {
         for i in 0..<array136.size { 
             array136.data[i] -= 1;
         }
         for i in 0..<array136.size {
             if array136.data[i] == 53 {
                 return array136;
             }
         }
         loop41 += 1;
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array136;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array137 := func28(&params0, get_path());
      defer delete(params0.data);
      array137.refC -= 1;
      if array137.refC == 0 {
          delete(array137.data);
          free(array137);
      }
      array136.refC -= 1;
      if array136.refC == 0 {
          delete(array136.data);
          free(array136);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array138 := func22(&params0, get_path());
      defer delete(params0.data);
      array138.refC -= 1;
      if array138.refC == 0 {
          delete(array138.data);
          free(array138);
      }
   }
    array139: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array139 = vars.data[pCounter];
       array139.refC += 1;
   } else {
       array139 = new(Array);
       array139.size = 648;
       array139.refC = 1;
       array139.id = 139;
       array139.data = make([]u32, array139.size);
   }
   return array139;
}

