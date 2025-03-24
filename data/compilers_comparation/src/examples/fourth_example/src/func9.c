#include "fourth_example.h" 
array_t* func9(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array165;
   if (pCounter > 0) {
      array165 = vars->data[--pCounter];
      array165->refC++;
      DEBUG_COPY(array165->id);
   } else {
      array165 = (array_t*)malloc(sizeof(array_t));
      array165->size = 80;
      array165->refC = 1;
      array165->id = 165;
      array165->data = (unsigned int*)malloc(array165->size*sizeof(unsigned int));
      memset(array165->data, 0, array165->size*sizeof(unsigned int));
      DEBUG_NEW(array165->id);
   }
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      for (int i = 0; i < array165->size; i++) {
         array165->data[i]--;
      }
   }
   array_t* array166;
   if (pCounter > 0) {
      array166 = vars->data[--pCounter];
      array166->refC++;
      DEBUG_COPY(array166->id);
   } else {
      array166 = (array_t*)malloc(sizeof(array_t));
      array166->size = 593;
      array166->refC = 1;
      array166->id = 166;
      array166->data = (unsigned int*)malloc(array166->size*sizeof(unsigned int));
      memset(array166->data, 0, array166->size*sizeof(unsigned int));
      DEBUG_NEW(array166->id);
   }
   if(PATH0 & 1) {
      unsigned int loop66 = 0;
      unsigned int loopLimit66 = (rand()%loopsFactor)/2 + 1;
      for(; loop66 < loopLimit66; loop66++) {
         array_t* array167;
         if (pCounter > 0) {
            array167 = vars->data[--pCounter];
            array167->refC++;
            DEBUG_COPY(array167->id);
         } else {
            array167 = (array_t*)malloc(sizeof(array_t));
            array167->size = 857;
            array167->refC = 1;
            array167->id = 167;
            array167->data = (unsigned int*)malloc(array167->size*sizeof(unsigned int));
            memset(array167->data, 0, array167->size*sizeof(unsigned int));
            DEBUG_NEW(array167->id);
         }
         for (int i = 0; i < array166->size; i++) {
            array166->data[i]--;
         }
         for (int i = 0; i < array167->size; i++) {
            if (array167->data[i] == 86) { 
               return array167;
            }
         }
         array167->refC--;
         if(array167->refC == 0) {
            free(array167->data);
            free(array167);
            DEBUG_FREE(array167->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array165;
      params0.data[1] = array166;
      array_t* array168 = func18(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array168->id);
      free(params0.data);
      array168->refC--;
      if(array168->refC == 0) {
         free(array168->data);
         free(array168);
         DEBUG_FREE(array168->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array165;
   params0.data[1] = array166;
   array_t* array169 = func15(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array169->id);
   free(params0.data);
   unsigned int loop67 = 0;
   unsigned int loopLimit67 = (rand()%loopsFactor)/2 + 1;
   for(; loop67 < loopLimit67; loop67++) {
      for (int i = 0; i < array165->size; i++) {
         array165->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array165;
   params1.data[1] = array166;
   params1.data[2] = array169;
   array_t* array170 = func12(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array170->id);
   free(params1.data);
   for (int i = 0; i < array166->size; i++) {
      if (array166->data[i] == 89) { 
         return array166;
      }
   }
   array170->refC--;
   if(array170->refC == 0) {
      free(array170->data);
      free(array170);
      DEBUG_FREE(array170->id);
   }
   array166->refC--;
   if(array166->refC == 0) {
      free(array166->data);
      free(array166);
      DEBUG_FREE(array166->id);
   }
   array165->refC--;
   if(array165->refC == 0) {
      free(array165->data);
      free(array165);
      DEBUG_FREE(array165->id);
   }
   return array169;
}

