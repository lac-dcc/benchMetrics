package main

func37 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
   loop17: int = 0
   loopLimit17 :: (50)/4 + 1;
   for loop17 < loopLimit17 {
      loop17 += 1;
   }
    array50: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array50 = vars.data[pCounter];
       array50.refC += 1;
   } else {
       array50 = new(Array);
       array50.size = 555;
       array50.refC = 1;
       array50.id = 50;
       array50.data = make([]u32, array50.size);
   }
   return array50;
}

