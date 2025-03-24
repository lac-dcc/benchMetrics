#include "fourth_example.h" 
array_t* func7(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array202;
   if (pCounter > 0) {
      array202 = vars->data[--pCounter];
      array202->refC++;
      DEBUG_COPY(array202->id);
   } else {
      array202 = (array_t*)malloc(sizeof(array_t));
      array202->size = 977;
      array202->refC = 1;
      array202->id = 202;
      array202->data = (unsigned int*)malloc(array202->size*sizeof(unsigned int));
      memset(array202->data, 0, array202->size*sizeof(unsigned int));
      DEBUG_NEW(array202->id);
   }
   unsigned int loop78 = 0;
   unsigned int loopLimit78 = (rand()%loopsFactor)/2 + 1;
   for(; loop78 < loopLimit78; loop78++) {
      for (int i = 0; i < array202->size; i++) {
         array202->data[i]--;
      }
   }
   array_t* array203;
   if (pCounter > 0) {
      array203 = vars->data[--pCounter];
      array203->refC++;
      DEBUG_COPY(array203->id);
   } else {
      array203 = (array_t*)malloc(sizeof(array_t));
      array203->size = 536;
      array203->refC = 1;
      array203->id = 203;
      array203->data = (unsigned int*)malloc(array203->size*sizeof(unsigned int));
      memset(array203->data, 0, array203->size*sizeof(unsigned int));
      DEBUG_NEW(array203->id);
   }
   if(PATH0 & 1) {
      unsigned int loop79 = 0;
      unsigned int loopLimit79 = (rand()%loopsFactor)/2 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         array_t* array204;
         if (pCounter > 0) {
            array204 = vars->data[--pCounter];
            array204->refC++;
            DEBUG_COPY(array204->id);
         } else {
            array204 = (array_t*)malloc(sizeof(array_t));
            array204->size = 904;
            array204->refC = 1;
            array204->id = 204;
            array204->data = (unsigned int*)malloc(array204->size*sizeof(unsigned int));
            memset(array204->data, 0, array204->size*sizeof(unsigned int));
            DEBUG_NEW(array204->id);
         }
         for (int i = 0; i < array202->size; i++) {
            array202->data[i]--;
         }
         for (int i = 0; i < array202->size; i++) {
            if (array202->data[i] == 7) { 
               return array202;
            }
         }
         array204->refC--;
         if(array204->refC == 0) {
            free(array204->data);
            free(array204);
            DEBUG_FREE(array204->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array202;
      params0.data[1] = array203;
      array_t* array205 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array205->id);
      free(params0.data);
      array205->refC--;
      if(array205->refC == 0) {
         free(array205->data);
         free(array205);
         DEBUG_FREE(array205->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array202;
   params0.data[1] = array203;
   array_t* array206 = func13(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array206->id);
   free(params0.data);
   unsigned int loop80 = 0;
   unsigned int loopLimit80 = (rand()%loopsFactor)/2 + 1;
   for(; loop80 < loopLimit80; loop80++) {
      for (int i = 0; i < array202->size; i++) {
         array202->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array202;
   params1.data[1] = array203;
   params1.data[2] = array206;
   array_t* array207 = func10(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array207->id);
   free(params1.data);
   for (int i = 0; i < array202->size; i++) {
      if (array202->data[i] == 60) { 
         return array202;
      }
   }
   array207->refC--;
   if(array207->refC == 0) {
      free(array207->data);
      free(array207);
      DEBUG_FREE(array207->id);
   }
   array203->refC--;
   if(array203->refC == 0) {
      free(array203->data);
      free(array203);
      DEBUG_FREE(array203->id);
   }
   array202->refC--;
   if(array202->refC == 0) {
      free(array202->data);
      free(array202);
      DEBUG_FREE(array202->id);
   }
   return array206;
}

