#include "second_example.h" 
array_t* func49(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array18;
   if (pCounter > 0) {
      array18 = vars->data[--pCounter];
      array18->refC++;
      DEBUG_COPY(array18->id);
   } else {
      array18 = (array_t*)malloc(sizeof(array_t));
      array18->size = 313;
      array18->refC = 1;
      array18->id = 18;
      array18->data = (unsigned int*)malloc(array18->size*sizeof(unsigned int));
      memset(array18->data, 0, array18->size*sizeof(unsigned int));
      DEBUG_NEW(array18->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array18;
   array_t* array19 = func53(&params0, loopsFactor);
   DEBUG_RETURN(array19->id);
   free(params0.data);
   array18->refC--;
   if(array18->refC == 0) {
      free(array18->data);
      free(array18);
      DEBUG_FREE(array18->id);
   }
   return array19;
}

