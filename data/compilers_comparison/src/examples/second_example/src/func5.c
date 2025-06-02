#include "second_example.h" 
array_t* func5(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array185;
   if (pCounter > 0) {
      array185 = vars->data[--pCounter];
      array185->refC++;
      DEBUG_COPY(array185->id);
   } else {
      array185 = (array_t*)malloc(sizeof(array_t));
      array185->size = 459;
      array185->refC = 1;
      array185->id = 185;
      array185->data = (unsigned int*)malloc(array185->size*sizeof(unsigned int));
      memset(array185->data, 0, array185->size*sizeof(unsigned int));
      DEBUG_NEW(array185->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array185;
   array_t* array186 = func10(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array186->id);
   free(params0.data);
   unsigned int loop54 = 0;
   unsigned int loopLimit54 = (rand()%loopsFactor)/3 + 1;
   for(; loop54 < loopLimit54; loop54++) {
      for (int i = 0; i < array186->size; i++) {
         array186->data[i]++;
      }
   }
   for (int i = 0; i < array185->size; i++) {
      if (array185->data[i] == 74) { 
         return array185;
      }
   }
   array185->refC--;
   if(array185->refC == 0) {
      free(array185->data);
      free(array185);
      DEBUG_FREE(array185->id);
   }
   return array186;
}

