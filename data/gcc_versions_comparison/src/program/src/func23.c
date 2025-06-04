#include "program.h" 
array_t* func23(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array45;
   if (pCounter > 0) {
      array45 = vars->data[--pCounter];
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = (array_t*)malloc(sizeof(array_t));
      array45->size = 555;
      array45->refC = 1;
      array45->id = 45;
      array45->data = (unsigned int*)malloc(array45->size*sizeof(unsigned int));
      memset(array45->data, 0, array45->size*sizeof(unsigned int));
      DEBUG_NEW(array45->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array45;
   array_t* array46 = func28(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array46->id);
   free(params0.data);
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/4 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array45->size; i++) {
         array45->data[i]++;
      }
   }
   for (int i = 0; i < array45->size; i++) {
      if (array45->data[i] == 41) { 
         return array45;
      }
   }
   array46->refC--;
   if(array46->refC == 0) {
      free(array46->data);
      free(array46);
      DEBUG_FREE(array46->id);
   }
   return array45;
}

