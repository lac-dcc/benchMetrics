package main

func35 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array30: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array30 = vars.data[pCounter];
       array30.refC += 1;
   } else {
       array30 = new(Array);
       array30.size = 226;
       array30.refC = 1;
       array30.id = 30;
       array30.data = make([]u32, array30.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array30;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array31 := func42(&params0, get_path());
   defer delete(params0.data);
   loop10: int = 0
   loopLimit10 :: (50)/4 + 1;
   for loop10 < loopLimit10 {
      for i in 0..<array31.size { 
          array31.data[i] += 1;
      }
      loop10 += 1;
   }
   for i in 0..<array31.size {
       if array31.data[i] == 70 {
           return array31;
       }
   }
   array31.refC -= 1;
   if array31.refC == 0 {
       delete(array31.data);
       free(array31);
   }
   return array30;
}

