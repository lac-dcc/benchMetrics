package main

func11 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   loop3: int = 0
   loopLimit3 :: (50)/3 + 1;
   for loop3 < loopLimit3 {
      if (path0 & 1) != 0 {
          array5: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array5 = vars.data[pCounter];
             array5.refC += 1;
         } else {
             array5 = new(Array);
             array5.size = 540;
             array5.refC = 1;
             array5.id = 5;
             array5.data = make([]u32, array5.size);
         }
         loop4: int = 0
         loopLimit4 :: (50)/4 + 1;
         for loop4 < loopLimit4 {
            for i in 0..<array5.size { 
                array5.data[i] -= 1;
            }
            for i in 0..<array5.size {
                if array5.data[i] == 36 {
                    return array5;
                }
            }
            loop4 += 1;
         }
         params0_data := make([]^Array, 1);
         params0_data[0] = array5;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array6 := func28(&params0, get_path());
         defer delete(params0.data);
         array6.refC -= 1;
         if array6.refC == 0 {
             delete(array6.data);
             free(array6);
         }
         array5.refC -= 1;
         if array5.refC == 0 {
             delete(array5.data);
             free(array5);
         }
      
      } else {
         params0_data := make([]^Array, 0);
         params0 := ArrayParam{
             data = params0_data,
             size = 0,
         };
         array34 := func22(&params0, get_path());
         defer delete(params0.data);
         array34.refC -= 1;
         if array34.refC == 0 {
             delete(array34.data);
             free(array34);
         }
      }
       array43: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array43 = vars.data[pCounter];
          array43.refC += 1;
      } else {
          array43 = new(Array);
          array43.size = 219;
          array43.refC = 1;
          array43.id = 43;
          array43.data = make([]u32, array43.size);
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array43;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array44 := func23(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array47: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array47 = vars.data[pCounter];
             array47.refC += 1;
         } else {
             array47 = new(Array);
             array47.size = 715;
             array47.refC = 1;
             array47.id = 47;
             array47.data = make([]u32, array47.size);
         }
         loop16: int = 0
         loopLimit16 :: (50)/4 + 1;
         for loop16 < loopLimit16 {
            for i in 0..<array44.size { 
                array44.data[i] -= 1;
            }
            for i in 0..<array43.size {
                if array43.data[i] == 96 {
                    return array43;
                }
            }
            loop16 += 1;
         }
         params1_data := make([]^Array, 3);
         params1_data[0] = array43;
         params1_data[1] = array44;
         params1_data[2] = array47;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array48 := func36(&params1, get_path());
         defer delete(params1.data);
         array48.refC -= 1;
         if array48.refC == 0 {
             delete(array48.data);
             free(array48);
         }
         array47.refC -= 1;
         if array47.refC == 0 {
             delete(array47.data);
             free(array47);
         }
      
      } else {
         params1_data := make([]^Array, 2);
         params1_data[0] = array43;
         params1_data[1] = array44;
         params1 := ArrayParam{
             data = params1_data,
             size = 2,
         };
         array58 := func32(&params1, get_path());
         defer delete(params1.data);
         array58.refC -= 1;
         if array58.refC == 0 {
             delete(array58.data);
             free(array58);
         }
      }
      for i in 0..<array44.size {
          if array44.data[i] == 76 {
              return array44;
          }
      }
      array44.refC -= 1;
      if array44.refC == 0 {
          delete(array44.data);
          free(array44);
      }
      array43.refC -= 1;
      if array43.refC == 0 {
          delete(array43.data);
          free(array43);
      }
      loop3 += 1;
   }
    array64: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array64 = vars.data[pCounter];
       array64.refC += 1;
   } else {
       array64 = new(Array);
       array64.size = 404;
       array64.refC = 1;
       array64.id = 64;
       array64.data = make([]u32, array64.size);
   }
   return array64;
}

