#include "program_julia.h" 
array_t* func24(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array99 = func25(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array99->id);
      free(params0.data);
      array99->refC--;
      if(array99->refC == 0) {
         free(array99->data);
         free(array99);
         DEBUG_FREE(array99->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array109 = func26(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array109->id);
      free(params0.data);
      array109->refC--;
      if(array109->refC == 0) {
         free(array109->data);
         free(array109);
         DEBUG_FREE(array109->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array114 = func27(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array114->id);
   free(params0.data);
   return array114;
}

