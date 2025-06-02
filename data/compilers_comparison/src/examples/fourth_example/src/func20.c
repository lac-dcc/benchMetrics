#include "fourth_example.h" 
array_t* func20(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13->refC++;
      DEBUG_COPY(array13->id);
   } else {
      array13 = (array_t*)malloc(sizeof(array_t));
      array13->size = 373;
      array13->refC = 1;
      array13->id = 13;
      array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
      memset(array13->data, 0, array13->size*sizeof(unsigned int));
      DEBUG_NEW(array13->id);
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]--;
      }
   }
   array_t* array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14->refC++;
      DEBUG_COPY(array14->id);
   } else {
      array14 = (array_t*)malloc(sizeof(array_t));
      array14->size = 919;
      array14->refC = 1;
      array14->id = 14;
      array14->data = (unsigned int*)malloc(array14->size*sizeof(unsigned int));
      memset(array14->data, 0, array14->size*sizeof(unsigned int));
      DEBUG_NEW(array14->id);
   }
   if(PATH0 & 1) {
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         array_t* array15;
         if (pCounter > 0) {
            array15 = vars->data[--pCounter];
            array15->refC++;
            DEBUG_COPY(array15->id);
         } else {
            array15 = (array_t*)malloc(sizeof(array_t));
            array15->size = 784;
            array15->refC = 1;
            array15->id = 15;
            array15->data = (unsigned int*)malloc(array15->size*sizeof(unsigned int));
            memset(array15->data, 0, array15->size*sizeof(unsigned int));
            DEBUG_NEW(array15->id);
         }
         for (int i = 0; i < array14->size; i++) {
            array14->data[i]--;
         }
         for (int i = 0; i < array15->size; i++) {
            if (array15->data[i] == 24) { 
               return array15;
            }
         }
         array15->refC--;
         if(array15->refC == 0) {
            free(array15->data);
            free(array15);
            DEBUG_FREE(array15->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array13;
      params0.data[1] = array14;
      array_t* array16 = func29(&params0, loopsFactor);
      DEBUG_RETURN(array16->id);
      free(params0.data);
      array16->refC--;
      if(array16->refC == 0) {
         free(array16->data);
         free(array16);
         DEBUG_FREE(array16->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array13;
   params0.data[1] = array14;
   array_t* array18 = func26(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array18->id);
   free(params0.data);
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array13;
   params1.data[1] = array14;
   params1.data[2] = array18;
   array_t* array24 = func23(&params1, loopsFactor);
   DEBUG_RETURN(array24->id);
   free(params1.data);
   for (int i = 0; i < array24->size; i++) {
      if (array24->data[i] == 95) { 
         return array24;
      }
   }
   array24->refC--;
   if(array24->refC == 0) {
      free(array24->data);
      free(array24);
      DEBUG_FREE(array24->id);
   }
   array14->refC--;
   if(array14->refC == 0) {
      free(array14->data);
      free(array14);
      DEBUG_FREE(array14->id);
   }
   array13->refC--;
   if(array13->refC == 0) {
      free(array13->data);
      free(array13);
      DEBUG_FREE(array13->id);
   }
   return array18;
}

