#include "fourth_example.h" 
array_t* func3(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array194;
   if (pCounter > 0) {
      array194 = vars->data[--pCounter];
      array194->refC++;
      DEBUG_COPY(array194->id);
   } else {
      array194 = (array_t*)malloc(sizeof(array_t));
      array194->size = 231;
      array194->refC = 1;
      array194->id = 194;
      array194->data = (unsigned int*)malloc(array194->size*sizeof(unsigned int));
      memset(array194->data, 0, array194->size*sizeof(unsigned int));
      DEBUG_NEW(array194->id);
   }
   for (int i = 0; i < array194->size; i++) {
      array194->data[i]++;
   }
   for (int i = 0; i < array194->size; i++) {
      if (array194->data[i] == 40) { 
         return array194;
      }
   }
   for (int i = 0; i < array194->size; i++) {
      array194->data[i]--;
   }
   array_t* array195;
   if (pCounter > 0) {
      array195 = vars->data[--pCounter];
      array195->refC++;
      DEBUG_COPY(array195->id);
   } else {
      array195 = (array_t*)malloc(sizeof(array_t));
      array195->size = 30;
      array195->refC = 1;
      array195->id = 195;
      array195->data = (unsigned int*)malloc(array195->size*sizeof(unsigned int));
      memset(array195->data, 0, array195->size*sizeof(unsigned int));
      DEBUG_NEW(array195->id);
   }
   if(PATH0 & 1) {
      unsigned int loop76 = 0;
      unsigned int loopLimit76 = (rand()%loopsFactor)/2 + 1;
      for(; loop76 < loopLimit76; loop76++) {
         array_t* array196;
         if (pCounter > 0) {
            array196 = vars->data[--pCounter];
            array196->refC++;
            DEBUG_COPY(array196->id);
         } else {
            array196 = (array_t*)malloc(sizeof(array_t));
            array196->size = 98;
            array196->refC = 1;
            array196->id = 196;
            array196->data = (unsigned int*)malloc(array196->size*sizeof(unsigned int));
            memset(array196->data, 0, array196->size*sizeof(unsigned int));
            DEBUG_NEW(array196->id);
         }
         for (int i = 0; i < array196->size; i++) {
            array196->data[i]--;
         }
         for (int i = 0; i < array195->size; i++) {
            if (array195->data[i] == 16) { 
               return array195;
            }
         }
         array196->refC--;
         if(array196->refC == 0) {
            free(array196->data);
            free(array196);
            DEBUG_FREE(array196->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array194;
      params0.data[1] = array195;
      array_t* array197 = func11(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array197->id);
      free(params0.data);
      array197->refC--;
      if(array197->refC == 0) {
         free(array197->data);
         free(array197);
         DEBUG_FREE(array197->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array194;
   params0.data[1] = array195;
   array_t* array198 = func8(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array198->id);
   free(params0.data);
   array195->refC--;
   if(array195->refC == 0) {
      free(array195->data);
      free(array195);
      DEBUG_FREE(array195->id);
   }
   array194->refC--;
   if(array194->refC == 0) {
      free(array194->data);
      free(array194);
      DEBUG_FREE(array194->id);
   }
   return array198;
}

