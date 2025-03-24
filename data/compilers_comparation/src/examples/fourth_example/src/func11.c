#include "fourth_example.h" 
array_t* func11(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9->refC++;
      DEBUG_COPY(array9->id);
   } else {
      array9 = (array_t*)malloc(sizeof(array_t));
      array9->size = 929;
      array9->refC = 1;
      array9->id = 9;
      array9->data = (unsigned int*)malloc(array9->size*sizeof(unsigned int));
      memset(array9->data, 0, array9->size*sizeof(unsigned int));
      DEBUG_NEW(array9->id);
   }
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      for (int i = 0; i < array9->size; i++) {
         array9->data[i]--;
      }
   }
   array_t* array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10->refC++;
      DEBUG_COPY(array10->id);
   } else {
      array10 = (array_t*)malloc(sizeof(array_t));
      array10->size = 22;
      array10->refC = 1;
      array10->id = 10;
      array10->data = (unsigned int*)malloc(array10->size*sizeof(unsigned int));
      memset(array10->data, 0, array10->size*sizeof(unsigned int));
      DEBUG_NEW(array10->id);
   }
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         array_t* array11;
         if (pCounter > 0) {
            array11 = vars->data[--pCounter];
            array11->refC++;
            DEBUG_COPY(array11->id);
         } else {
            array11 = (array_t*)malloc(sizeof(array_t));
            array11->size = 58;
            array11->refC = 1;
            array11->id = 11;
            array11->data = (unsigned int*)malloc(array11->size*sizeof(unsigned int));
            memset(array11->data, 0, array11->size*sizeof(unsigned int));
            DEBUG_NEW(array11->id);
         }
         for (int i = 0; i < array11->size; i++) {
            array11->data[i]--;
         }
         for (int i = 0; i < array9->size; i++) {
            if (array9->data[i] == 93) { 
               return array9;
            }
         }
         array11->refC--;
         if(array11->refC == 0) {
            free(array11->data);
            free(array11);
            DEBUG_FREE(array11->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array9;
      params0.data[1] = array10;
      array_t* array12 = func20(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array12->id);
      free(params0.data);
      array12->refC--;
      if(array12->refC == 0) {
         free(array12->data);
         free(array12);
         DEBUG_FREE(array12->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array9;
   params0.data[1] = array10;
   array_t* array28 = func17(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array28->id);
   free(params0.data);
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      for (int i = 0; i < array9->size; i++) {
         array9->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array9;
   params1.data[1] = array10;
   params1.data[2] = array28;
   array_t* array60 = func14(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array60->id);
   free(params1.data);
   for (int i = 0; i < array60->size; i++) {
      if (array60->data[i] == 96) { 
         return array60;
      }
   }
   array28->refC--;
   if(array28->refC == 0) {
      free(array28->data);
      free(array28);
      DEBUG_FREE(array28->id);
   }
   array10->refC--;
   if(array10->refC == 0) {
      free(array10->data);
      free(array10);
      DEBUG_FREE(array10->id);
   }
   array9->refC--;
   if(array9->refC == 0) {
      free(array9->data);
      free(array9);
      DEBUG_FREE(array9->id);
   }
   return array60;
}

