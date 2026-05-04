module func8;
import program_d;

array_t* func8(array_t_param* vars, const ulong PATH0, int loopsFactor) {
   size_t pCounter = vars.size;
   if(PATH0 & 1) {
      array_t* array170;
      if (pCounter > 0) {
         array170 = vars.data[--pCounter];
         array170.refC++;
         DEBUG_COPY(array170.id);
      } else {
         array170 = cast(array_t*)malloc(array_t.sizeof);
         array170.size = 627;
         array170.refC = 1;
         array170.id = 170;
         array170.data = cast(uint*)malloc(array170.size*uint.sizeof);
         memset(array170.data, 0, array170.size*uint.sizeof);
         DEBUG_NEW(array170.id);
      }
      uint loop50 = 0;
      uint loopLimit50 = (50)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array170.size; i++) {
            array170.data[i]--;
         }
         for (int i = 0; i < array170.size; i++) {
            if (array170.data[i] == 14) { 
               return array170;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      params0.data[0] = array170;
      array_t* array171 = func18(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array171.id);
      free(params0.data);
      array171.refC--;
      if(array171.refC == 0) {
         free(array171.data);
         free(array171);
         DEBUG_FREE(array171.id);
      }
      array170.refC--;
      if(array170.refC == 0) {
         free(array170.data);
         free(array170);
         DEBUG_FREE(array170.id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      array_t* array172 = func14(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array172.id);
      free(params0.data);
      array172.refC--;
      if(array172.refC == 0) {
         free(array172.data);
         free(array172);
         DEBUG_FREE(array172.id);
      }
   }
   array_t* array173;
   if (pCounter > 0) {
      array173 = vars.data[--pCounter];
      array173.refC++;
      DEBUG_COPY(array173.id);
   } else {
      array173 = cast(array_t*)malloc(array_t.sizeof);
      array173.size = 479;
      array173.refC = 1;
      array173.id = 173;
      array173.data = cast(uint*)malloc(array173.size*uint.sizeof);
      memset(array173.data, 0, array173.size*uint.sizeof);
      DEBUG_NEW(array173.id);
   }
   return array173;
}

