#include "first_example.h" 
array_t* func3(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array195;
   if (pCounter > 0) {
      array195 = vars->data[--pCounter];
      array195->refC++;
      DEBUG_COPY(array195->id);
   } else {
      array195 = (array_t*)malloc(sizeof(array_t));
      array195->size = 57;
      array195->refC = 1;
      array195->id = 195;
      array195->data = (unsigned int*)malloc(array195->size*sizeof(unsigned int));
      memset(array195->data, 0, array195->size*sizeof(unsigned int));
      DEBUG_NEW(array195->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array195;
   array_t* array196 = func6(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array196->id);
   free(params0.data);
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      for (int i = 0; i < array196->size; i++) {
         array196->data[i]++;
      }
   }
   for (int i = 0; i < array195->size; i++) {
      if (array195->data[i] == 91) { 
         return array195;
      }
   }
   array195->refC--;
   if(array195->refC == 0) {
      free(array195->data);
      free(array195);
      DEBUG_FREE(array195->id);
   }
   return array196;
}

