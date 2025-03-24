#include "second_example.h" 
array_t* func17(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array168;
   if (pCounter > 0) {
      array168 = vars->data[--pCounter];
      array168->refC++;
      DEBUG_COPY(array168->id);
   } else {
      array168 = (array_t*)malloc(sizeof(array_t));
      array168->size = 80;
      array168->refC = 1;
      array168->id = 168;
      array168->data = (unsigned int*)malloc(array168->size*sizeof(unsigned int));
      memset(array168->data, 0, array168->size*sizeof(unsigned int));
      DEBUG_NEW(array168->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array168;
   array_t* array169 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array169->id);
   free(params0.data);
   unsigned int loop49 = 0;
   unsigned int loopLimit49 = (rand()%loopsFactor)/3 + 1;
   for(; loop49 < loopLimit49; loop49++) {
      for (int i = 0; i < array169->size; i++) {
         array169->data[i]++;
      }
   }
   for (int i = 0; i < array169->size; i++) {
      if (array169->data[i] == 12) { 
         return array169;
      }
   }
   array169->refC--;
   if(array169->refC == 0) {
      free(array169->data);
      free(array169);
      DEBUG_FREE(array169->id);
   }
   return array168;
}

