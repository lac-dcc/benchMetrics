package main

func16 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array91: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array91 = vars.data[pCounter];
       array91.refC += 1;
   } else {
       array91 = new(Array);
       array91.size = 71;
       array91.refC = 1;
       array91.id = 91;
       array91.data = make([]u32, array91.size);
   }
   loop28: int = 0
   loopLimit28 :: (50)/3 + 1;
   for loop28 < loopLimit28 {
      if (path0 & 1) != 0 {
          array92: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array92 = vars.data[pCounter];
             array92.refC += 1;
         } else {
             array92 = new(Array);
             array92.size = 973;
             array92.refC = 1;
             array92.id = 92;
             array92.data = make([]u32, array92.size);
         }
         loop29: int = 0
         loopLimit29 :: (50)/4 + 1;
         for loop29 < loopLimit29 {
            for i in 0..<array92.size { 
                array92.data[i] -= 1;
            }
            for i in 0..<array92.size {
                if array92.data[i] == 30 {
                    return array92;
                }
            }
            loop29 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array91;
         params0_data[1] = array92;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array93 := func36(&params0, get_path());
         defer delete(params0.data);
         array93.refC -= 1;
         if array93.refC == 0 {
             delete(array93.data);
             free(array93);
         }
         array92.refC -= 1;
         if array92.refC == 0 {
             delete(array92.data);
             free(array92);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array91;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array94 := func32(&params0, get_path());
         defer delete(params0.data);
         array94.refC -= 1;
         if array94.refC == 0 {
             delete(array94.data);
             free(array94);
         }
      }
       array95: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array95 = vars.data[pCounter];
          array95.refC += 1;
      } else {
          array95 = new(Array);
          array95.size = 199;
          array95.refC = 1;
          array95.id = 95;
          array95.data = make([]u32, array95.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array91;
      params0_data[1] = array95;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array96 := func33(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array97: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array97 = vars.data[pCounter];
             array97.refC += 1;
         } else {
             array97 = new(Array);
             array97.size = 996;
             array97.refC = 1;
             array97.id = 97;
             array97.data = make([]u32, array97.size);
         }
         loop30: int = 0
         loopLimit30 :: (50)/4 + 1;
         for loop30 < loopLimit30 {
            for i in 0..<array97.size { 
                array97.data[i] -= 1;
            }
            for i in 0..<array95.size {
                if array95.data[i] == 13 {
                    return array95;
                }
            }
            loop30 += 1;
         }
         params1_data := make([]^Array, 4);
         params1_data[0] = array91;
         params1_data[1] = array95;
         params1_data[2] = array96;
         params1_data[3] = array97;
         params1 := ArrayParam{
             data = params1_data,
             size = 4,
         };
         array98 := func42(&params1, get_path());
         defer delete(params1.data);
         array98.refC -= 1;
         if array98.refC == 0 {
             delete(array98.data);
             free(array98);
         }
         array97.refC -= 1;
         if array97.refC == 0 {
             delete(array97.data);
             free(array97);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array91;
         params1_data[1] = array95;
         params1_data[2] = array96;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array99 := func34(&params1);
         defer delete(params1.data);
         array99.refC -= 1;
         if array99.refC == 0 {
             delete(array99.data);
             free(array99);
         }
      }
      for i in 0..<array96.size {
          if array96.data[i] == 84 {
              return array96;
          }
      }
      array96.refC -= 1;
      if array96.refC == 0 {
          delete(array96.data);
          free(array96);
      }
      array95.refC -= 1;
      if array95.refC == 0 {
          delete(array95.data);
          free(array95);
      }
      loop28 += 1;
   }
   for i in 0..<array91.size { 
       array91.data[i] -= 1;
   }
   for i in 0..<array91.size {
       if array91.data[i] == 84 {
           return array91;
       }
   }
   return array91;
}

