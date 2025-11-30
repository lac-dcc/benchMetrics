package main

func44 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array21: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array21 = vars.data[pCounter];
       array21.refC += 1;
   } else {
       array21 = new(Array);
       array21.size = 857;
       array21.refC = 1;
       array21.id = 21;
       array21.data = make([]u32, array21.size);
   }
   return array21;
}

