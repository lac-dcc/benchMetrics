module func16;
import program_d;

array_t* func16(array_t_param* vars, const ulong PATH0, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array91;
   if (pCounter > 0) {
      array91 = vars.data[--pCounter];
      array91.refC++;
      DEBUG_COPY(array91.id);
   } else {
      array91 = cast(array_t*)malloc(array_t.sizeof);
      array91.size = 445;
      array91.refC = 1;
      array91.id = 91;
      array91.data = cast(uint*)malloc(array91.size*uint.sizeof);
      memset(array91.data, 0, array91.size*uint.sizeof);
      DEBUG_NEW(array91.id);
   }
   uint loop28 = 0;
   uint loopLimit28 = (50)/3 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      if(PATH0 & 1) {
         array_t* array92;
         if (pCounter > 0) {
            array92 = vars.data[--pCounter];
            array92.refC++;
            DEBUG_COPY(array92.id);
         } else {
            array92 = cast(array_t*)malloc(array_t.sizeof);
            array92.size = 756;
            array92.refC = 1;
            array92.id = 92;
            array92.data = cast(uint*)malloc(array92.size*uint.sizeof);
            memset(array92.data, 0, array92.size*uint.sizeof);
            DEBUG_NEW(array92.id);
         }
         uint loop29 = 0;
         uint loopLimit29 = (50)/4 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            for (int i = 0; i < array92.size; i++) {
               array92.data[i]--;
            }
            for (int i = 0; i < array91.size; i++) {
               if (array91.data[i] == 87) { 
                  return array91;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
         params0.data[0] = array91;
         params0.data[1] = array92;
         array_t* array93 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array93.id);
         free(params0.data);
         array93.refC--;
         if(array93.refC == 0) {
            free(array93.data);
            free(array93);
            DEBUG_FREE(array93.id);
         }
         array92.refC--;
         if(array92.refC == 0) {
            free(array92.data);
            free(array92);
            DEBUG_FREE(array92.id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
         params0.data[0] = array91;
         array_t* array94 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array94.id);
         free(params0.data);
         array94.refC--;
         if(array94.refC == 0) {
            free(array94.data);
            free(array94);
            DEBUG_FREE(array94.id);
         }
      }
      array_t* array95;
      if (pCounter > 0) {
         array95 = vars.data[--pCounter];
         array95.refC++;
         DEBUG_COPY(array95.id);
      } else {
         array95 = cast(array_t*)malloc(array_t.sizeof);
         array95.size = 9;
         array95.refC = 1;
         array95.id = 95;
         array95.data = cast(uint*)malloc(array95.size*uint.sizeof);
         memset(array95.data, 0, array95.size*uint.sizeof);
         DEBUG_NEW(array95.id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      params0.data[0] = array91;
      params0.data[1] = array95;
      array_t* array96 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array96.id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array97;
         if (pCounter > 0) {
            array97 = vars.data[--pCounter];
            array97.refC++;
            DEBUG_COPY(array97.id);
         } else {
            array97 = cast(array_t*)malloc(array_t.sizeof);
            array97.size = 342;
            array97.refC = 1;
            array97.id = 97;
            array97.data = cast(uint*)malloc(array97.size*uint.sizeof);
            memset(array97.data, 0, array97.size*uint.sizeof);
            DEBUG_NEW(array97.id);
         }
         uint loop30 = 0;
         uint loopLimit30 = (50)/4 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            for (int i = 0; i < array97.size; i++) {
               array97.data[i]--;
            }
            for (int i = 0; i < array96.size; i++) {
               if (array96.data[i] == 1) { 
                  return array96;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
         params1.data[0] = array91;
         params1.data[1] = array95;
         params1.data[2] = array96;
         params1.data[3] = array97;
         array_t* array98 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array98.id);
         free(params1.data);
         array98.refC--;
         if(array98.refC == 0) {
            free(array98.data);
            free(array98);
            DEBUG_FREE(array98.id);
         }
         array97.refC--;
         if(array97.refC == 0) {
            free(array97.data);
            free(array97);
            DEBUG_FREE(array97.id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
         params1.data[0] = array91;
         params1.data[1] = array95;
         params1.data[2] = array96;
         array_t* array99 = func34(&params1, loopsFactor);
         DEBUG_RETURN(array99.id);
         free(params1.data);
         array99.refC--;
         if(array99.refC == 0) {
            free(array99.data);
            free(array99);
            DEBUG_FREE(array99.id);
         }
      }
      for (int i = 0; i < array96.size; i++) {
         if (array96.data[i] == 99) { 
            return array96;
         }
      }
      array96.refC--;
      if(array96.refC == 0) {
         free(array96.data);
         free(array96);
         DEBUG_FREE(array96.id);
      }
      array95.refC--;
      if(array95.refC == 0) {
         free(array95.data);
         free(array95);
         DEBUG_FREE(array95.id);
      }
   }
   for (int i = 0; i < array91.size; i++) {
      array91.data[i]--;
   }
   for (int i = 0; i < array91.size; i++) {
      if (array91.data[i] == 39) { 
         return array91;
      }
   }
   return array91;
}

