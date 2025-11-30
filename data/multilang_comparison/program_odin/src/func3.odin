package main

func3 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array195: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array195 = vars.data[pCounter];
       array195.refC += 1;
   } else {
       array195 = new(Array);
       array195.size = 205;
       array195.refC = 1;
       array195.id = 195;
       array195.data = make([]u32, array195.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array195;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array196 := func6(&params0, get_path());
   defer delete(params0.data);
   loop56: int = 0
   loopLimit56 :: (50)/2 + 1;
   for loop56 < loopLimit56 {
      for i in 0..<array195.size { 
          array195.data[i] += 1;
      }
      loop56 += 1;
   }
   for i in 0..<array196.size {
       if array196.data[i] == 83 {
           return array196;
       }
   }
   array195.refC -= 1;
   if array195.refC == 0 {
       delete(array195.data);
       free(array195);
   }
   return array196;
}

