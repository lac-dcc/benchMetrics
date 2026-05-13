package main

func22 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array35: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array35 = vars.data[pCounter];
       array35.refC += 1;
   } else {
       array35 = new(Array);
       array35.size = 286;
       array35.refC = 1;
       array35.id = 35;
       array35.data = make([]u32, array35.size);
   }
   loop12: int = 0
   loopLimit12 :: (50)/4 + 1;
   for loop12 < loopLimit12 {
      if (path0 & 1) != 0 {
          array36: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array36 = vars.data[pCounter];
             array36.refC += 1;
         } else {
             array36 = new(Array);
             array36.size = 441;
             array36.refC = 1;
             array36.id = 36;
             array36.data = make([]u32, array36.size);
         }
         loop13: int = 0
         loopLimit13 :: (50)/5 + 1;
         for loop13 < loopLimit13 {
            for i in 0..<array36.size { 
                array36.data[i] -= 1;
            }
            for i in 0..<array36.size {
                if array36.data[i] == 44 {
                    return array36;
                }
            }
            loop13 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array35;
         params0_data[1] = array36;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array37 := func42(&params0, get_path());
         defer delete(params0.data);
         array37.refC -= 1;
         if array37.refC == 0 {
             delete(array37.data);
             free(array37);
         }
         array36.refC -= 1;
         if array36.refC == 0 {
             delete(array36.data);
             free(array36);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array35;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array38 := func34(&params0);
         defer delete(params0.data);
         array38.refC -= 1;
         if array38.refC == 0 {
             delete(array38.data);
             free(array38);
         }
      }
       array39: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array39 = vars.data[pCounter];
          array39.refC += 1;
      } else {
          array39 = new(Array);
          array39.size = 117;
          array39.refC = 1;
          array39.id = 39;
          array39.data = make([]u32, array39.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array35;
      params0_data[1] = array39;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array40 := func35(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array41: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array41 = vars.data[pCounter];
             array41.refC += 1;
         } else {
             array41 = new(Array);
             array41.size = 481;
             array41.refC = 1;
             array41.id = 41;
             array41.data = make([]u32, array41.size);
         }
         loop14: int = 0
         loopLimit14 :: (50)/5 + 1;
         for loop14 < loopLimit14 {
            for i in 0..<array41.size { 
                array41.data[i] -= 1;
            }
            for i in 0..<array39.size {
                if array39.data[i] == 27 {
                    return array39;
                }
            }
            loop14 += 1;
         }
         array41.refC -= 1;
         if array41.refC == 0 {
             delete(array41.data);
             free(array41);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array35;
         params1_data[1] = array39;
         params1_data[2] = array40;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array42 := func40(&params1);
         defer delete(params1.data);
         array42.refC -= 1;
         if array42.refC == 0 {
             delete(array42.data);
             free(array42);
         }
      }
      for i in 0..<array40.size {
          if array40.data[i] == 53 {
              return array40;
          }
      }
      array40.refC -= 1;
      if array40.refC == 0 {
          delete(array40.data);
          free(array40);
      }
      array39.refC -= 1;
      if array39.refC == 0 {
          delete(array39.data);
          free(array39);
      }
      loop12 += 1;
   }
   for i in 0..<array35.size { 
       array35.data[i] -= 1;
   }
   for i in 0..<array35.size {
       if array35.data[i] == 6 {
           return array35;
       }
   }
   return array35;
}

