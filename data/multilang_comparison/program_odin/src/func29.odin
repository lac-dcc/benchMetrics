package main

func29 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   loop5: int = 0
   loopLimit5 :: (50)/4 + 1;
   for loop5 < loopLimit5 {
      if (path0 & 1) != 0 {
          array8: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array8 = vars.data[pCounter];
             array8.refC += 1;
         } else {
             array8 = new(Array);
             array8.size = 862;
             array8.refC = 1;
             array8.id = 8;
             array8.data = make([]u32, array8.size);
         }
         loop6: int = 0
         loopLimit6 :: (50)/5 + 1;
         for loop6 < loopLimit6 {
            for i in 0..<array8.size { 
                array8.data[i] -= 1;
            }
            for i in 0..<array8.size {
                if array8.data[i] == 35 {
                    return array8;
                }
            }
            loop6 += 1;
         }
         array8.refC -= 1;
         if array8.refC == 0 {
             delete(array8.data);
             free(array8);
         }
      
      } else {
         params0_data := make([]^Array, 0);
         params0 := ArrayParam{
             data = params0_data,
             size = 0,
         };
         array9 := func40(&params0);
         defer delete(params0.data);
         array9.refC -= 1;
         if array9.refC == 0 {
             delete(array9.data);
             free(array9);
         }
      }
       array11: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array11 = vars.data[pCounter];
          array11.refC += 1;
      } else {
          array11 = new(Array);
          array11.size = 11;
          array11.refC = 1;
          array11.id = 11;
          array11.data = make([]u32, array11.size);
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array11;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array12 := func41(&params0);
      defer delete(params0.data);
      for i in 0..<array11.size {
          if array11.data[i] == 15 {
              return array11;
          }
      }
      array12.refC -= 1;
      if array12.refC == 0 {
          delete(array12.data);
          free(array12);
      }
      array11.refC -= 1;
      if array11.refC == 0 {
          delete(array11.data);
          free(array11);
      }
      loop5 += 1;
   }
    array14: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array14 = vars.data[pCounter];
       array14.refC += 1;
   } else {
       array14 = new(Array);
       array14.size = 370;
       array14.refC = 1;
       array14.id = 14;
       array14.data = make([]u32, array14.size);
   }
   return array14;
}

