#include "fourth_example.h" 
array_t* func27(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array33;
   if (pCounter > 0) {
      array33 = vars->data[--pCounter];
      array33->refC++;
      DEBUG_COPY(array33->id);
   } else {
      array33 = (array_t*)malloc(sizeof(array_t));
      array33->size = 689;
      array33->refC = 1;
      array33->id = 33;
      array33->data = (unsigned int*)malloc(array33->size*sizeof(unsigned int));
      memset(array33->data, 0, array33->size*sizeof(unsigned int));
      DEBUG_NEW(array33->id);
   }
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array33->size; i++) {
         array33->data[i]--;
      }
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array33->size; i++) {
         array33->data[i]++;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array33;
   array_t* array34 = func30(&params0, loopsFactor);
   DEBUG_RETURN(array34->id);
   free(params0.data);
   for (int i = 0; i < array34->size; i++) {
      if (array34->data[i] == 17) { 
         return array34;
      }
   }
   array33->refC--;
   if(array33->refC == 0) {
      free(array33->data);
      free(array33);
      DEBUG_FREE(array33->id);
   }
   return array34;
}

