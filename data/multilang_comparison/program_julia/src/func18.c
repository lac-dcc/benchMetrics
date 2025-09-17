#include "program_julia.h" 
array_t* func18(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array157 = func19(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array157->id);
      free(params0.data);
      array157->refC--;
      if(array157->refC == 0) {
         free(array157->data);
         free(array157);
         DEBUG_FREE(array157->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array167 = func20(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array167->id);
      free(params0.data);
      array167->refC--;
      if(array167->refC == 0) {
         free(array167->data);
         free(array167);
         DEBUG_FREE(array167->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array172 = func21(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array172->id);
   free(params0.data);
   return array172;
}

