package main

func21 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array141: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array141 = vars.data[pCounter];
       array141.refC += 1;
   } else {
       array141 = new(Array);
       array141.size = 368;
       array141.refC = 1;
       array141.id = 141;
       array141.data = make([]u32, array141.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array141;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array142 := func23(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array143: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array143 = vars.data[pCounter];
          array143.refC += 1;
      } else {
          array143 = new(Array);
          array143.size = 46;
          array143.refC = 1;
          array143.id = 143;
          array143.data = make([]u32, array143.size);
      }
      loop42: int = 0
      loopLimit42 :: (50)/3 + 1;
      for loop42 < loopLimit42 {
         for i in 0..<array141.size { 
             array141.data[i] -= 1;
         }
         for i in 0..<array143.size {
             if array143.data[i] == 49 {
                 return array143;
             }
         }
         loop42 += 1;
      }
      params1_data := make([]^Array, 3);
      params1_data[0] = array141;
      params1_data[1] = array142;
      params1_data[2] = array143;
      params1 := ArrayParam{
          data = params1_data,
          size = 3,
      };
      array144 := func36(&params1, get_path());
      defer delete(params1.data);
      array144.refC -= 1;
      if array144.refC == 0 {
          delete(array144.data);
          free(array144);
      }
      array143.refC -= 1;
      if array143.refC == 0 {
          delete(array143.data);
          free(array143);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array141;
      params1_data[1] = array142;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array145 := func32(&params1, get_path());
      defer delete(params1.data);
      array145.refC -= 1;
      if array145.refC == 0 {
          delete(array145.data);
          free(array145);
      }
   }
   array141.refC -= 1;
   if array141.refC == 0 {
       delete(array141.data);
       free(array141);
   }
   return array142;
}

