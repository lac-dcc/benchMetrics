#include "program_julia.h" 
array_t* func10(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array4 = func11(&params0, get_path(), loopsFactor);
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
      array_t* array96 = func12(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array96->id);
      free(params0.data);
      array96->refC--;
      if(array96->refC == 0) {
         free(array96->data);
         free(array96);
         DEBUG_FREE(array96->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array133 = func13(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array133->id);
   free(params0.data);
   return array133;
}

