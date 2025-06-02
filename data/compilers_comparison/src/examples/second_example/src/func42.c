#include "second_example.h" 
array_t* func42(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array45 = func43(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array45->id);
      free(params0.data);
      array45->refC--;
      if(array45->refC == 0) {
         free(array45->data);
         free(array45);
         DEBUG_FREE(array45->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array51 = func44(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array51->id);
      free(params0.data);
      array51->refC--;
      if(array51->refC == 0) {
         free(array51->data);
         free(array51);
         DEBUG_FREE(array51->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array56 = func45(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array56->id);
   free(params0.data);
   return array56;
}

