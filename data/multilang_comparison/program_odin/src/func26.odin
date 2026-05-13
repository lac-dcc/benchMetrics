package main

func26 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
   if (path0 & 1) != 0 {
       array78: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array78 = vars.data[pCounter];
          array78.refC += 1;
      } else {
          array78 = new(Array);
          array78.size = 622;
          array78.refC = 1;
          array78.id = 78;
          array78.data = make([]u32, array78.size);
      }
      loop25: int = 0
      loopLimit25 :: (50)/3 + 1;
      for loop25 < loopLimit25 {
         for i in 0..<array78.size { 
             array78.data[i] -= 1;
         }
         for i in 0..<array78.size {
             if array78.data[i] == 43 {
                 return array78;
             }
         }
         loop25 += 1;
      }
      params0_data := make([]^Array, 1);
      params0_data[0] = array78;
      params0 := ArrayParam{
          data = params0_data,
          size = 1,
      };
      array79 := func36(&params0, get_path());
      defer delete(params0.data);
      array79.refC -= 1;
      if array79.refC == 0 {
          delete(array79.data);
          free(array79);
      }
      array78.refC -= 1;
      if array78.refC == 0 {
          delete(array78.data);
          free(array78);
      }
   
   } else {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array80 := func32(&params0, get_path());
      defer delete(params0.data);
      array80.refC -= 1;
      if array80.refC == 0 {
          delete(array80.data);
          free(array80);
      }
   }
    array81: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array81 = vars.data[pCounter];
       array81.refC += 1;
   } else {
       array81 = new(Array);
       array81.size = 311;
       array81.refC = 1;
       array81.id = 81;
       array81.data = make([]u32, array81.size);
   }
   return array81;
}

