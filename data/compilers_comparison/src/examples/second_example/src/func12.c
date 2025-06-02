#include "second_example.h" 
array_t* func12(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array129;
      if (pCounter > 0) {
         array129 = vars->data[--pCounter];
         array129->refC++;
         DEBUG_COPY(array129->id);
      } else {
         array129 = (array_t*)malloc(sizeof(array_t));
         array129->size = 46;
         array129->refC = 1;
         array129->id = 129;
         array129->data = (unsigned int*)malloc(array129->size*sizeof(unsigned int));
         memset(array129->data, 0, array129->size*sizeof(unsigned int));
         DEBUG_NEW(array129->id);
      }
      unsigned int loop39 = 0;
      unsigned int loopLimit39 = (rand()%loopsFactor)/3 + 1;
      for(; loop39 < loopLimit39; loop39++) {
         for (int i = 0; i < array129->size; i++) {
            array129->data[i]--;
         }
         for (int i = 0; i < array129->size; i++) {
            if (array129->data[i] == 49) { 
               return array129;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array129;
      array_t* array130 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array130->id);
      free(params0.data);
      array130->refC--;
      if(array130->refC == 0) {
         free(array130->data);
         free(array130);
         DEBUG_FREE(array130->id);
      }
      array129->refC--;
      if(array129->refC == 0) {
         free(array129->data);
         free(array129);
         DEBUG_FREE(array129->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array154 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array154->id);
      free(params0.data);
      array154->refC--;
      if(array154->refC == 0) {
         free(array154->data);
         free(array154);
         DEBUG_FREE(array154->id);
      }
   }
   array_t* array164;
   if (pCounter > 0) {
      array164 = vars->data[--pCounter];
      array164->refC++;
      DEBUG_COPY(array164->id);
   } else {
      array164 = (array_t*)malloc(sizeof(array_t));
      array164->size = 726;
      array164->refC = 1;
      array164->id = 164;
      array164->data = (unsigned int*)malloc(array164->size*sizeof(unsigned int));
      memset(array164->data, 0, array164->size*sizeof(unsigned int));
      DEBUG_NEW(array164->id);
   }
   return array164;
}

