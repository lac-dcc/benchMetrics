module func20;
import program_d;

array_t* func20(array_t_param* vars, const ulong PATH0, int loopsFactor) {
   size_t pCounter = vars.size;
   if(PATH0 & 1) {
      array_t* array136;
      if (pCounter > 0) {
         array136 = vars.data[--pCounter];
         array136.refC++;
         DEBUG_COPY(array136.id);
      } else {
         array136 = cast(array_t*)malloc(array_t.sizeof);
         array136.size = 460;
         array136.refC = 1;
         array136.id = 136;
         array136.data = cast(uint*)malloc(array136.size*uint.sizeof);
         memset(array136.data, 0, array136.size*uint.sizeof);
         DEBUG_NEW(array136.id);
      }
      uint loop41 = 0;
      uint loopLimit41 = (50)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         for (int i = 0; i < array136.size; i++) {
            array136.data[i]--;
         }
         for (int i = 0; i < array136.size; i++) {
            if (array136.data[i] == 60) { 
               return array136;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      params0.data[0] = array136;
      array_t* array137 = func28(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array137.id);
      free(params0.data);
      array137.refC--;
      if(array137.refC == 0) {
         free(array137.data);
         free(array137);
         DEBUG_FREE(array137.id);
      }
      array136.refC--;
      if(array136.refC == 0) {
         free(array136.data);
         free(array136);
         DEBUG_FREE(array136.id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      array_t* array138 = func22(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array138.id);
      free(params0.data);
      array138.refC--;
      if(array138.refC == 0) {
         free(array138.data);
         free(array138);
         DEBUG_FREE(array138.id);
      }
   }
   array_t* array139;
   if (pCounter > 0) {
      array139 = vars.data[--pCounter];
      array139.refC++;
      DEBUG_COPY(array139.id);
   } else {
      array139 = cast(array_t*)malloc(array_t.sizeof);
      array139.size = 748;
      array139.refC = 1;
      array139.id = 139;
      array139.data = cast(uint*)malloc(array139.size*uint.sizeof);
      memset(array139.data, 0, array139.size*uint.sizeof);
      DEBUG_NEW(array139.id);
   }
   return array139;
}

