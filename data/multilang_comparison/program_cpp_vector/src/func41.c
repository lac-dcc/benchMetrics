#include "program_cpp_vector.h" 
array_t* func41(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20->refC++;
      DEBUG_COPY(array20->id);
   } else {
      array20 = (array_t*)malloc(sizeof(array_t));
      array20->size = 814;
      array20->refC = 1;
      array20->id = 20;
      array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
      memset(array20->data, 0, array20->size*sizeof(unsigned int));
      DEBUG_NEW(array20->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array20;
   array_t* array21 = func46(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array21->id);
   free(params0.data);
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/5 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array20->size; i++) {
         array20->data[i]++;
      }
   }
   for (int i = 0; i < array21->size; i++) {
      if (array21->data[i] == 50) { 
         return array21;
      }
   }
   array20->refC--;
   if(array20->refC == 0) {
      free(array20->data);
      free(array20);
      DEBUG_FREE(array20->id);
   }
   return array21;
}

