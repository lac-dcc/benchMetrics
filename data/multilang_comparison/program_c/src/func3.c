#include "program_c.h" 
array_t* func3(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array227;
   if (pCounter > 0) {
      array227 = vars->data[--pCounter];
      array227->refC++;
      DEBUG_COPY(array227->id);
   } else {
      array227 = (array_t*)malloc(sizeof(array_t));
      array227->size = 328;
      array227->refC = 1;
      array227->id = 227;
      array227->data = (unsigned int*)malloc(array227->size*sizeof(unsigned int));
      memset(array227->data, 0, array227->size*sizeof(unsigned int));
      DEBUG_NEW(array227->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array227;
   array_t* array228 = func6(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array228->id);
   free(params0.data);
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      for (int i = 0; i < array227->size; i++) {
         array227->data[i]++;
      }
   }
   for (int i = 0; i < array227->size; i++) {
      if (array227->data[i] == 17) { 
         return array227;
      }
   }
   array228->refC--;
   if(array228->refC == 0) {
      free(array228->data);
      free(array228);
      DEBUG_FREE(array228->id);
   }
   return array227;
}

