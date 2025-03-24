#include "second_example.h" 
array_t* func3(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array259;
   if (pCounter > 0) {
      array259 = vars->data[--pCounter];
      array259->refC++;
      DEBUG_COPY(array259->id);
   } else {
      array259 = (array_t*)malloc(sizeof(array_t));
      array259->size = 269;
      array259->refC = 1;
      array259->id = 259;
      array259->data = (unsigned int*)malloc(array259->size*sizeof(unsigned int));
      memset(array259->data, 0, array259->size*sizeof(unsigned int));
      DEBUG_NEW(array259->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array259;
   array_t* array260 = func6(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array260->id);
   free(params0.data);
   unsigned int loop74 = 0;
   unsigned int loopLimit74 = (rand()%loopsFactor)/2 + 1;
   for(; loop74 < loopLimit74; loop74++) {
      for (int i = 0; i < array260->size; i++) {
         array260->data[i]++;
      }
   }
   for (int i = 0; i < array260->size; i++) {
      if (array260->data[i] == 33) { 
         return array260;
      }
   }
   array259->refC--;
   if(array259->refC == 0) {
      free(array259->data);
      free(array259);
      DEBUG_FREE(array259->id);
   }
   return array260;
}

