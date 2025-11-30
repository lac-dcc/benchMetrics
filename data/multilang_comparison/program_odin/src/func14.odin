package main

func14 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array147: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array147 = vars.data[pCounter];
       array147.refC += 1;
   } else {
       array147 = new(Array);
       array147.size = 152;
       array147.refC = 1;
       array147.id = 147;
       array147.data = make([]u32, array147.size);
   }
   loop43: int = 0
   loopLimit43 :: (50)/3 + 1;
   for loop43 < loopLimit43 {
      if (path0 & 1) != 0 {
          array148: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array148 = vars.data[pCounter];
             array148.refC += 1;
         } else {
             array148 = new(Array);
             array148.size = 996;
             array148.refC = 1;
             array148.id = 148;
             array148.data = make([]u32, array148.size);
         }
         loop44: int = 0
         loopLimit44 :: (50)/4 + 1;
         for loop44 < loopLimit44 {
            for i in 0..<array148.size { 
                array148.data[i] -= 1;
            }
            for i in 0..<array147.size {
                if array147.data[i] == 57 {
                    return array147;
                }
            }
            loop44 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array147;
         params0_data[1] = array148;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array149 := func28(&params0, get_path());
         defer delete(params0.data);
         array149.refC -= 1;
         if array149.refC == 0 {
             delete(array149.data);
             free(array149);
         }
         array148.refC -= 1;
         if array148.refC == 0 {
             delete(array148.data);
             free(array148);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array147;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array150 := func22(&params0, get_path());
         defer delete(params0.data);
         array150.refC -= 1;
         if array150.refC == 0 {
             delete(array150.data);
             free(array150);
         }
      }
       array151: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array151 = vars.data[pCounter];
          array151.refC += 1;
      } else {
          array151 = new(Array);
          array151.size = 921;
          array151.refC = 1;
          array151.id = 151;
          array151.data = make([]u32, array151.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array147;
      params0_data[1] = array151;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array152 := func23(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array153: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array153 = vars.data[pCounter];
             array153.refC += 1;
         } else {
             array153 = new(Array);
             array153.size = 28;
             array153.refC = 1;
             array153.id = 153;
             array153.data = make([]u32, array153.size);
         }
         loop45: int = 0
         loopLimit45 :: (50)/4 + 1;
         for loop45 < loopLimit45 {
            for i in 0..<array153.size { 
                array153.data[i] -= 1;
            }
            for i in 0..<array152.size {
                if array152.data[i] == 48 {
                    return array152;
                }
            }
            loop45 += 1;
         }
         params1_data := make([]^Array, 4);
         params1_data[0] = array147;
         params1_data[1] = array151;
         params1_data[2] = array152;
         params1_data[3] = array153;
         params1 := ArrayParam{
             data = params1_data,
             size = 4,
         };
         array154 := func36(&params1, get_path());
         defer delete(params1.data);
         array154.refC -= 1;
         if array154.refC == 0 {
             delete(array154.data);
             free(array154);
         }
         array153.refC -= 1;
         if array153.refC == 0 {
             delete(array153.data);
             free(array153);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array147;
         params1_data[1] = array151;
         params1_data[2] = array152;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array155 := func32(&params1, get_path());
         defer delete(params1.data);
         array155.refC -= 1;
         if array155.refC == 0 {
             delete(array155.data);
             free(array155);
         }
      }
      for i in 0..<array151.size {
          if array151.data[i] == 43 {
              return array151;
          }
      }
      array152.refC -= 1;
      if array152.refC == 0 {
          delete(array152.data);
          free(array152);
      }
      array151.refC -= 1;
      if array151.refC == 0 {
          delete(array151.data);
          free(array151);
      }
      loop43 += 1;
   }
   for i in 0..<array147.size { 
       array147.data[i] -= 1;
   }
   for i in 0..<array147.size {
       if array147.data[i] == 28 {
           return array147;
       }
   }
   return array147;
}

