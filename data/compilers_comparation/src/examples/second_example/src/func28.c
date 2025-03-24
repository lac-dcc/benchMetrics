#include "second_example.h" 
array_t* func28(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array7 = func29(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array7->id);
      free(params0.data);
      array7->refC--;
      if(array7->refC == 0) {
         free(array7->data);
         free(array7);
         DEBUG_FREE(array7->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array42 = func30(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array42->id);
      free(params0.data);
      array42->refC--;
      if(array42->refC == 0) {
         free(array42->data);
         free(array42);
         DEBUG_FREE(array42->id);
      }
   }
   array_t_param params0;
   params0.size = 0;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   array_t* array73 = func31(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array73->id);
   free(params0.data);
   return array73;
}

