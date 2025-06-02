#include "second_example.h" 
array_t* func24(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array131 = func25(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array131->id);
      free(params0.data);
      array131->refC--;
      if(array131->refC == 0) {
         free(array131->data);
         free(array131);
         DEBUG_FREE(array131->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array141 = func26(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array141->id);
      free(params0.data);
      array141->refC--;
      if(array141->refC == 0) {
         free(array141->data);
         free(array141);
         DEBUG_FREE(array141->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array146 = func27(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array146->id);
   free(params0.data);
   return array146;
}

