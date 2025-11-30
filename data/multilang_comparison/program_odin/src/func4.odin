package main

func4 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array110: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array110 = vars.data[pCounter];
       array110.refC += 1;
   } else {
       array110 = new(Array);
       array110.size = 940;
       array110.refC = 1;
       array110.id = 110;
       array110.data = make([]u32, array110.size);
   }
   loop33: int = 0
   loopLimit33 :: (50)/3 + 1;
   for loop33 < loopLimit33 {
      if (path0 & 1) != 0 {
          array111: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array111 = vars.data[pCounter];
             array111.refC += 1;
         } else {
             array111 = new(Array);
             array111.size = 667;
             array111.refC = 1;
             array111.id = 111;
             array111.data = make([]u32, array111.size);
         }
         loop34: int = 0
         loopLimit34 :: (50)/4 + 1;
         for loop34 < loopLimit34 {
            for i in 0..<array111.size { 
                array111.data[i] -= 1;
            }
            for i in 0..<array110.size {
                if array110.data[i] == 27 {
                    return array110;
                }
            }
            loop34 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array110;
         params0_data[1] = array111;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array112 := func24(&params0, get_path());
         defer delete(params0.data);
         array112.refC -= 1;
         if array112.refC == 0 {
             delete(array112.data);
             free(array112);
         }
         array111.refC -= 1;
         if array111.refC == 0 {
             delete(array111.data);
             free(array111);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array110;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array113 := func16(&params0, get_path());
         defer delete(params0.data);
         array113.refC -= 1;
         if array113.refC == 0 {
             delete(array113.data);
             free(array113);
         }
      }
       array114: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array114 = vars.data[pCounter];
          array114.refC += 1;
      } else {
          array114 = new(Array);
          array114.size = 224;
          array114.refC = 1;
          array114.id = 114;
          array114.data = make([]u32, array114.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array110;
      params0_data[1] = array114;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array115 := func17(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array116: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array116 = vars.data[pCounter];
             array116.refC += 1;
         } else {
             array116 = new(Array);
             array116.size = 396;
             array116.refC = 1;
             array116.id = 116;
             array116.data = make([]u32, array116.size);
         }
         loop35: int = 0
         loopLimit35 :: (50)/4 + 1;
         for loop35 < loopLimit35 {
            for i in 0..<array114.size { 
                array114.data[i] -= 1;
            }
            for i in 0..<array115.size {
                if array115.data[i] == 84 {
                    return array115;
                }
            }
            loop35 += 1;
         }
         params1_data := make([]^Array, 4);
         params1_data[0] = array110;
         params1_data[1] = array114;
         params1_data[2] = array115;
         params1_data[3] = array116;
         params1 := ArrayParam{
             data = params1_data,
             size = 4,
         };
         array117 := func28(&params1, get_path());
         defer delete(params1.data);
         array117.refC -= 1;
         if array117.refC == 0 {
             delete(array117.data);
             free(array117);
         }
         array116.refC -= 1;
         if array116.refC == 0 {
             delete(array116.data);
             free(array116);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array110;
         params1_data[1] = array114;
         params1_data[2] = array115;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array118 := func22(&params1, get_path());
         defer delete(params1.data);
         array118.refC -= 1;
         if array118.refC == 0 {
             delete(array118.data);
             free(array118);
         }
      }
      for i in 0..<array114.size {
          if array114.data[i] == 85 {
              return array114;
          }
      }
      array115.refC -= 1;
      if array115.refC == 0 {
          delete(array115.data);
          free(array115);
      }
      array114.refC -= 1;
      if array114.refC == 0 {
          delete(array114.data);
          free(array114);
      }
      loop33 += 1;
   }
   for i in 0..<array110.size { 
       array110.data[i] -= 1;
   }
   for i in 0..<array110.size {
       if array110.data[i] == 40 {
           return array110;
       }
   }
   return array110;
}

