package main

func23 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array45: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array45 = vars.data[pCounter];
       array45.refC += 1;
   } else {
       array45 = new(Array);
       array45.size = 732;
       array45.refC = 1;
       array45.id = 45;
       array45.data = make([]u32, array45.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array45;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array46 := func28(&params0, get_path());
   defer delete(params0.data);
   loop15: int = 0
   loopLimit15 :: (50)/4 + 1;
   for loop15 < loopLimit15 {
      for i in 0..<array46.size { 
          array46.data[i] += 1;
      }
      loop15 += 1;
   }
   for i in 0..<array45.size {
       if array45.data[i] == 68 {
           return array45;
       }
   }
   array46.refC -= 1;
   if array46.refC == 0 {
       delete(array46.data);
       free(array46);
   }
   return array45;
}

