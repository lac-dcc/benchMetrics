#include "third_example.h" 
array_t* func18(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array42;
   if (pCounter > 0) {
      array42 = vars->data[--pCounter];
      array42->refC++;
      DEBUG_COPY(array42->id);
   } else {
      array42 = (array_t*)malloc(sizeof(array_t));
      array42->size = 846;
      array42->refC = 1;
      array42->id = 42;
      array42->data = (unsigned int*)malloc(array42->size*sizeof(unsigned int));
      memset(array42->data, 0, array42->size*sizeof(unsigned int));
      DEBUG_NEW(array42->id);
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      for (int i = 0; i < array42->size; i++) {
         array42->data[i]--;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array42;
   array_t* array43 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array43->id);
   free(params0.data);
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      for (int i = 0; i < array43->size; i++) {
         array43->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 2;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array42;
   params1.data[1] = array43;
   array_t* array44 = func21(&params1, loopsFactor);
   DEBUG_RETURN(array44->id);
   free(params1.data);
   for (int i = 0; i < array44->size; i++) {
      if (array44->data[i] == 41) { 
         return array44;
      }
   }
   array43->refC--;
   if(array43->refC == 0) {
      free(array43->data);
      free(array43);
      DEBUG_FREE(array43->id);
   }
   array42->refC--;
   if(array42->refC == 0) {
      free(array42->data);
      free(array42);
      DEBUG_FREE(array42->id);
   }
   return array44;
}

