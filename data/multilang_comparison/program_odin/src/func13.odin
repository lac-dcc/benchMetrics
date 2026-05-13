package main

func13 :: proc(vars: ^ArrayParam, _path0: u64) -> ^Array {
   pCounter := vars.size;
   path0 := _path0;
    array102: ^Array
   if pCounter > 0 {
       pCounter -= 1;
       array102 = vars.data[pCounter];
       array102.refC += 1;
   } else {
       array102 = new(Array);
       array102.size = 179;
       array102.refC = 1;
       array102.id = 102;
       array102.data = make([]u32, array102.size);
   }
   params0_data := make([]^Array, 1);
   params0_data[0] = array102;
   params0 := ArrayParam{
       data = params0_data,
       size = 1,
   };
   array103 := func17(&params0);
   defer delete(params0.data);
   if (path0 & 1) != 0 {
       array106: ^Array
      if pCounter > 0 {
          pCounter -= 1;
          array106 = vars.data[pCounter];
          array106.refC += 1;
      } else {
          array106 = new(Array);
          array106.size = 587;
          array106.refC = 1;
          array106.id = 106;
          array106.data = make([]u32, array106.size);
      }
      loop32: int = 0
      loopLimit32 :: (50)/3 + 1;
      for loop32 < loopLimit32 {
         for i in 0..<array102.size { 
             array102.data[i] -= 1;
         }
         for i in 0..<array102.size {
             if array102.data[i] == 13 {
                 return array102;
             }
         }
         loop32 += 1;
      }
      params1_data := make([]^Array, 3);
      params1_data[0] = array102;
      params1_data[1] = array103;
      params1_data[2] = array106;
      params1 := ArrayParam{
          data = params1_data,
          size = 3,
      };
      array107 := func28(&params1, get_path());
      defer delete(params1.data);
      array107.refC -= 1;
      if array107.refC == 0 {
          delete(array107.data);
          free(array107);
      }
      array106.refC -= 1;
      if array106.refC == 0 {
          delete(array106.data);
          free(array106);
      }
   
   } else {
      params1_data := make([]^Array, 2);
      params1_data[0] = array102;
      params1_data[1] = array103;
      params1 := ArrayParam{
          data = params1_data,
          size = 2,
      };
      array108 := func22(&params1, get_path());
      defer delete(params1.data);
      array108.refC -= 1;
      if array108.refC == 0 {
          delete(array108.data);
          free(array108);
      }
   }
   array102.refC -= 1;
   if array102.refC == 0 {
       delete(array102.data);
       free(array102);
   }
   return array103;
}

