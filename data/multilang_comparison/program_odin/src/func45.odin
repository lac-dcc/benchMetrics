package main

func45 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array23: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array23 = vars.data[pCounter];
       array23.refC += 1;
   } else {
       array23 = new(Array);
       array23.size = 814;
       array23.refC = 1;
       array23.id = 23;
       array23.data = make([]u32, array23.size);
   }
   return array23;
}

