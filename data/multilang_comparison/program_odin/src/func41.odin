package main

func41 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array13: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array13 = vars.data[pCounter];
       array13.refC += 1;
   } else {
       array13 = new(Array);
       array13.size = 421;
       array13.refC = 1;
       array13.id = 13;
       array13.data = make([]u32, array13.size);
   }
   loop7: int = 0
   loopLimit7 :: (50)/5 + 1;
   for loop7 < loopLimit7 {
      for i in 0..<array13.size { 
          array13.data[i] += 1;
      }
      loop7 += 1;
   }
   for i in 0..<array13.size {
       if array13.data[i] == 37 {
           return array13;
       }
   }
   return array13;
}

