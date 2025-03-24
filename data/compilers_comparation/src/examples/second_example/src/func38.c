#include "second_example.h" 
array_t* func38(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array107;
      if (pCounter > 0) {
         array107 = vars->data[--pCounter];
         array107->refC++;
         DEBUG_COPY(array107->id);
      } else {
         array107 = (array_t*)malloc(sizeof(array_t));
         array107->size = 640;
         array107->refC = 1;
         array107->id = 107;
         array107->data = (unsigned int*)malloc(array107->size*sizeof(unsigned int));
         memset(array107->data, 0, array107->size*sizeof(unsigned int));
         DEBUG_NEW(array107->id);
      }
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (rand()%loopsFactor)/4 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         for (int i = 0; i < array107->size; i++) {
            array107->data[i]--;
         }
         for (int i = 0; i < array107->size; i++) {
            if (array107->data[i] == 13) { 
               return array107;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array107;
      array_t* array108 = func46(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array108->id);
      free(params0.data);
      array108->refC--;
      if(array108->refC == 0) {
         free(array108->data);
         free(array108);
         DEBUG_FREE(array108->id);
      }
      array107->refC--;
      if(array107->refC == 0) {
         free(array107->data);
         free(array107);
         DEBUG_FREE(array107->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array109 = func40(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array109->id);
      free(params0.data);
      array109->refC--;
      if(array109->refC == 0) {
         free(array109->data);
         free(array109);
         DEBUG_FREE(array109->id);
      }
   }
   array_t* array110;
   if (pCounter > 0) {
      array110 = vars->data[--pCounter];
      array110->refC++;
      DEBUG_COPY(array110->id);
   } else {
      array110 = (array_t*)malloc(sizeof(array_t));
      array110->size = 209;
      array110->refC = 1;
      array110->id = 110;
      array110->data = (unsigned int*)malloc(array110->size*sizeof(unsigned int));
      memset(array110->data, 0, array110->size*sizeof(unsigned int));
      DEBUG_NEW(array110->id);
   }
   return array110;
}

