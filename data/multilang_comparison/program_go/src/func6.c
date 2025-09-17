#include "program_go.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array191 = func7(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array191->id);
      free(params0.data);
      array191->refC--;
      if(array191->refC == 0) {
         free(array191->data);
         free(array191);
         DEBUG_FREE(array191->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array201 = func8(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array201->id);
      free(params0.data);
      array201->refC--;
      if(array201->refC == 0) {
         free(array201->data);
         free(array201);
         DEBUG_FREE(array201->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array206 = func9(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array206->id);
   free(params0.data);
   return array206;
}

