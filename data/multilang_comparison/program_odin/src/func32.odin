package main

func32 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array59: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array59 = vars.data[pCounter];
       array59.refC += 1;
   } else {
       array59 = new(Array);
       array59.size = 228;
       array59.refC = 1;
       array59.id = 59;
       array59.data = make([]u32, array59.size);
   }
   loop19: int = 0
   loopLimit19 :: (50)/4 + 1;
   for loop19 < loopLimit19 {
      if (path0 & 1) != 0 {
          array60: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array60 = vars.data[pCounter];
             array60.refC += 1;
         } else {
             array60 = new(Array);
             array60.size = 275;
             array60.refC = 1;
             array60.id = 60;
             array60.data = make([]u32, array60.size);
         }
         loop20: int = 0
         loopLimit20 :: (50)/5 + 1;
         for loop20 < loopLimit20 {
            for i in 0..<array60.size { 
                array60.data[i] -= 1;
            }
            for i in 0..<array59.size {
                if array59.data[i] == 21 {
                    return array59;
                }
            }
            loop20 += 1;
         }
         array60.refC -= 1;
         if array60.refC == 0 {
             delete(array60.data);
             free(array60);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array59;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array61 := func40(&params0);
         defer delete(params0.data);
         array61.refC -= 1;
         if array61.refC == 0 {
             delete(array61.data);
             free(array61);
         }
      }
       array62: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array62 = vars.data[pCounter];
          array62.refC += 1;
      } else {
          array62 = new(Array);
          array62.size = 29;
          array62.refC = 1;
          array62.id = 62;
          array62.data = make([]u32, array62.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array59;
      params0_data[1] = array62;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array63 := func41(&params0);
      defer delete(params0.data);
      for i in 0..<array62.size {
          if array62.data[i] == 18 {
              return array62;
          }
      }
      array63.refC -= 1;
      if array63.refC == 0 {
          delete(array63.data);
          free(array63);
      }
      array62.refC -= 1;
      if array62.refC == 0 {
          delete(array62.data);
          free(array62);
      }
      loop19 += 1;
   }
   for i in 0..<array59.size { 
       array59.data[i] -= 1;
   }
   for i in 0..<array59.size {
       if array59.data[i] == 11 {
           return array59;
       }
   }
   return array59;
}

