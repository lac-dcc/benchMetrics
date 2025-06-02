#include "second_example.h" 
array_t* func10(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array4 = func11(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array4->id);
      free(params0.data);
      array4->refC--;
      if(array4->refC == 0) {
         free(array4->data);
         free(array4);
         DEBUG_FREE(array4->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array128 = func12(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array128->id);
      free(params0.data);
      array128->refC--;
      if(array128->refC == 0) {
         free(array128->data);
         free(array128);
         DEBUG_FREE(array128->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array165 = func13(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array165->id);
   free(params0.data);
   return array165;
}

