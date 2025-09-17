#include "program_go.h" 
array_t* func5(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array153;
   if (pCounter > 0) {
      array153 = vars->data[--pCounter];
      array153->refC++;
      DEBUG_COPY(array153->id);
   } else {
      array153 = (array_t*)malloc(sizeof(array_t));
      array153->size = 829;
      array153->refC = 1;
      array153->id = 153;
      array153->data = (unsigned int*)malloc(array153->size*sizeof(unsigned int));
      memset(array153->data, 0, array153->size*sizeof(unsigned int));
      DEBUG_NEW(array153->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array153;
   array_t* array154 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array154->id);
   free(params0.data);
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (rand()%loopsFactor)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      for (int i = 0; i < array153->size; i++) {
         array153->data[i]++;
      }
   }
   for (int i = 0; i < array154->size; i++) {
      if (array154->data[i] == 69) { 
         return array154;
      }
   }
   array154->refC--;
   if(array154->refC == 0) {
      free(array154->data);
      free(array154);
      DEBUG_FREE(array154->id);
   }
   return array153;
}

