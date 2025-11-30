package main

func12 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array66: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array66 = vars.data[pCounter];
          array66.refC += 1;
      } else {
          array66 = new(Array);
          array66.size = 606;
          array66.refC = 1;
          array66.id = 66;
          array66.data = make([]u32, array66.size);
      }
      loop21: int = 0
      loopLimit21 :: (50)/3 + 1;
      for loop21 < loopLimit21 {
         for i in 0..<array66.size { 
             array66.data[i] -= 1;
         }
         for i in 0..<array66.size {
             if array66.data[i] == 18 {
                 return array66;
             }
         }
         loop21 += 1;
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array66;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array67 := func24(&params0, get_path());
      defer delete(params0.data);
      array67.refC -= 1;
      if array67.refC == 0 {
          delete(array67.data);
          free(array67);
      }
      array66.refC -= 1;
      if array66.refC == 0 {
          delete(array66.data);
          free(array66);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array90 := func16(&params0, get_path());
      defer delete(params0.data);
      array90.refC -= 1;
      if array90.refC == 0 {
          delete(array90.data);
          free(array90);
      }
   }
    array100: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array100 = vars.data[pCounter];
       array100.refC += 1;
   } else {
       array100 = new(Array);
       array100.size = 542;
       array100.refC = 1;
       array100.id = 100;
       array100.data = make([]u32, array100.size);
   }
   return array100;
}

