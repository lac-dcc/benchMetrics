#include "second_example.h" 
array_t* func15(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array241;
   if (pCounter > 0) {
      array241 = vars->data[--pCounter];
      array241->refC++;
      DEBUG_COPY(array241->id);
   } else {
      array241 = (array_t*)malloc(sizeof(array_t));
      array241->size = 770;
      array241->refC = 1;
      array241->id = 241;
      array241->data = (unsigned int*)malloc(array241->size*sizeof(unsigned int));
      memset(array241->data, 0, array241->size*sizeof(unsigned int));
      DEBUG_NEW(array241->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array241;
   array_t* array242 = func18(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array242->id);
   free(params0.data);
   unsigned int loop69 = 0;
   unsigned int loopLimit69 = (rand()%loopsFactor)/2 + 1;
   for(; loop69 < loopLimit69; loop69++) {
      for (int i = 0; i < array241->size; i++) {
         array241->data[i]++;
      }
   }
   for (int i = 0; i < array241->size; i++) {
      if (array241->data[i] == 96) { 
         return array241;
      }
   }
   array241->refC--;
   if(array241->refC == 0) {
      free(array241->data);
      free(array241);
      DEBUG_FREE(array241->id);
   }
   return array242;
}

