#include "second_example.h" 
array_t* func45(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array57;
   if (pCounter > 0) {
      array57 = vars->data[--pCounter];
      array57->refC++;
      DEBUG_COPY(array57->id);
   } else {
      array57 = (array_t*)malloc(sizeof(array_t));
      array57->size = 404;
      array57->refC = 1;
      array57->id = 57;
      array57->data = (unsigned int*)malloc(array57->size*sizeof(unsigned int));
      memset(array57->data, 0, array57->size*sizeof(unsigned int));
      DEBUG_NEW(array57->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array57;
   array_t* array58 = func51(&params0, loopsFactor);
   DEBUG_RETURN(array58->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array61;
      if (pCounter > 0) {
         array61 = vars->data[--pCounter];
         array61->refC++;
         DEBUG_COPY(array61->id);
      } else {
         array61 = (array_t*)malloc(sizeof(array_t));
         array61->size = 917;
         array61->refC = 1;
         array61->id = 61;
         array61->data = (unsigned int*)malloc(array61->size*sizeof(unsigned int));
         memset(array61->data, 0, array61->size*sizeof(unsigned int));
         DEBUG_NEW(array61->id);
      }
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/4 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         for (int i = 0; i < array61->size; i++) {
            array61->data[i]--;
         }
         for (int i = 0; i < array57->size; i++) {
            if (array57->data[i] == 24) { 
               return array57;
            }
         }
      }
      array61->refC--;
      if(array61->refC == 0) {
         free(array61->data);
         free(array61);
         DEBUG_FREE(array61->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array57;
      params1.data[1] = array58;
      array_t* array62 = func52(&params1, loopsFactor);
      DEBUG_RETURN(array62->id);
      free(params1.data);
      array62->refC--;
      if(array62->refC == 0) {
         free(array62->data);
         free(array62);
         DEBUG_FREE(array62->id);
      }
   }
   array57->refC--;
   if(array57->refC == 0) {
      free(array57->data);
      free(array57);
      DEBUG_FREE(array57->id);
   }
   return array58;
}

