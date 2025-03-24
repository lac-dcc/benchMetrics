#include "first_example.h" 
array_t* func30(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
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
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/4 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array16->size; i++) {
            array16->data[i]--;
         }
         for (int i = 0; i < array16->size; i++) {
            if (array16->data[i] == 5) { 
               return array16;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array16;
      array_t* array17 = func42(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array17->id);
      free(params0.data);
      array17->refC--;
      if(array17->refC == 0) {
         free(array17->data);
         free(array17);
         DEBUG_FREE(array17->id);
      }
      array16->refC--;
      if(array16->refC == 0) {
         free(array16->data);
         free(array16);
         DEBUG_FREE(array16->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array24 = func34(&params0, loopsFactor);
      DEBUG_RETURN(array24->id);
      free(params0.data);
      array24->refC--;
      if(array24->refC == 0) {
         free(array24->data);
         free(array24);
         DEBUG_FREE(array24->id);
      }
   }
   array_t* array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26->refC++;
      DEBUG_COPY(array26->id);
   } else {
      array26 = (array_t*)malloc(sizeof(array_t));
      array26->size = 795;
      array26->refC = 1;
      array26->id = 26;
      array26->data = (unsigned int*)malloc(array26->size*sizeof(unsigned int));
      memset(array26->data, 0, array26->size*sizeof(unsigned int));
      DEBUG_NEW(array26->id);
   }
   return array26;
}

