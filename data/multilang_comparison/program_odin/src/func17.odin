package main

func17 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array104: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array104 = vars.data[pCounter];
       array104.refC += 1;
   } else {
       array104 = new(Array);
       array104.size = 348;
       array104.refC = 1;
       array104.id = 104;
       array104.data = make([]u32, array104.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array104;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array105 := func24(&params0, get_path());
   defer delete(params0.data);
   loop31: int = 0
   loopLimit31 :: (50)/3 + 1;
   for loop31 < loopLimit31 {
      for i in 0..<array105.size { 
          array105.data[i] += 1;
      }
      loop31 += 1;
   }
   for i in 0..<array104.size {
       if array104.data[i] == 10 {
           return array104;
       }
   }
   array105.refC -= 1;
   if array105.refC == 0 {
       delete(array105.data);
       free(array105);
   }
   return array104;
}

