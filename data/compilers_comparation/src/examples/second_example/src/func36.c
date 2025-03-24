#include "second_example.h" 
array_t* func36(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array97 = func37(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array97->id);
      free(params0.data);
      array97->refC--;
      if(array97->refC == 0) {
         free(array97->data);
         free(array97);
         DEBUG_FREE(array97->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array106 = func38(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array106->id);
      free(params0.data);
      array106->refC--;
      if(array106->refC == 0) {
         free(array106->data);
         free(array106);
         DEBUG_FREE(array106->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array111 = func39(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array111->id);
   free(params0.data);
   return array111;
}

