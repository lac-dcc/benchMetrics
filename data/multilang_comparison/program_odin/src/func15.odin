package main

func15 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array177: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array177 = vars.data[pCounter];
       array177.refC += 1;
   } else {
       array177 = new(Array);
       array177.size = 57;
       array177.refC = 1;
       array177.id = 177;
       array177.data = make([]u32, array177.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array177;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array178 := func18(&params0, get_path());
   defer delete(params0.data);
   loop51: int = 0
   loopLimit51 :: (50)/2 + 1;
   for loop51 < loopLimit51 {
      for i in 0..<array178.size { 
          array178.data[i] += 1;
      }
      loop51 += 1;
   }
   for i in 0..<array177.size {
       if array177.data[i] == 12 {
           return array177;
       }
   }
   array178.refC -= 1;
   if array178.refC == 0 {
       delete(array178.data);
       free(array178);
   }
   return array177;
}

