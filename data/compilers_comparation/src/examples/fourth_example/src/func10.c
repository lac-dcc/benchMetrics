#include "fourth_example.h" 
array_t* func10(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array178;
   if (pCounter > 0) {
      array178 = vars->data[--pCounter];
      array178->refC++;
      DEBUG_COPY(array178->id);
   } else {
      array178 = (array_t*)malloc(sizeof(array_t));
      array178->size = 945;
      array178->refC = 1;
      array178->id = 178;
      array178->data = (unsigned int*)malloc(array178->size*sizeof(unsigned int));
      memset(array178->data, 0, array178->size*sizeof(unsigned int));
      DEBUG_NEW(array178->id);
   }
   for (int i = 0; i < array178->size; i++) {
      array178->data[i]++;
   }
   for (int i = 0; i < array178->size; i++) {
      if (array178->data[i] == 58) { 
         return array178;
      }
   }
   for (int i = 0; i < array178->size; i++) {
      array178->data[i]--;
   }
   array_t* array179;
   if (pCounter > 0) {
      array179 = vars->data[--pCounter];
      array179->refC++;
      DEBUG_COPY(array179->id);
   } else {
      array179 = (array_t*)malloc(sizeof(array_t));
      array179->size = 637;
      array179->refC = 1;
      array179->id = 179;
      array179->data = (unsigned int*)malloc(array179->size*sizeof(unsigned int));
      memset(array179->data, 0, array179->size*sizeof(unsigned int));
      DEBUG_NEW(array179->id);
   }
   if(PATH0 & 1) {
      unsigned int loop71 = 0;
      unsigned int loopLimit71 = (rand()%loopsFactor)/2 + 1;
      for(; loop71 < loopLimit71; loop71++) {
         array_t* array180;
         if (pCounter > 0) {
            array180 = vars->data[--pCounter];
            array180->refC++;
            DEBUG_COPY(array180->id);
         } else {
            array180 = (array_t*)malloc(sizeof(array_t));
            array180->size = 289;
            array180->refC = 1;
            array180->id = 180;
            array180->data = (unsigned int*)malloc(array180->size*sizeof(unsigned int));
            memset(array180->data, 0, array180->size*sizeof(unsigned int));
            DEBUG_NEW(array180->id);
         }
         for (int i = 0; i < array179->size; i++) {
            array179->data[i]--;
         }
         for (int i = 0; i < array179->size; i++) {
            if (array179->data[i] == 78) { 
               return array179;
            }
         }
         array180->refC--;
         if(array180->refC == 0) {
            free(array180->data);
            free(array180);
            DEBUG_FREE(array180->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array178;
      params0.data[1] = array179;
      array_t* array181 = func18(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array181->id);
      free(params0.data);
      array181->refC--;
      if(array181->refC == 0) {
         free(array181->data);
         free(array181);
         DEBUG_FREE(array181->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array178;
   params0.data[1] = array179;
   array_t* array182 = func15(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array182->id);
   free(params0.data);
   array182->refC--;
   if(array182->refC == 0) {
      free(array182->data);
      free(array182);
      DEBUG_FREE(array182->id);
   }
   array179->refC--;
   if(array179->refC == 0) {
      free(array179->data);
      free(array179);
      DEBUG_FREE(array179->id);
   }
   return array178;
}

