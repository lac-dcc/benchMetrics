#include "second_example.h" 
array_t* func48(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array13;
      if (pCounter > 0) {
         array13 = vars->data[--pCounter];
         array13->refC++;
         DEBUG_COPY(array13->id);
      } else {
         array13 = (array_t*)malloc(sizeof(array_t));
         array13->size = 370;
         array13->refC = 1;
         array13->id = 13;
         array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
         memset(array13->data, 0, array13->size*sizeof(unsigned int));
         DEBUG_NEW(array13->id);
      }
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/5 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array13->size; i++) {
            array13->data[i]--;
         }
         for (int i = 0; i < array13->size; i++) {
            if (array13->data[i] == 91) { 
               return array13;
            }
         }
      }
      array13->refC--;
      if(array13->refC == 0) {
         free(array13->data);
         free(array13);
         DEBUG_FREE(array13->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array14 = func52(&params0, loopsFactor);
      DEBUG_RETURN(array14->id);
      free(params0.data);
      array14->refC--;
      if(array14->refC == 0) {
         free(array14->data);
         free(array14);
         DEBUG_FREE(array14->id);
      }
   }
   array_t* array16;
   if (pCounter > 0) {
      array16 = vars->data[--pCounter];
      array16->refC++;
      DEBUG_COPY(array16->id);
   } else {
      array16 = (array_t*)malloc(sizeof(array_t));
      array16->size = 84;
      array16->refC = 1;
      array16->id = 16;
      array16->data = (unsigned int*)malloc(array16->size*sizeof(unsigned int));
      memset(array16->data, 0, array16->size*sizeof(unsigned int));
      DEBUG_NEW(array16->id);
   }
   return array16;
}

