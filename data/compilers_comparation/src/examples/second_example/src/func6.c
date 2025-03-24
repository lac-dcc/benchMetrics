#include "second_example.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array223 = func7(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array223->id);
      free(params0.data);
      array223->refC--;
      if(array223->refC == 0) {
         free(array223->data);
         free(array223);
         DEBUG_FREE(array223->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array233 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array233->id);
      free(params0.data);
      array233->refC--;
      if(array233->refC == 0) {
         free(array233->data);
         free(array233);
         DEBUG_FREE(array233->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array238 = func9(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array238->id);
   free(params0.data);
   return array238;
}

