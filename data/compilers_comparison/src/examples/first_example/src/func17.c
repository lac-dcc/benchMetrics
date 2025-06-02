#include "first_example.h" 
array_t* func17(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array104;
   if (pCounter > 0) {
      array104 = vars->data[--pCounter];
      array104->refC++;
      DEBUG_COPY(array104->id);
   } else {
      array104 = (array_t*)malloc(sizeof(array_t));
      array104->size = 269;
      array104->refC = 1;
      array104->id = 104;
      array104->data = (unsigned int*)malloc(array104->size*sizeof(unsigned int));
      memset(array104->data, 0, array104->size*sizeof(unsigned int));
      DEBUG_NEW(array104->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array104;
   array_t* array105 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array105->id);
   free(params0.data);
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      for (int i = 0; i < array104->size; i++) {
         array104->data[i]++;
      }
   }
   for (int i = 0; i < array104->size; i++) {
      if (array104->data[i] == 92) { 
         return array104;
      }
   }
   array105->refC--;
   if(array105->refC == 0) {
      free(array105->data);
      free(array105);
      DEBUG_FREE(array105->id);
   }
   return array104;
}

