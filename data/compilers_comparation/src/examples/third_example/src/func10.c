#include "third_example.h" 
array_t* func10(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array124;
   if (pCounter > 0) {
      array124 = vars->data[--pCounter];
      array124->refC++;
      DEBUG_COPY(array124->id);
   } else {
      array124 = (array_t*)malloc(sizeof(array_t));
      array124->size = 303;
      array124->refC = 1;
      array124->id = 124;
      array124->data = (unsigned int*)malloc(array124->size*sizeof(unsigned int));
      memset(array124->data, 0, array124->size*sizeof(unsigned int));
      DEBUG_NEW(array124->id);
   }
   for (int i = 0; i < array124->size; i++) {
      array124->data[i]++;
   }
   for (int i = 0; i < array124->size; i++) {
      if (array124->data[i] == 48) { 
         return array124;
      }
   }
   for (int i = 0; i < array124->size; i++) {
      array124->data[i]--;
   }
   array_t* array125;
   if (pCounter > 0) {
      array125 = vars->data[--pCounter];
      array125->refC++;
      DEBUG_COPY(array125->id);
   } else {
      array125 = (array_t*)malloc(sizeof(array_t));
      array125->size = 754;
      array125->refC = 1;
      array125->id = 125;
      array125->data = (unsigned int*)malloc(array125->size*sizeof(unsigned int));
      memset(array125->data, 0, array125->size*sizeof(unsigned int));
      DEBUG_NEW(array125->id);
   }
   if(PATH0 & 1) {
      unsigned int loop51 = 0;
      unsigned int loopLimit51 = (rand()%loopsFactor)/2 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         array_t* array126;
         if (pCounter > 0) {
            array126 = vars->data[--pCounter];
            array126->refC++;
            DEBUG_COPY(array126->id);
         } else {
            array126 = (array_t*)malloc(sizeof(array_t));
            array126->size = 567;
            array126->refC = 1;
            array126->id = 126;
            array126->data = (unsigned int*)malloc(array126->size*sizeof(unsigned int));
            memset(array126->data, 0, array126->size*sizeof(unsigned int));
            DEBUG_NEW(array126->id);
         }
         for (int i = 0; i < array124->size; i++) {
            array124->data[i]--;
         }
         for (int i = 0; i < array126->size; i++) {
            if (array126->data[i] == 29) { 
               return array126;
            }
         }
         array126->refC--;
         if(array126->refC == 0) {
            free(array126->data);
            free(array126);
            DEBUG_FREE(array126->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array124;
      params0.data[1] = array125;
      array_t* array127 = func18(&params0, loopsFactor);
      DEBUG_RETURN(array127->id);
      free(params0.data);
      array127->refC--;
      if(array127->refC == 0) {
         free(array127->data);
         free(array127);
         DEBUG_FREE(array127->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array124;
   params0.data[1] = array125;
   array_t* array128 = func15(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array128->id);
   free(params0.data);
   array125->refC--;
   if(array125->refC == 0) {
      free(array125->data);
      free(array125);
      DEBUG_FREE(array125->id);
   }
   array124->refC--;
   if(array124->refC == 0) {
      free(array124->data);
      free(array124);
      DEBUG_FREE(array124->id);
   }
   return array128;
}

