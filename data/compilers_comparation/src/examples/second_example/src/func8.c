#include "second_example.h" 
array_t* func8(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array234;
      if (pCounter > 0) {
         array234 = vars->data[--pCounter];
         array234->refC++;
         DEBUG_COPY(array234->id);
      } else {
         array234 = (array_t*)malloc(sizeof(array_t));
         array234->size = 250;
         array234->refC = 1;
         array234->id = 234;
         array234->data = (unsigned int*)malloc(array234->size*sizeof(unsigned int));
         memset(array234->data, 0, array234->size*sizeof(unsigned int));
         DEBUG_NEW(array234->id);
      }
      unsigned int loop68 = 0;
      unsigned int loopLimit68 = (rand()%loopsFactor)/2 + 1;
      for(; loop68 < loopLimit68; loop68++) {
         for (int i = 0; i < array234->size; i++) {
            array234->data[i]--;
         }
         for (int i = 0; i < array234->size; i++) {
            if (array234->data[i] == 85) { 
               return array234;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array234;
      array_t* array235 = func18(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array235->id);
      free(params0.data);
      array235->refC--;
      if(array235->refC == 0) {
         free(array235->data);
         free(array235);
         DEBUG_FREE(array235->id);
      }
      array234->refC--;
      if(array234->refC == 0) {
         free(array234->data);
         free(array234);
         DEBUG_FREE(array234->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array236 = func14(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array236->id);
      free(params0.data);
      array236->refC--;
      if(array236->refC == 0) {
         free(array236->data);
         free(array236);
         DEBUG_FREE(array236->id);
      }
   }
   array_t* array237;
   if (pCounter > 0) {
      array237 = vars->data[--pCounter];
      array237->refC++;
      DEBUG_COPY(array237->id);
   } else {
      array237 = (array_t*)malloc(sizeof(array_t));
      array237->size = 120;
      array237->refC = 1;
      array237->id = 237;
      array237->data = (unsigned int*)malloc(array237->size*sizeof(unsigned int));
      memset(array237->data, 0, array237->size*sizeof(unsigned int));
      DEBUG_NEW(array237->id);
   }
   return array237;
}

