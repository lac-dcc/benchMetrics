package main

func40 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array10: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array10 = vars.data[pCounter];
       array10.refC += 1;
   } else {
       array10 = new(Array);
       array10.size = 58;
       array10.refC = 1;
       array10.id = 10;
       array10.data = make([]u32, array10.size);
   }
   for i in 0..<array10.size { 
       array10.data[i] -= 1;
   }
   for i in 0..<array10.size {
       if array10.data[i] == 93 {
           return array10;
       }
   }
   return array10;
}

