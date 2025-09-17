#include "program_c.h" 
array_t* func15(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array209;
   if (pCounter > 0) {
      array209 = vars->data[--pCounter];
      array209->refC++;
      DEBUG_COPY(array209->id);
   } else {
      array209 = (array_t*)malloc(sizeof(array_t));
      array209->size = 744;
      array209->refC = 1;
      array209->id = 209;
      array209->data = (unsigned int*)malloc(array209->size*sizeof(unsigned int));
      memset(array209->data, 0, array209->size*sizeof(unsigned int));
      DEBUG_NEW(array209->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array209;
   array_t* array210 = func18(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array210->id);
   free(params0.data);
   unsigned int loop60 = 0;
   unsigned int loopLimit60 = (rand()%loopsFactor)/2 + 1;
   for(; loop60 < loopLimit60; loop60++) {
      for (int i = 0; i < array210->size; i++) {
         array210->data[i]++;
      }
   }
   for (int i = 0; i < array209->size; i++) {
      if (array209->data[i] == 36) { 
         return array209;
      }
   }
   array210->refC--;
   if(array210->refC == 0) {
      free(array210->data);
      free(array210);
      DEBUG_FREE(array210->id);
   }
   return array209;
}

