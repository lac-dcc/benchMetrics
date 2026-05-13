package main

func31 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array28: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array28 = vars.data[pCounter];
       array28.refC += 1;
   } else {
       array28 = new(Array);
       array28.size = 676;
       array28.refC = 1;
       array28.id = 28;
       array28.data = make([]u32, array28.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array28;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array29 := func35(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array32: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array32 = vars.data[pCounter];
          array32.refC += 1;
      } else {
          array32 = new(Array);
          array32.size = 378;
          array32.refC = 1;
          array32.id = 32;
          array32.data = make([]u32, array32.size);
      }
      loop11: int = 0
      loopLimit11 :: (50)/4 + 1;
      for loop11 < loopLimit11 {
         for i in 0..<array32.size { 
             array32.data[i] -= 1;
         }
         for i in 0..<array28.size {
             if array28.data[i] == 97 {
                 return array28;
             }
         }
         loop11 += 1;
      }
      array32.refC -= 1;
      if array32.refC == 0 {
          delete(array32.data);
          free(array32);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array28;
      params1_data[1] = array29;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array33 := func40(&params1);
      defer delete(params1.data);
      array33.refC -= 1;
      if array33.refC == 0 {
          delete(array33.data);
          free(array33);
      }
   }
   array29.refC -= 1;
   if array29.refC == 0 {
       delete(array29.data);
       free(array29);
   }
   return array28;
}

