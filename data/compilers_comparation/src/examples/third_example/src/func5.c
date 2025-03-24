#include "third_example.h" 
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array81;
   if (pCounter > 0) {
      array81 = vars->data[--pCounter];
      array81->refC++;
      DEBUG_COPY(array81->id);
   } else {
      array81 = (array_t*)malloc(sizeof(array_t));
      array81->size = 131;
      array81->refC = 1;
      array81->id = 81;
      array81->data = (unsigned int*)malloc(array81->size*sizeof(unsigned int));
      memset(array81->data, 0, array81->size*sizeof(unsigned int));
      DEBUG_NEW(array81->id);
   }
   for (int i = 0; i < array81->size; i++) {
      array81->data[i]++;
   }
   for (int i = 0; i < array81->size; i++) {
      if (array81->data[i] == 33) { 
         return array81;
      }
   }
   for (int i = 0; i < array81->size; i++) {
      array81->data[i]--;
   }
   array_t* array82;
   if (pCounter > 0) {
      array82 = vars->data[--pCounter];
      array82->refC++;
      DEBUG_COPY(array82->id);
   } else {
      array82 = (array_t*)malloc(sizeof(array_t));
      array82->size = 660;
      array82->refC = 1;
      array82->id = 82;
      array82->data = (unsigned int*)malloc(array82->size*sizeof(unsigned int));
      memset(array82->data, 0, array82->size*sizeof(unsigned int));
      DEBUG_NEW(array82->id);
   }
   if(PATH0 & 1) {
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         array_t* array83;
         if (pCounter > 0) {
            array83 = vars->data[--pCounter];
            array83->refC++;
            DEBUG_COPY(array83->id);
         } else {
            array83 = (array_t*)malloc(sizeof(array_t));
            array83->size = 163;
            array83->refC = 1;
            array83->id = 83;
            array83->data = (unsigned int*)malloc(array83->size*sizeof(unsigned int));
            memset(array83->data, 0, array83->size*sizeof(unsigned int));
            DEBUG_NEW(array83->id);
         }
         for (int i = 0; i < array82->size; i++) {
            array82->data[i]--;
         }
         for (int i = 0; i < array83->size; i++) {
            if (array83->data[i] == 99) { 
               return array83;
            }
         }
         array83->refC--;
         if(array83->refC == 0) {
            free(array83->data);
            free(array83);
            DEBUG_FREE(array83->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array81;
      params0.data[1] = array82;
      array_t* array84 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array84->id);
      free(params0.data);
      array84->refC--;
      if(array84->refC == 0) {
         free(array84->data);
         free(array84);
         DEBUG_FREE(array84->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array81;
   params0.data[1] = array82;
   array_t* array91 = func13(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array91->id);
   free(params0.data);
   array82->refC--;
   if(array82->refC == 0) {
      free(array82->data);
      free(array82);
      DEBUG_FREE(array82->id);
   }
   array81->refC--;
   if(array81->refC == 0) {
      free(array81->data);
      free(array81);
      DEBUG_FREE(array81->id);
   }
   return array91;
}

