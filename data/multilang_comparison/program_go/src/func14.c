#include "program_go.h" 
array_t* func14(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array179;
   if (pCounter > 0) {
      array179 = vars->data[--pCounter];
      array179->refC++;
      DEBUG_COPY(array179->id);
   } else {
      array179 = (array_t*)malloc(sizeof(array_t));
      array179->size = 237;
      array179->refC = 1;
      array179->id = 179;
      array179->data = (unsigned int*)malloc(array179->size*sizeof(unsigned int));
      memset(array179->data, 0, array179->size*sizeof(unsigned int));
      DEBUG_NEW(array179->id);
   }
   unsigned int loop52 = 0;
   unsigned int loopLimit52 = (rand()%loopsFactor)/3 + 1;
   for(; loop52 < loopLimit52; loop52++) {
      if(PATH0 & 1) {
         array_t* array180;
         if (pCounter > 0) {
            array180 = vars->data[--pCounter];
            array180->refC++;
            DEBUG_COPY(array180->id);
         } else {
            array180 = (array_t*)malloc(sizeof(array_t));
            array180->size = 205;
            array180->refC = 1;
            array180->id = 180;
            array180->data = (unsigned int*)malloc(array180->size*sizeof(unsigned int));
            memset(array180->data, 0, array180->size*sizeof(unsigned int));
            DEBUG_NEW(array180->id);
         }
         unsigned int loop53 = 0;
         unsigned int loopLimit53 = (rand()%loopsFactor)/4 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            for (int i = 0; i < array180->size; i++) {
               array180->data[i]--;
            }
            for (int i = 0; i < array180->size; i++) {
               if (array180->data[i] == 18) { 
                  return array180;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array179;
         params0.data[1] = array180;
         array_t* array181 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array181->id);
         free(params0.data);
         array181->refC--;
         if(array181->refC == 0) {
            free(array181->data);
            free(array181);
            DEBUG_FREE(array181->id);
         }
         array180->refC--;
         if(array180->refC == 0) {
            free(array180->data);
            free(array180);
            DEBUG_FREE(array180->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array179;
         array_t* array182 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array182->id);
         free(params0.data);
         array182->refC--;
         if(array182->refC == 0) {
            free(array182->data);
            free(array182);
            DEBUG_FREE(array182->id);
         }
      }
      array_t* array183;
      if (pCounter > 0) {
         array183 = vars->data[--pCounter];
         array183->refC++;
         DEBUG_COPY(array183->id);
      } else {
         array183 = (array_t*)malloc(sizeof(array_t));
         array183->size = 873;
         array183->refC = 1;
         array183->id = 183;
         array183->data = (unsigned int*)malloc(array183->size*sizeof(unsigned int));
         memset(array183->data, 0, array183->size*sizeof(unsigned int));
         DEBUG_NEW(array183->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array179;
      params0.data[1] = array183;
      array_t* array184 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array184->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array185;
         if (pCounter > 0) {
            array185 = vars->data[--pCounter];
            array185->refC++;
            DEBUG_COPY(array185->id);
         } else {
            array185 = (array_t*)malloc(sizeof(array_t));
            array185->size = 483;
            array185->refC = 1;
            array185->id = 185;
            array185->data = (unsigned int*)malloc(array185->size*sizeof(unsigned int));
            memset(array185->data, 0, array185->size*sizeof(unsigned int));
            DEBUG_NEW(array185->id);
         }
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (rand()%loopsFactor)/4 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            for (int i = 0; i < array185->size; i++) {
               array185->data[i]--;
            }
            for (int i = 0; i < array184->size; i++) {
               if (array184->data[i] == 57) { 
                  return array184;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array179;
         params1.data[1] = array183;
         params1.data[2] = array184;
         params1.data[3] = array185;
         array_t* array186 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array186->id);
         free(params1.data);
         array186->refC--;
         if(array186->refC == 0) {
            free(array186->data);
            free(array186);
            DEBUG_FREE(array186->id);
         }
         array185->refC--;
         if(array185->refC == 0) {
            free(array185->data);
            free(array185);
            DEBUG_FREE(array185->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array179;
         params1.data[1] = array183;
         params1.data[2] = array184;
         array_t* array187 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array187->id);
         free(params1.data);
         array187->refC--;
         if(array187->refC == 0) {
            free(array187->data);
            free(array187);
            DEBUG_FREE(array187->id);
         }
      }
      for (int i = 0; i < array183->size; i++) {
         if (array183->data[i] == 18) { 
            return array183;
         }
      }
      array184->refC--;
      if(array184->refC == 0) {
         free(array184->data);
         free(array184);
         DEBUG_FREE(array184->id);
      }
      array183->refC--;
      if(array183->refC == 0) {
         free(array183->data);
         free(array183);
         DEBUG_FREE(array183->id);
      }
   }
   for (int i = 0; i < array179->size; i++) {
      array179->data[i]--;
   }
   for (int i = 0; i < array179->size; i++) {
      if (array179->data[i] == 88) { 
         return array179;
      }
   }
   return array179;
}

