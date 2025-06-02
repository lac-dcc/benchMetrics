#include "second_example.h" 
array_t* func51(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array59;
   if (pCounter > 0) {
      array59 = vars->data[--pCounter];
      array59->refC++;
      DEBUG_COPY(array59->id);
   } else {
      array59 = (array_t*)malloc(sizeof(array_t));
      array59->size = 606;
      array59->refC = 1;
      array59->id = 59;
      array59->data = (unsigned int*)malloc(array59->size*sizeof(unsigned int));
      memset(array59->data, 0, array59->size*sizeof(unsigned int));
      DEBUG_NEW(array59->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array59;
   array_t* array60 = func54(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array60->id);
   free(params0.data);
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/4 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      for (int i = 0; i < array59->size; i++) {
         array59->data[i]++;
      }
   }
   for (int i = 0; i < array59->size; i++) {
      if (array59->data[i] == 88) { 
         return array59;
      }
   }
   array59->refC--;
   if(array59->refC == 0) {
      free(array59->data);
      free(array59);
      DEBUG_FREE(array59->id);
   }
   return array60;
}

