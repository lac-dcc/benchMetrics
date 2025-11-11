#include "program_c.h" 
array_t* func24(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array68 = func25(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array68->id);
      free(params0.data);
      array68->refC--;
      if(array68->refC == 0) {
         free(array68->data);
         free(array68);
         DEBUG_FREE(array68->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array77 = func26(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array77->id);
      free(params0.data);
      array77->refC--;
      if(array77->refC == 0) {
         free(array77->data);
         free(array77);
         DEBUG_FREE(array77->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array82 = func27(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array82->id);
   free(params0.data);
   return array82;
}

