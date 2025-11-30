package main

func19 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   loop38: int = 0
   loopLimit38 :: (50)/3 + 1;
   for loop38 < loopLimit38 {
      if (path0 & 1) != 0 {
          array126: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array126 = vars.data[pCounter];
             array126.refC += 1;
         } else {
             array126 = new(Array);
             array126.size = 142;
             array126.refC = 1;
             array126.id = 126;
             array126.data = make([]u32, array126.size);
         }
         loop39: int = 0
         loopLimit39 :: (50)/4 + 1;
         for loop39 < loopLimit39 {
            for i in 0..<array126.size { 
                array126.data[i] -= 1;
            }
            for i in 0..<array126.size {
                if array126.data[i] == 93 {
                    return array126;
                }
            }
            loop39 += 1;
         }
         params0_data := make([]^Array, 1);
         params0_data[0] = array126;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array127 := func36(&params0, get_path());
         defer delete(params0.data);
         array127.refC -= 1;
         if array127.refC == 0 {
             delete(array127.data);
             free(array127);
         }
         array126.refC -= 1;
         if array126.refC == 0 {
             delete(array126.data);
             free(array126);
         }
      
      } else {
         params0_data := make([]^Array, 0);
         params0 := ArrayParam{
             data = params0_data,
             size = 0,
         };
         array128 := func32(&params0, get_path());
         defer delete(params0.data);
         array128.refC -= 1;
         if array128.refC == 0 {
             delete(array128.data);
             free(array128);
         }
      }
       array129: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array129 = vars.data[pCounter];
          array129.refC += 1;
      } else {
          array129 = new(Array);
          array129.size = 613;
          array129.refC = 1;
          array129.id = 129;
          array129.data = make([]u32, array129.size);
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array129;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array130 := func33(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array131: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array131 = vars.data[pCounter];
             array131.refC += 1;
         } else {
             array131 = new(Array);
             array131.size = 326;
             array131.refC = 1;
             array131.id = 131;
             array131.data = make([]u32, array131.size);
         }
         loop40: int = 0
         loopLimit40 :: (50)/4 + 1;
         for loop40 < loopLimit40 {
            for i in 0..<array129.size { 
                array129.data[i] -= 1;
            }
            for i in 0..<array130.size {
                if array130.data[i] == 2 {
                    return array130;
                }
            }
            loop40 += 1;
         }
         params1_data := make([]^Array, 3);
         params1_data[0] = array129;
         params1_data[1] = array130;
         params1_data[2] = array131;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array132 := func42(&params1, get_path());
         defer delete(params1.data);
         array132.refC -= 1;
         if array132.refC == 0 {
             delete(array132.data);
             free(array132);
         }
         array131.refC -= 1;
         if array131.refC == 0 {
             delete(array131.data);
             free(array131);
         }
      
      } else {
         params1_data := make([]^Array, 2);
         params1_data[0] = array129;
         params1_data[1] = array130;
         params1 := ArrayParam{
             data = params1_data,
             size = 2,
         };
         array133 := func34(&params1);
         defer delete(params1.data);
         array133.refC -= 1;
         if array133.refC == 0 {
             delete(array133.data);
             free(array133);
         }
      }
      for i in 0..<array129.size {
          if array129.data[i] == 68 {
              return array129;
          }
      }
      array130.refC -= 1;
      if array130.refC == 0 {
          delete(array130.data);
          free(array130);
      }
      array129.refC -= 1;
      if array129.refC == 0 {
          delete(array129.data);
          free(array129);
      }
      loop38 += 1;
   }
    array134: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array134 = vars.data[pCounter];
       array134.refC += 1;
   } else {
       array134 = new(Array);
       array134.size = 528;
       array134.refC = 1;
       array134.id = 134;
       array134.data = make([]u32, array134.size);
   }
   return array134;
}

