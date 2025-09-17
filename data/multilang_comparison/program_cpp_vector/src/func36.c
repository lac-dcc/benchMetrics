#include "program_cpp_vector.h" 
array_t* func36(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array70 = func37(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array70->id);
      free(params0.data);
      array70->refC--;
      if(array70->refC == 0) {
         free(array70->data);
         free(array70);
         DEBUG_FREE(array70->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array76 = func38(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array76->id);
      free(params0.data);
      array76->refC--;
      if(array76->refC == 0) {
         free(array76->data);
         free(array76);
         DEBUG_FREE(array76->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array81 = func39(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array81->id);
   free(params0.data);
   return array81;
}

