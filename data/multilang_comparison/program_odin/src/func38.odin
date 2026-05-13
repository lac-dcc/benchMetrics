package main

func38 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array52: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array52 = vars.data[pCounter];
          array52.refC += 1;
      } else {
          array52 = new(Array);
          array52.size = 841;
          array52.refC = 1;
          array52.id = 52;
          array52.data = make([]u32, array52.size);
      }
      loop18: int = 0
      loopLimit18 :: (50)/4 + 1;
      for loop18 < loopLimit18 {
         for i in 0..<array52.size { 
             array52.data[i] -= 1;
         }
         for i in 0..<array52.size {
             if array52.data[i] == 0 {
                 return array52;
             }
         }
         loop18 += 1;
      }
      array52.refC -= 1;
      if array52.refC == 0 {
          delete(array52.data);
          free(array52);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array53 := func40(&params0);
      defer delete(params0.data);
      array53.refC -= 1;
      if array53.refC == 0 {
          delete(array53.data);
          free(array53);
      }
   }
    array54: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array54 = vars.data[pCounter];
       array54.refC += 1;
   } else {
       array54 = new(Array);
       array54.size = 124;
       array54.refC = 1;
       array54.id = 54;
       array54.data = make([]u32, array54.size);
   }
   return array54;
}

