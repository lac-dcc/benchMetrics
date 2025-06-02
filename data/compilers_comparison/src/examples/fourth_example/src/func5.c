#include "fourth_example.h" 
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array135;
   if (pCounter > 0) {
      array135 = vars->data[--pCounter];
      array135->refC++;
      DEBUG_COPY(array135->id);
   } else {
      array135 = (array_t*)malloc(sizeof(array_t));
      array135->size = 921;
      array135->refC = 1;
      array135->id = 135;
      array135->data = (unsigned int*)malloc(array135->size*sizeof(unsigned int));
      memset(array135->data, 0, array135->size*sizeof(unsigned int));
      DEBUG_NEW(array135->id);
   }
   for (int i = 0; i < array135->size; i++) {
      array135->data[i]++;
   }
   for (int i = 0; i < array135->size; i++) {
      if (array135->data[i] == 28) { 
         return array135;
      }
   }
   for (int i = 0; i < array135->size; i++) {
      array135->data[i]--;
   }
   array_t* array136;
   if (pCounter > 0) {
      array136 = vars->data[--pCounter];
      array136->refC++;
      DEBUG_COPY(array136->id);
   } else {
      array136 = (array_t*)malloc(sizeof(array_t));
      array136->size = 50;
      array136->refC = 1;
      array136->id = 136;
      array136->data = (unsigned int*)malloc(array136->size*sizeof(unsigned int));
      memset(array136->data, 0, array136->size*sizeof(unsigned int));
      DEBUG_NEW(array136->id);
   }
   if(PATH0 & 1) {
      unsigned int loop53 = 0;
      unsigned int loopLimit53 = (rand()%loopsFactor)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         array_t* array137;
         if (pCounter > 0) {
            array137 = vars->data[--pCounter];
            array137->refC++;
            DEBUG_COPY(array137->id);
         } else {
            array137 = (array_t*)malloc(sizeof(array_t));
            array137->size = 748;
            array137->refC = 1;
            array137->id = 137;
            array137->data = (unsigned int*)malloc(array137->size*sizeof(unsigned int));
            memset(array137->data, 0, array137->size*sizeof(unsigned int));
            DEBUG_NEW(array137->id);
         }
         for (int i = 0; i < array136->size; i++) {
            array136->data[i]--;
         }
         for (int i = 0; i < array137->size; i++) {
            if (array137->data[i] == 94) { 
               return array137;
            }
         }
         array137->refC--;
         if(array137->refC == 0) {
            free(array137->data);
            free(array137);
            DEBUG_FREE(array137->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array135;
      params0.data[1] = array136;
      array_t* array138 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array138->id);
      free(params0.data);
      array138->refC--;
      if(array138->refC == 0) {
         free(array138->data);
         free(array138);
         DEBUG_FREE(array138->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array135;
   params0.data[1] = array136;
   array_t* array145 = func13(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array145->id);
   free(params0.data);
   array136->refC--;
   if(array136->refC == 0) {
      free(array136->data);
      free(array136);
      DEBUG_FREE(array136->id);
   }
   array135->refC--;
   if(array135->refC == 0) {
      free(array135->data);
      free(array135);
      DEBUG_FREE(array135->id);
   }
   return array145;
}

