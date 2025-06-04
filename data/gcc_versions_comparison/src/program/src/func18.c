#include "program.h" 
array_t* func18(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array125 = func19(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array125->id);
      free(params0.data);
      array125->refC--;
      if(array125->refC == 0) {
         free(array125->data);
         free(array125);
         DEBUG_FREE(array125->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array135 = func20(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array135->id);
      free(params0.data);
      array135->refC--;
      if(array135->refC == 0) {
         free(array135->data);
         free(array135);
         DEBUG_FREE(array135->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array140 = func21(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array140->id);
   free(params0.data);
   return array140;
}

