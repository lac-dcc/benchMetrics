#include "third_example.h" 
array_t* func19(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array52;
   if (pCounter > 0) {
      array52 = vars->data[--pCounter];
      array52->refC++;
      DEBUG_COPY(array52->id);
   } else {
      array52 = (array_t*)malloc(sizeof(array_t));
      array52->size = 474;
      array52->refC = 1;
      array52->id = 52;
      array52->data = (unsigned int*)malloc(array52->size*sizeof(unsigned int));
      memset(array52->data, 0, array52->size*sizeof(unsigned int));
      DEBUG_NEW(array52->id);
   }
   for (int i = 0; i < array52->size; i++) {
      array52->data[i]++;
   }
   for (int i = 0; i < array52->size; i++) {
      if (array52->data[i] == 95) { 
         return array52;
      }
   }
   for (int i = 0; i < array52->size; i++) {
      array52->data[i]--;
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array52;
   array_t* array53 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array53->id);
   free(params0.data);
   array52->refC--;
   if(array52->refC == 0) {
      free(array52->data);
      free(array52);
      DEBUG_FREE(array52->id);
   }
   return array53;
}

