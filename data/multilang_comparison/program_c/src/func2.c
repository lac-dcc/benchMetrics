#include "program_c.h" 
array_t* func2(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array183;
   if (pCounter > 0) {
      array183 = vars->data[--pCounter];
      array183->refC++;
      DEBUG_COPY(array183->id);
   } else {
      array183 = (array_t*)malloc(sizeof(array_t));
      array183->size = 483;
      array183->refC = 1;
      array183->id = 183;
      array183->data = (unsigned int*)malloc(array183->size*sizeof(unsigned int));
      memset(array183->data, 0, array183->size*sizeof(unsigned int));
      DEBUG_NEW(array183->id);
   }
   unsigned int loop53 = 0;
   unsigned int loopLimit53 = (50)/2 + 1;
   for(; loop53 < loopLimit53; loop53++) {
      if(PATH0 & 1) {
         array_t* array184;
         if (pCounter > 0) {
            array184 = vars->data[--pCounter];
            array184->refC++;
            DEBUG_COPY(array184->id);
         } else {
            array184 = (array_t*)malloc(sizeof(array_t));
            array184->size = 607;
            array184->refC = 1;
            array184->id = 184;
            array184->data = (unsigned int*)malloc(array184->size*sizeof(unsigned int));
            memset(array184->data, 0, array184->size*sizeof(unsigned int));
            DEBUG_NEW(array184->id);
         }
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (50)/3 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            for (int i = 0; i < array183->size; i++) {
               array183->data[i]--;
            }
            for (int i = 0; i < array184->size; i++) {
               if (array184->data[i] == 14) { 
                  return array184;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array183;
         params0.data[1] = array184;
         array_t* array185 = func18(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array185->id);
         free(params0.data);
         array185->refC--;
         if(array185->refC == 0) {
            free(array185->data);
            free(array185);
            DEBUG_FREE(array185->id);
         }
         array184->refC--;
         if(array184->refC == 0) {
            free(array184->data);
            free(array184);
            DEBUG_FREE(array184->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array183;
         array_t* array186 = func14(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array186->id);
         free(params0.data);
         array186->refC--;
         if(array186->refC == 0) {
            free(array186->data);
            free(array186);
            DEBUG_FREE(array186->id);
         }
      }
      array_t* array187;
      if (pCounter > 0) {
         array187 = vars->data[--pCounter];
         array187->refC++;
         DEBUG_COPY(array187->id);
      } else {
         array187 = (array_t*)malloc(sizeof(array_t));
         array187->size = 618;
         array187->refC = 1;
         array187->id = 187;
         array187->data = (unsigned int*)malloc(array187->size*sizeof(unsigned int));
         memset(array187->data, 0, array187->size*sizeof(unsigned int));
         DEBUG_NEW(array187->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array183;
      params0.data[1] = array187;
      array_t* array188 = func15(&params0, loopsFactor);
      DEBUG_RETURN(array188->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array189;
         if (pCounter > 0) {
            array189 = vars->data[--pCounter];
            array189->refC++;
            DEBUG_COPY(array189->id);
         } else {
            array189 = (array_t*)malloc(sizeof(array_t));
            array189->size = 388;
            array189->refC = 1;
            array189->id = 189;
            array189->data = (unsigned int*)malloc(array189->size*sizeof(unsigned int));
            memset(array189->data, 0, array189->size*sizeof(unsigned int));
            DEBUG_NEW(array189->id);
         }
         unsigned int loop55 = 0;
         unsigned int loopLimit55 = (50)/3 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            for (int i = 0; i < array188->size; i++) {
               array188->data[i]--;
            }
            for (int i = 0; i < array187->size; i++) {
               if (array187->data[i] == 57) { 
                  return array187;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array183;
         params1.data[1] = array187;
         params1.data[2] = array188;
         params1.data[3] = array189;
         array_t* array190 = func24(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array190->id);
         free(params1.data);
         array190->refC--;
         if(array190->refC == 0) {
            free(array190->data);
            free(array190);
            DEBUG_FREE(array190->id);
         }
         array189->refC--;
         if(array189->refC == 0) {
            free(array189->data);
            free(array189);
            DEBUG_FREE(array189->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array183;
         params1.data[1] = array187;
         params1.data[2] = array188;
         array_t* array191 = func16(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array191->id);
         free(params1.data);
         array191->refC--;
         if(array191->refC == 0) {
            free(array191->data);
            free(array191);
            DEBUG_FREE(array191->id);
         }
      }
      for (int i = 0; i < array187->size; i++) {
         if (array187->data[i] == 17) { 
            return array187;
         }
      }
      array188->refC--;
      if(array188->refC == 0) {
         free(array188->data);
         free(array188);
         DEBUG_FREE(array188->id);
      }
      array187->refC--;
      if(array187->refC == 0) {
         free(array187->data);
         free(array187);
         DEBUG_FREE(array187->id);
      }
   }
   for (int i = 0; i < array183->size; i++) {
      array183->data[i]--;
   }
   for (int i = 0; i < array183->size; i++) {
      if (array183->data[i] == 63) { 
         return array183;
      }
   }
   return array183;
}

