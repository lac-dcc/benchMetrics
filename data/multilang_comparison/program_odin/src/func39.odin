package main

func39 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array56: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array56 = vars.data[pCounter];
       array56.refC += 1;
   } else {
       array56 = new(Array);
       array56.size = 491;
       array56.refC = 1;
       array56.id = 56;
       array56.data = make([]u32, array56.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array56;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array57 := func41(&params0);
   defer delete(params0.data);
   array56.refC -= 1;
   if array56.refC == 0 {
       delete(array56.data);
       free(array56);
   }
   return array57;
}

