#include "second_example.h" 
array_t* func35(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array76;
   if (pCounter > 0) {
      array76 = vars->data[--pCounter];
      array76->refC++;
      DEBUG_COPY(array76->id);
   } else {
      array76 = (array_t*)malloc(sizeof(array_t));
      array76->size = 522;
      array76->refC = 1;
      array76->id = 76;
      array76->data = (unsigned int*)malloc(array76->size*sizeof(unsigned int));
      memset(array76->data, 0, array76->size*sizeof(unsigned int));
      DEBUG_NEW(array76->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array76;
   array_t* array77 = func42(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array77->id);
   free(params0.data);
   unsigned int loop24 = 0;
   unsigned int loopLimit24 = (rand()%loopsFactor)/4 + 1;
   for(; loop24 < loopLimit24; loop24++) {
      for (int i = 0; i < array76->size; i++) {
         array76->data[i]++;
      }
   }
   for (int i = 0; i < array76->size; i++) {
      if (array76->data[i] == 58) { 
         return array76;
      }
   }
   array77->refC--;
   if(array77->refC == 0) {
      free(array77->data);
      free(array77);
      DEBUG_FREE(array77->id);
   }
   return array76;
}

