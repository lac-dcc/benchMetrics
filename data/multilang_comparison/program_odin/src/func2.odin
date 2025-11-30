package main

func2 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array183: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array183 = vars.data[pCounter];
       array183.refC += 1;
   } else {
       array183 = new(Array);
       array183.size = 80;
       array183.refC = 1;
       array183.id = 183;
       array183.data = make([]u32, array183.size);
   }
   loop53: int = 0
   loopLimit53 :: (50)/2 + 1;
   for loop53 < loopLimit53 {
      if (path0 & 1) != 0 {
          array184: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array184 = vars.data[pCounter];
             array184.refC += 1;
         } else {
             array184 = new(Array);
             array184.size = 631;
             array184.refC = 1;
             array184.id = 184;
             array184.data = make([]u32, array184.size);
         }
         loop54: int = 0
         loopLimit54 :: (50)/3 + 1;
         for loop54 < loopLimit54 {
            for i in 0..<array184.size { 
                array184.data[i] -= 1;
            }
            for i in 0..<array184.size {
                if array184.data[i] == 27 {
                    return array184;
                }
            }
            loop54 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array183;
         params0_data[1] = array184;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array185 := func18(&params0, get_path());
         defer delete(params0.data);
         array185.refC -= 1;
         if array185.refC == 0 {
             delete(array185.data);
             free(array185);
         }
         array184.refC -= 1;
         if array184.refC == 0 {
             delete(array184.data);
             free(array184);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array183;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array186 := func14(&params0, get_path());
         defer delete(params0.data);
         array186.refC -= 1;
         if array186.refC == 0 {
             delete(array186.data);
             free(array186);
         }
      }
       array187: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array187 = vars.data[pCounter];
          array187.refC += 1;
      } else {
          array187 = new(Array);
          array187.size = 512;
          array187.refC = 1;
          array187.id = 187;
          array187.data = make([]u32, array187.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array183;
      params0_data[1] = array187;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array188 := func15(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array189: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array189 = vars.data[pCounter];
             array189.refC += 1;
         } else {
             array189 = new(Array);
             array189.size = 479;
             array189.refC = 1;
             array189.id = 189;
             array189.data = make([]u32, array189.size);
         }
         loop55: int = 0
         loopLimit55 :: (50)/3 + 1;
         for loop55 < loopLimit55 {
            for i in 0..<array188.size { 
                array188.data[i] -= 1;
            }
            for i in 0..<array187.size {
                if array187.data[i] == 89 {
                    return array187;
                }
            }
            loop55 += 1;
         }
         params1_data := make([]^Array, 4);
         params1_data[0] = array183;
         params1_data[1] = array187;
         params1_data[2] = array188;
         params1_data[3] = array189;
         params1 := ArrayParam{
             data = params1_data,
             size = 4,
         };
         array190 := func24(&params1, get_path());
         defer delete(params1.data);
         array190.refC -= 1;
         if array190.refC == 0 {
             delete(array190.data);
             free(array190);
         }
         array189.refC -= 1;
         if array189.refC == 0 {
             delete(array189.data);
             free(array189);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array183;
         params1_data[1] = array187;
         params1_data[2] = array188;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array191 := func16(&params1, get_path());
         defer delete(params1.data);
         array191.refC -= 1;
         if array191.refC == 0 {
             delete(array191.data);
             free(array191);
         }
      }
      for i in 0..<array183.size {
          if array183.data[i] == 87 {
              return array183;
          }
      }
      array188.refC -= 1;
      if array188.refC == 0 {
          delete(array188.data);
          free(array188);
      }
      array187.refC -= 1;
      if array187.refC == 0 {
          delete(array187.data);
          free(array187);
      }
      loop53 += 1;
   }
   for i in 0..<array183.size { 
       array183.data[i] -= 1;
   }
   for i in 0..<array183.size {
       if array183.data[i] == 66 {
           return array183;
       }
   }
   return array183;
}

