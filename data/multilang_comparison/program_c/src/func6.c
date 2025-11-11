#include "program_c.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array159 = func7(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array159->id);
      free(params0.data);
      array159->refC--;
      if(array159->refC == 0) {
         free(array159->data);
         free(array159);
         DEBUG_FREE(array159->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array169 = func8(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array169->id);
      free(params0.data);
      array169->refC--;
      if(array169->refC == 0) {
         free(array169->data);
         free(array169);
         DEBUG_FREE(array169->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array174 = func9(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array174->id);
   free(params0.data);
   return array174;
}

