package main

func0 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array1: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array1 = vars.data[pCounter];
       array1.refC += 1;
   } else {
       array1 = new(Array);
       array1.size = 335;
       array1.refC = 1;
       array1.id = 1;
       array1.data = make([]u32, array1.size);
   }
   loop1: int = 0
   loopLimit1 :: (50)/2 + 1;
   for loop1 < loopLimit1 {
      if (path0 & 1) != 0 {
          array2: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array2 = vars.data[pCounter];
             array2.refC += 1;
         } else {
             array2 = new(Array);
             array2.size = 386;
             array2.refC = 1;
             array2.id = 2;
             array2.data = make([]u32, array2.size);
         }
         loop2: int = 0
         loopLimit2 :: (50)/3 + 1;
         for loop2 < loopLimit2 {
            for i in 0..<array1.size { 
                array1.data[i] -= 1;
            }
            for i in 0..<array2.size {
                if array2.data[i] == 21 {
                    return array2;
                }
            }
            loop2 += 1;
         }
         params0_data := make([]^Array, 2);
         params0_data[0] = array1;
         params0_data[1] = array2;
         params0 := ArrayParam{
             data = params0_data,
             size = 2,
         };
         array3 := func10(&params0, get_path());
         defer delete(params0.data);
         array3.refC -= 1;
         if array3.refC == 0 {
             delete(array3.data);
             free(array3);
         }
         array2.refC -= 1;
         if array2.refC == 0 {
             delete(array2.data);
             free(array2);
         }
      
      } else {
         params0_data := make([]^Array, 1);
         params0_data[0] = array1;
         params0 := ArrayParam{
             data = params0_data,
             size = 1,
         };
         array109 := func4(&params0, get_path());
         defer delete(params0.data);
         array109.refC -= 1;
         if array109.refC == 0 {
             delete(array109.data);
             free(array109);
         }
      }
       array119: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array119 = vars.data[pCounter];
          array119.refC += 1;
      } else {
          array119 = new(Array);
          array119.size = 898;
          array119.refC = 1;
          array119.id = 119;
          array119.data = make([]u32, array119.size);
      }
      params0_data := make([]^Array, 2);
      params0_data[0] = array1;
      params0_data[1] = array119;
      params0 := ArrayParam{
          data = params0_data,
          size = 2,
      };
      array120 := func5(&params0);
      defer delete(params0.data);
      if (path0 & 2) != 0 {
          array123: ^Array
         if pCounter > 0 {
             pCounter -= 1;
             array123 = vars.data[pCounter];
             array123.refC += 1;
         } else {
             array123 = new(Array);
             array123.size = 155;
             array123.refC = 1;
             array123.id = 123;
             array123.data = make([]u32, array123.size);
         }
         loop37: int = 0
         loopLimit37 :: (50)/3 + 1;
         for loop37 < loopLimit37 {
            for i in 0..<array120.size { 
                array120.data[i] -= 1;
            }
            for i in 0..<array1.size {
                if array1.data[i] == 79 {
                    return array1;
                }
            }
            loop37 += 1;
         }
         params1_data := make([]^Array, 4);
         params1_data[0] = array1;
         params1_data[1] = array119;
         params1_data[2] = array120;
         params1_data[3] = array123;
         params1 := ArrayParam{
             data = params1_data,
             size = 4,
         };
         array124 := func18(&params1, get_path());
         defer delete(params1.data);
         array124.refC -= 1;
         if array124.refC == 0 {
             delete(array124.data);
             free(array124);
         }
         array123.refC -= 1;
         if array123.refC == 0 {
             delete(array123.data);
             free(array123);
         }
      
      } else {
         params1_data := make([]^Array, 3);
         params1_data[0] = array1;
         params1_data[1] = array119;
         params1_data[2] = array120;
         params1 := ArrayParam{
             data = params1_data,
             size = 3,
         };
         array146 := func14(&params1, get_path());
         defer delete(params1.data);
         array146.refC -= 1;
         if array146.refC == 0 {
             delete(array146.data);
             free(array146);
         }
      }
      for i in 0..<array120.size {
          if array120.data[i] == 81 {
              return array120;
          }
      }
      array120.refC -= 1;
      if array120.refC == 0 {
          delete(array120.data);
          free(array120);
      }
      array119.refC -= 1;
      if array119.refC == 0 {
          delete(array119.data);
          free(array119);
      }
      loop1 += 1;
   }
   return array1;
}

