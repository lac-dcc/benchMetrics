#include "program_c.h" 
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
      array_t* array65 = func12(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array65->id);
      free(params0.data);
      array65->refC--;
      if(array65->refC == 0) {
         free(array65->data);
         free(array65);
         DEBUG_FREE(array65->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array101 = func13(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array101->id);
   free(params0.data);
   return array101;
}

