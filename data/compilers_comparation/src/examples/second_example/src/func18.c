#include "second_example.h" 
array_t* func18(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array189 = func19(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array189->id);
      free(params0.data);
      array189->refC--;
      if(array189->refC == 0) {
         free(array189->data);
         free(array189);
         DEBUG_FREE(array189->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array199 = func20(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array199->id);
      free(params0.data);
      array199->refC--;
      if(array199->refC == 0) {
         free(array199->data);
         free(array199);
         DEBUG_FREE(array199->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array204 = func21(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array204->id);
   free(params0.data);
   return array204;
}

