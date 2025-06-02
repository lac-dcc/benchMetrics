#include "second_example.h" 
array_t* func23(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array93;
   if (pCounter > 0) {
      array93 = vars->data[--pCounter];
      array93->refC++;
      DEBUG_COPY(array93->id);
   } else {
      array93 = (array_t*)malloc(sizeof(array_t));
      array93->size = 348;
      array93->refC = 1;
      array93->id = 93;
      array93->data = (unsigned int*)malloc(array93->size*sizeof(unsigned int));
      memset(array93->data, 0, array93->size*sizeof(unsigned int));
      DEBUG_NEW(array93->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array93;
   array_t* array94 = func28(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array94->id);
   free(params0.data);
   unsigned int loop29 = 0;
   unsigned int loopLimit29 = (rand()%loopsFactor)/4 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      for (int i = 0; i < array94->size; i++) {
         array94->data[i]++;
      }
   }
   for (int i = 0; i < array93->size; i++) {
      if (array93->data[i] == 10) { 
         return array93;
      }
   }
   array94->refC--;
   if(array94->refC == 0) {
      free(array94->data);
      free(array94);
      DEBUG_FREE(array94->id);
   }
   return array93;
}

