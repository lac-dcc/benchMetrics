module func19;
import program_d;

array_t* func19(array_t_param* vars, const ulong PATH0, int loopsFactor) {
   size_t pCounter = vars.size;
   uint loop38 = 0;
   uint loopLimit38 = (50)/3 + 1;
   for(; loop38 < loopLimit38; loop38++) {
      if(PATH0 & 1) {
         array_t* array126;
         if (pCounter > 0) {
            array126 = vars.data[--pCounter];
            array126.refC++;
            DEBUG_COPY(array126.id);
         } else {
            array126 = cast(array_t*)malloc(array_t.sizeof);
            array126.size = 890;
            array126.refC = 1;
            array126.id = 126;
            array126.data = cast(uint*)malloc(array126.size*uint.sizeof);
            memset(array126.data, 0, array126.size*uint.sizeof);
            DEBUG_NEW(array126.id);
         }
         uint loop39 = 0;
         uint loopLimit39 = (50)/4 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            for (int i = 0; i < array126.size; i++) {
               array126.data[i]--;
            }
            for (int i = 0; i < array126.size; i++) {
               if (array126.data[i] == 46) { 
                  return array126;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
         params0.data[0] = array126;
         array_t* array127 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array127.id);
         free(params0.data);
         array127.refC--;
         if(array127.refC == 0) {
            free(array127.data);
            free(array127);
            DEBUG_FREE(array127.id);
         }
         array126.refC--;
         if(array126.refC == 0) {
            free(array126.data);
            free(array126);
            DEBUG_FREE(array126.id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
         array_t* array128 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array128.id);
         free(params0.data);
         array128.refC--;
         if(array128.refC == 0) {
            free(array128.data);
            free(array128);
            DEBUG_FREE(array128.id);
         }
      }
      array_t* array129;
      if (pCounter > 0) {
         array129 = vars.data[--pCounter];
         array129.refC++;
         DEBUG_COPY(array129.id);
      } else {
         array129 = cast(array_t*)malloc(array_t.sizeof);
         array129.size = 788;
         array129.refC = 1;
         array129.id = 129;
         array129.data = cast(uint*)malloc(array129.size*uint.sizeof);
         memset(array129.data, 0, array129.size*uint.sizeof);
         DEBUG_NEW(array129.id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      params0.data[0] = array129;
      array_t* array130 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array130.id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array131;
         if (pCounter > 0) {
            array131 = vars.data[--pCounter];
            array131.refC++;
            DEBUG_COPY(array131.id);
         } else {
            array131 = cast(array_t*)malloc(array_t.sizeof);
            array131.size = 990;
            array131.refC = 1;
            array131.id = 131;
            array131.data = cast(uint*)malloc(array131.size*uint.sizeof);
            memset(array131.data, 0, array131.size*uint.sizeof);
            DEBUG_NEW(array131.id);
         }
         uint loop40 = 0;
         uint loopLimit40 = (50)/4 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            for (int i = 0; i < array130.size; i++) {
               array130.data[i]--;
            }
            for (int i = 0; i < array130.size; i++) {
               if (array130.data[i] == 63) { 
                  return array130;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
         params1.data[0] = array129;
         params1.data[1] = array130;
         params1.data[2] = array131;
         array_t* array132 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array132.id);
         free(params1.data);
         array132.refC--;
         if(array132.refC == 0) {
            free(array132.data);
            free(array132);
            DEBUG_FREE(array132.id);
         }
         array131.refC--;
         if(array131.refC == 0) {
            free(array131.data);
            free(array131);
            DEBUG_FREE(array131.id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
         params1.data[0] = array129;
         params1.data[1] = array130;
         array_t* array133 = func34(&params1, loopsFactor);
         DEBUG_RETURN(array133.id);
         free(params1.data);
         array133.refC--;
         if(array133.refC == 0) {
            free(array133.data);
            free(array133);
            DEBUG_FREE(array133.id);
         }
      }
      for (int i = 0; i < array130.size; i++) {
         if (array130.data[i] == 52) { 
            return array130;
         }
      }
      array130.refC--;
      if(array130.refC == 0) {
         free(array130.data);
         free(array130);
         DEBUG_FREE(array130.id);
      }
      array129.refC--;
      if(array129.refC == 0) {
         free(array129.data);
         free(array129);
         DEBUG_FREE(array129.id);
      }
   }
   array_t* array134;
   if (pCounter > 0) {
      array134 = vars.data[--pCounter];
      array134.refC++;
      DEBUG_COPY(array134.id);
   } else {
      array134 = cast(array_t*)malloc(array_t.sizeof);
      array134.size = 996;
      array134.refC = 1;
      array134.id = 134;
      array134.data = cast(uint*)malloc(array134.size*uint.sizeof);
      memset(array134.data, 0, array134.size*uint.sizeof);
      DEBUG_NEW(array134.id);
   }
   return array134;
}

