package main

func30 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array16: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array16 = vars.data[pCounter];
          array16.refC += 1;
      } else {
          array16 = new(Array);
          array16.size = 956;
          array16.refC = 1;
          array16.id = 16;
          array16.data = make([]u32, array16.size);
      }
      loop8: int = 0
      loopLimit8 :: (50)/4 + 1;
      for loop8 < loopLimit8 {
         for i in 0..<array16.size { 
             array16.data[i] -= 1;
         }
         for i in 0..<array16.size {
             if array16.data[i] == 70 {
                 return array16;
             }
         }
         loop8 += 1;
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array16;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array17 := func42(&params0, get_path());
      defer delete(params0.data);
      array17.refC -= 1;
      if array17.refC == 0 {
          delete(array17.data);
          free(array17);
      }
      array16.refC -= 1;
      if array16.refC == 0 {
          delete(array16.data);
          free(array16);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array24 := func34(&params0);
      defer delete(params0.data);
      array24.refC -= 1;
      if array24.refC == 0 {
          delete(array24.data);
          free(array24);
      }
   }
    array26: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array26 = vars.data[pCounter];
       array26.refC += 1;
   } else {
       array26 = new(Array);
       array26.size = 651;
       array26.refC = 1;
       array26.id = 26;
       array26.data = make([]u32, array26.size);
   }
   return array26;
}

