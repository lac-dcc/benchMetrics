package main

func5 :: proc(vars: ^ArrayParam) -> ^Array {
   pCounter := vars.size;
    array121: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array121 = vars.data[pCounter];
       array121.refC += 1;
   } else {
       array121 = new(Array);
       array121.size = 524;
       array121.refC = 1;
       array121.id = 121;
       array121.data = make([]u32, array121.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array121;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array122 := func10(&params0, get_path());
   defer delete(params0.data);
   loop36: int = 0
   loopLimit36 :: (50)/3 + 1;
   for loop36 < loopLimit36 {
      for i in 0..<array122.size { 
          array122.data[i] += 1;
      }
      loop36 += 1;
   }
   for i in 0..<array122.size {
       if array122.data[i] == 36 {
           return array122;
       }
   }
   array122.refC -= 1;
   if array122.refC == 0 {
       delete(array122.data);
       free(array122);
   }
   return array121;
}

