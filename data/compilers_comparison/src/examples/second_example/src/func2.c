#include "second_example.h" 
array_t* func2(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array247;
   if (pCounter > 0) {
      array247 = vars->data[--pCounter];
      array247->refC++;
      DEBUG_COPY(array247->id);
   } else {
      array247 = (array_t*)malloc(sizeof(array_t));
      array247->size = 30;
      array247->refC = 1;
      array247->id = 247;
      array247->data = (unsigned int*)malloc(array247->size*sizeof(unsigned int));
      memset(array247->data, 0, array247->size*sizeof(unsigned int));
      DEBUG_NEW(array247->id);
   }
   unsigned int loop71 = 0;
   unsigned int loopLimit71 = (rand()%loopsFactor)/2 + 1;
   for(; loop71 < loopLimit71; loop71++) {
      if(PATH0 & 1) {
         array_t* array248;
         if (pCounter > 0) {
            array248 = vars->data[--pCounter];
            array248->refC++;
            DEBUG_COPY(array248->id);
         } else {
            array248 = (array_t*)malloc(sizeof(array_t));
            array248->size = 573;
            array248->refC = 1;
            array248->id = 248;
            array248->data = (unsigned int*)malloc(array248->size*sizeof(unsigned int));
            memset(array248->data, 0, array248->size*sizeof(unsigned int));
            DEBUG_NEW(array248->id);
         }
         unsigned int loop72 = 0;
         unsigned int loopLimit72 = (rand()%loopsFactor)/3 + 1;
         for(; loop72 < loopLimit72; loop72++) {
            for (int i = 0; i < array247->size; i++) {
               array247->data[i]--;
            }
            for (int i = 0; i < array248->size; i++) {
               if (array248->data[i] == 22) { 
                  return array248;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array247;
         params0.data[1] = array248;
         array_t* array249 = func18(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array249->id);
         free(params0.data);
         array249->refC--;
         if(array249->refC == 0) {
            free(array249->data);
            free(array249);
            DEBUG_FREE(array249->id);
         }
         array248->refC--;
         if(array248->refC == 0) {
            free(array248->data);
            free(array248);
            DEBUG_FREE(array248->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array247;
         array_t* array250 = func14(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array250->id);
         free(params0.data);
         array250->refC--;
         if(array250->refC == 0) {
            free(array250->data);
            free(array250);
            DEBUG_FREE(array250->id);
         }
      }
      array_t* array251;
      if (pCounter > 0) {
         array251 = vars->data[--pCounter];
         array251->refC++;
         DEBUG_COPY(array251->id);
      } else {
         array251 = (array_t*)malloc(sizeof(array_t));
         array251->size = 232;
         array251->refC = 1;
         array251->id = 251;
         array251->data = (unsigned int*)malloc(array251->size*sizeof(unsigned int));
         memset(array251->data, 0, array251->size*sizeof(unsigned int));
         DEBUG_NEW(array251->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array247;
      params0.data[1] = array251;
      array_t* array252 = func15(&params0, loopsFactor);
      DEBUG_RETURN(array252->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array253;
         if (pCounter > 0) {
            array253 = vars->data[--pCounter];
            array253->refC++;
            DEBUG_COPY(array253->id);
         } else {
            array253 = (array_t*)malloc(sizeof(array_t));
            array253->size = 443;
            array253->refC = 1;
            array253->id = 253;
            array253->data = (unsigned int*)malloc(array253->size*sizeof(unsigned int));
            memset(array253->data, 0, array253->size*sizeof(unsigned int));
            DEBUG_NEW(array253->id);
         }
         unsigned int loop73 = 0;
         unsigned int loopLimit73 = (rand()%loopsFactor)/3 + 1;
         for(; loop73 < loopLimit73; loop73++) {
            for (int i = 0; i < array252->size; i++) {
               array252->data[i]--;
            }
            for (int i = 0; i < array252->size; i++) {
               if (array252->data[i] == 40) { 
                  return array252;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array247;
         params1.data[1] = array251;
         params1.data[2] = array252;
         params1.data[3] = array253;
         array_t* array254 = func24(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array254->id);
         free(params1.data);
         array254->refC--;
         if(array254->refC == 0) {
            free(array254->data);
            free(array254);
            DEBUG_FREE(array254->id);
         }
         array253->refC--;
         if(array253->refC == 0) {
            free(array253->data);
            free(array253);
            DEBUG_FREE(array253->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array247;
         params1.data[1] = array251;
         params1.data[2] = array252;
         array_t* array255 = func16(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array255->id);
         free(params1.data);
         array255->refC--;
         if(array255->refC == 0) {
            free(array255->data);
            free(array255);
            DEBUG_FREE(array255->id);
         }
      }
      for (int i = 0; i < array247->size; i++) {
         if (array247->data[i] == 41) { 
            return array247;
         }
      }
      array252->refC--;
      if(array252->refC == 0) {
         free(array252->data);
         free(array252);
         DEBUG_FREE(array252->id);
      }
      array251->refC--;
      if(array251->refC == 0) {
         free(array251->data);
         free(array251);
         DEBUG_FREE(array251->id);
      }
   }
   for (int i = 0; i < array247->size; i++) {
      array247->data[i]--;
   }
   for (int i = 0; i < array247->size; i++) {
      if (array247->data[i] == 24) { 
         return array247;
      }
   }
   return array247;
}

