#include "fourth_example.h" 
array_t* func14(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array61;
   if (pCounter > 0) {
      array61 = vars->data[--pCounter];
      array61->refC++;
      DEBUG_COPY(array61->id);
   } else {
      array61 = (array_t*)malloc(sizeof(array_t));
      array61->size = 996;
      array61->refC = 1;
      array61->id = 61;
      array61->data = (unsigned int*)malloc(array61->size*sizeof(unsigned int));
      memset(array61->data, 0, array61->size*sizeof(unsigned int));
      DEBUG_NEW(array61->id);
   }
   for (int i = 0; i < array61->size; i++) {
      array61->data[i]++;
   }
   for (int i = 0; i < array61->size; i++) {
      if (array61->data[i] == 70) { 
         return array61;
      }
   }
   for (int i = 0; i < array61->size; i++) {
      array61->data[i]--;
   }
   array_t* array62;
   if (pCounter > 0) {
      array62 = vars->data[--pCounter];
      array62->refC++;
      DEBUG_COPY(array62->id);
   } else {
      array62 = (array_t*)malloc(sizeof(array_t));
      array62->size = 490;
      array62->refC = 1;
      array62->id = 62;
      array62->data = (unsigned int*)malloc(array62->size*sizeof(unsigned int));
      memset(array62->data, 0, array62->size*sizeof(unsigned int));
      DEBUG_NEW(array62->id);
   }
   if(PATH0 & 1) {
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         array_t* array63;
         if (pCounter > 0) {
            array63 = vars->data[--pCounter];
            array63->refC++;
            DEBUG_COPY(array63->id);
         } else {
            array63 = (array_t*)malloc(sizeof(array_t));
            array63->size = 499;
            array63->refC = 1;
            array63->id = 63;
            array63->data = (unsigned int*)malloc(array63->size*sizeof(unsigned int));
            memset(array63->data, 0, array63->size*sizeof(unsigned int));
            DEBUG_NEW(array63->id);
         }
         for (int i = 0; i < array62->size; i++) {
            array62->data[i]--;
         }
         for (int i = 0; i < array63->size; i++) {
            if (array63->data[i] == 44) { 
               return array63;
            }
         }
         array63->refC--;
         if(array63->refC == 0) {
            free(array63->data);
            free(array63);
            DEBUG_FREE(array63->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array61;
      params0.data[1] = array62;
      array_t* array64 = func25(&params0, loopsFactor);
      DEBUG_RETURN(array64->id);
      free(params0.data);
      array64->refC--;
      if(array64->refC == 0) {
         free(array64->data);
         free(array64);
         DEBUG_FREE(array64->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array61;
   params0.data[1] = array62;
   array_t* array68 = func22(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array68->id);
   free(params0.data);
   array62->refC--;
   if(array62->refC == 0) {
      free(array62->data);
      free(array62);
      DEBUG_FREE(array62->id);
   }
   array61->refC--;
   if(array61->refC == 0) {
      free(array61->data);
      free(array61);
      DEBUG_FREE(array61->id);
   }
   return array68;
}

