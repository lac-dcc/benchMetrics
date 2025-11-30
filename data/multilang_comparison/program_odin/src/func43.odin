package main

func43 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array19: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array19 = vars.data[pCounter];
       array19.refC += 1;
   } else {
       array19 = new(Array);
       array19.size = 336;
       array19.refC = 1;
       array19.id = 19;
       array19.data = make([]u32, array19.size);
   }
   return array19;
}

