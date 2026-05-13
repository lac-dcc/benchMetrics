package main

func33 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array85: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array85 = vars.data[pCounter];
       array85.refC += 1;
   } else {
       array85 = new(Array);
       array85.size = 736;
       array85.refC = 1;
       array85.id = 85;
       array85.data = make([]u32, array85.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array85;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array86 := func36(&params0, get_path());
   defer delete(params0.data);
   loop26: int = 0
   loopLimit26 :: (50)/3 + 1;
   for loop26 < loopLimit26 {
      for i in 0..<array85.size { 
          array85.data[i] += 1;
      }
      loop26 += 1;
   }
   for i in 0..<array86.size {
       if array86.data[i] == 8 {
           return array86;
       }
   }
   array86.refC -= 1;
   if array86.refC == 0 {
       delete(array86.data);
       free(array86);
   }
   return array85;
}

