package main

func25 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   loop22: int = 0
   loopLimit22 :: (50)/3 + 1;
   for loop22 < loopLimit22 {
      if (path0 & 1) != 0 {
          array69: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array69 = vars.data[pCounter];
             array69.refC += 1;
         } else {
             array69 = new(Array);
             array69.size = 324;
             array69.refC = 1;
             array69.id = 69;
             array69.data = make([]u32, array69.size);
         }
         loop23: int = 0
         loopLimit23 :: (50)/4 + 1;
         for loop23 < loopLimit23 {
            for i in 0..<array69.size { 
                array69.data[i] -= 1;
            }
            for i in 0..<array69.size {
                if array69.data[i] == 83 {
                    return array69;
                }
            }
            loop23 += 1;
         }
         params0_data := make([]^Array, 1);
         params0_data[0] = array69;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array70 := func42(&params0, get_path());
         defer delete(params0.data);
         array70.refC -= 1;
         if array70.refC == 0 {
             delete(array70.data);
             free(array70);
         }
         array69.refC -= 1;
         if array69.refC == 0 {
             delete(array69.data);
             free(array69);
         }
      
      } else {
         params0_data := make([]^Array, 0);
         params0 := ArrayParam{
             data = params0_data,
             size = 0,
         };
         array71 := func34(&params0);
         defer delete(params0.data);
         array71.refC -= 1;
         if array71.refC == 0 {
             delete(array71.data);
             free(array71);
         }
      }
       array72: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array72 = vars.data[pCounter];
          array72.refC += 1;
      } else {
          array72 = new(Array);
          array72.size = 644;
          array72.refC = 1;
          array72.id = 72;
          array72.data = make([]u32, array72.size);
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array72;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array73 := func35(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array74: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array74 = vars.data[pCounter];
             array74.refC += 1;
         } else {
             array74 = new(Array);
             array74.size = 139;
             array74.refC = 1;
             array74.id = 74;
             array74.data = make([]u32, array74.size);
         }
         loop24: int = 0
         loopLimit24 :: (50)/4 + 1;
         for loop24 < loopLimit24 {
            for i in 0..<array74.size { 
                array74.data[i] -= 1;
            }
            for i in 0..<array73.size {
                if array73.data[i] == 69 {
                    return array73;
                }
            }
            loop24 += 1;
         }
         array74.refC -= 1;
         if array74.refC == 0 {
             delete(array74.data);
             free(array74);
         }
      
      } else {
         params1_data := make([]^Array, 2);
         params1_data[0] = array72;
         params1_data[1] = array73;
         params1 := ArrayParam{
             data = params1_data,
             size = 2,
         };
         array75 := func40(&params1);
         defer delete(params1.data);
         array75.refC -= 1;
         if array75.refC == 0 {
             delete(array75.data);
             free(array75);
         }
      }
      for i in 0..<array72.size {
          if array72.data[i] == 97 {
              return array72;
          }
      }
      array73.refC -= 1;
      if array73.refC == 0 {
          delete(array73.data);
          free(array73);
      }
      array72.refC -= 1;
      if array72.refC == 0 {
          delete(array72.data);
          free(array72);
      }
      loop22 += 1;
   }
    array76: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array76 = vars.data[pCounter];
       array76.refC += 1;
   } else {
       array76 = new(Array);
       array76.size = 507;
       array76.refC = 1;
       array76.id = 76;
       array76.data = make([]u32, array76.size);
   }
   return array76;
}

