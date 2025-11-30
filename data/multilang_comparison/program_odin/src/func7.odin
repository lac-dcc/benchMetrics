package main

func7 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   loop47: int = 0
   loopLimit47 :: (50)/2 + 1;
   for loop47 < loopLimit47 {
      if (path0 & 1) != 0 {
          array160: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array160 = vars.data[pCounter];
             array160.refC += 1;
         } else {
             array160 = new(Array);
             array160.size = 49;
             array160.refC = 1;
             array160.id = 160;
             array160.data = make([]u32, array160.size);
         }
         loop48: int = 0
         loopLimit48 :: (50)/3 + 1;
         for loop48 < loopLimit48 {
            for i in 0..<array160.size { 
                array160.data[i] -= 1;
            }
            for i in 0..<array160.size {
                if array160.data[i] == 29 {
                    return array160;
                }
            }
            loop48 += 1;
         }
         params0_data := make([]^Array, 1);
         params0_data[0] = array160;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array161 := func24(&params0, get_path());
         defer delete(params0.data);
         array161.refC -= 1;
         if array161.refC == 0 {
             delete(array161.data);
             free(array161);
         }
         array160.refC -= 1;
         if array160.refC == 0 {
             delete(array160.data);
             free(array160);
         }
      
      } else {
         params0_data := make([]^Array, 0);
         params0 := ArrayParam{
             data = params0_data,
             size = 0,
         };
         array162 := func16(&params0, get_path());
         defer delete(params0.data);
         array162.refC -= 1;
         if array162.refC == 0 {
             delete(array162.data);
             free(array162);
         }
      }
       array163: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array163 = vars.data[pCounter];
          array163.refC += 1;
      } else {
          array163 = new(Array);
          array163.size = 238;
          array163.refC = 1;
          array163.id = 163;
          array163.data = make([]u32, array163.size);
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array163;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array164 := func17(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array165: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array165 = vars.data[pCounter];
             array165.refC += 1;
         } else {
             array165 = new(Array);
             array165.size = 289;
             array165.refC = 1;
             array165.id = 165;
             array165.data = make([]u32, array165.size);
         }
         loop49: int = 0
         loopLimit49 :: (50)/3 + 1;
         for loop49 < loopLimit49 {
            for i in 0..<array165.size { 
                array165.data[i] -= 1;
            }
            for i in 0..<array164.size {
                if array164.data[i] == 92 {
                    return array164;
                }
            }
            loop49 += 1;
         }
         params1_data := make([]^Array, 3);
         params1_data[0] = array163;
         params1_data[1] = array164;
         params1_data[2] = array165;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array166 := func28(&params1, get_path());
         defer delete(params1.data);
         array166.refC -= 1;
         if array166.refC == 0 {
             delete(array166.data);
             free(array166);
         }
         array165.refC -= 1;
         if array165.refC == 0 {
             delete(array165.data);
             free(array165);
         }
      
      } else {
         params1_data := make([]^Array, 2);
         params1_data[0] = array163;
         params1_data[1] = array164;
         params1 := ArrayParam{
             data = params1_data,
             size = 2,
         };
         array167 := func22(&params1, get_path());
         defer delete(params1.data);
         array167.refC -= 1;
         if array167.refC == 0 {
             delete(array167.data);
             free(array167);
         }
      }
      for i in 0..<array163.size {
          if array163.data[i] == 82 {
              return array163;
          }
      }
      array164.refC -= 1;
      if array164.refC == 0 {
          delete(array164.data);
          free(array164);
      }
      array163.refC -= 1;
      if array163.refC == 0 {
          delete(array163.data);
          free(array163);
      }
      loop47 += 1;
   }
    array168: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array168 = vars.data[pCounter];
       array168.refC += 1;
   } else {
       array168 = new(Array);
       array168.size = 340;
       array168.refC = 1;
       array168.id = 168;
       array168.data = make([]u32, array168.size);
   }
   return array168;
}

