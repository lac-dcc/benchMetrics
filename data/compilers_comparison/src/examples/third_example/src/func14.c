#include "third_example.h" 
array_t* func14(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array27;
   if (pCounter > 0) {
      array27 = vars->data[--pCounter];
      array27->refC++;
      DEBUG_COPY(array27->id);
   } else {
      array27 = (array_t*)malloc(sizeof(array_t));
      array27->size = 94;
      array27->refC = 1;
      array27->id = 27;
      array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
      memset(array27->data, 0, array27->size*sizeof(unsigned int));
      DEBUG_NEW(array27->id);
   }
   for (int i = 0; i < array27->size; i++) {
      array27->data[i]++;
   }
   for (int i = 0; i < array27->size; i++) {
      if (array27->data[i] == 70) { 
         return array27;
      }
   }
   for (int i = 0; i < array27->size; i++) {
      array27->data[i]--;
   }
   array_t* array28;
   if (pCounter > 0) {
      array28 = vars->data[--pCounter];
      array28->refC++;
      DEBUG_COPY(array28->id);
   } else {
      array28 = (array_t*)malloc(sizeof(array_t));
      array28->size = 378;
      array28->refC = 1;
      array28->id = 28;
      array28->data = (unsigned int*)malloc(array28->size*sizeof(unsigned int));
      memset(array28->data, 0, array28->size*sizeof(unsigned int));
      DEBUG_NEW(array28->id);
   }
   if(PATH0 & 1) {
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         array_t* array29;
         if (pCounter > 0) {
            array29 = vars->data[--pCounter];
            array29->refC++;
            DEBUG_COPY(array29->id);
         } else {
            array29 = (array_t*)malloc(sizeof(array_t));
            array29->size = 467;
            array29->refC = 1;
            array29->id = 29;
            array29->data = (unsigned int*)malloc(array29->size*sizeof(unsigned int));
            memset(array29->data, 0, array29->size*sizeof(unsigned int));
            DEBUG_NEW(array29->id);
         }
         for (int i = 0; i < array27->size; i++) {
            array27->data[i]--;
         }
         for (int i = 0; i < array29->size; i++) {
            if (array29->data[i] == 2) { 
               return array29;
            }
         }
         array29->refC--;
         if(array29->refC == 0) {
            free(array29->data);
            free(array29);
            DEBUG_FREE(array29->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array27;
      params0.data[1] = array28;
      array_t* array30 = func25(&params0, loopsFactor);
      DEBUG_RETURN(array30->id);
      free(params0.data);
      array30->refC--;
      if(array30->refC == 0) {
         free(array30->data);
         free(array30);
         DEBUG_FREE(array30->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array27;
   params0.data[1] = array28;
   array_t* array32 = func22(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array32->id);
   free(params0.data);
   array28->refC--;
   if(array28->refC == 0) {
      free(array28->data);
      free(array28);
      DEBUG_FREE(array28->id);
   }
   array27->refC--;
   if(array27->refC == 0) {
      free(array27->data);
      free(array27);
      DEBUG_FREE(array27->id);
   }
   return array32;
}

