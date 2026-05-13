package main

func34 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array25: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array25 = vars.data[pCounter];
       array25.refC += 1;
   } else {
       array25 = new(Array);
       array25.size = 87;
       array25.refC = 1;
       array25.id = 25;
       array25.data = make([]u32, array25.size);
   }
   loop9: int = 0
   loopLimit9 :: (50)/4 + 1;
   for loop9 < loopLimit9 {
      for i in 0..<array25.size {
          if array25.data[i] == 76 {
              return array25;
          }
      }
      loop9 += 1;
   }
   for i in 0..<array25.size { 
       array25.data[i] -= 1;
   }
   for i in 0..<array25.size {
       if array25.data[i] == 84 {
           return array25;
       }
   }
   return array25;
}

