#include "second_example.h" 
array_t* func14(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array211;
   if (pCounter > 0) {
      array211 = vars->data[--pCounter];
      array211->refC++;
      DEBUG_COPY(array211->id);
   } else {
      array211 = (array_t*)malloc(sizeof(array_t));
      array211->size = 563;
      array211->refC = 1;
      array211->id = 211;
      array211->data = (unsigned int*)malloc(array211->size*sizeof(unsigned int));
      memset(array211->data, 0, array211->size*sizeof(unsigned int));
      DEBUG_NEW(array211->id);
   }
   unsigned int loop61 = 0;
   unsigned int loopLimit61 = (rand()%loopsFactor)/3 + 1;
   for(; loop61 < loopLimit61; loop61++) {
      if(PATH0 & 1) {
         array_t* array212;
         if (pCounter > 0) {
            array212 = vars->data[--pCounter];
            array212->refC++;
            DEBUG_COPY(array212->id);
         } else {
            array212 = (array_t*)malloc(sizeof(array_t));
            array212->size = 49;
            array212->refC = 1;
            array212->id = 212;
            array212->data = (unsigned int*)malloc(array212->size*sizeof(unsigned int));
            memset(array212->data, 0, array212->size*sizeof(unsigned int));
            DEBUG_NEW(array212->id);
         }
         unsigned int loop62 = 0;
         unsigned int loopLimit62 = (rand()%loopsFactor)/4 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            for (int i = 0; i < array211->size; i++) {
               array211->data[i]--;
            }
            for (int i = 0; i < array212->size; i++) {
               if (array212->data[i] == 5) { 
                  return array212;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array211;
         params0.data[1] = array212;
         array_t* array213 = func28(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array213->id);
         free(params0.data);
         array213->refC--;
         if(array213->refC == 0) {
            free(array213->data);
            free(array213);
            DEBUG_FREE(array213->id);
         }
         array212->refC--;
         if(array212->refC == 0) {
            free(array212->data);
            free(array212);
            DEBUG_FREE(array212->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array211;
         array_t* array214 = func22(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array214->id);
         free(params0.data);
         array214->refC--;
         if(array214->refC == 0) {
            free(array214->data);
            free(array214);
            DEBUG_FREE(array214->id);
         }
      }
      array_t* array215;
      if (pCounter > 0) {
         array215 = vars->data[--pCounter];
         array215->refC++;
         DEBUG_COPY(array215->id);
      } else {
         array215 = (array_t*)malloc(sizeof(array_t));
         array215->size = 614;
         array215->refC = 1;
         array215->id = 215;
         array215->data = (unsigned int*)malloc(array215->size*sizeof(unsigned int));
         memset(array215->data, 0, array215->size*sizeof(unsigned int));
         DEBUG_NEW(array215->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array211;
      params0.data[1] = array215;
      array_t* array216 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array216->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array217;
         if (pCounter > 0) {
            array217 = vars->data[--pCounter];
            array217->refC++;
            DEBUG_COPY(array217->id);
         } else {
            array217 = (array_t*)malloc(sizeof(array_t));
            array217->size = 993;
            array217->refC = 1;
            array217->id = 217;
            array217->data = (unsigned int*)malloc(array217->size*sizeof(unsigned int));
            memset(array217->data, 0, array217->size*sizeof(unsigned int));
            DEBUG_NEW(array217->id);
         }
         unsigned int loop63 = 0;
         unsigned int loopLimit63 = (rand()%loopsFactor)/4 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            for (int i = 0; i < array216->size; i++) {
               array216->data[i]--;
            }
            for (int i = 0; i < array215->size; i++) {
               if (array215->data[i] == 82) { 
                  return array215;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array211;
         params1.data[1] = array215;
         params1.data[2] = array216;
         params1.data[3] = array217;
         array_t* array218 = func36(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array218->id);
         free(params1.data);
         array218->refC--;
         if(array218->refC == 0) {
            free(array218->data);
            free(array218);
            DEBUG_FREE(array218->id);
         }
         array217->refC--;
         if(array217->refC == 0) {
            free(array217->data);
            free(array217);
            DEBUG_FREE(array217->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array211;
         params1.data[1] = array215;
         params1.data[2] = array216;
         array_t* array219 = func32(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array219->id);
         free(params1.data);
         array219->refC--;
         if(array219->refC == 0) {
            free(array219->data);
            free(array219);
            DEBUG_FREE(array219->id);
         }
      }
      for (int i = 0; i < array211->size; i++) {
         if (array211->data[i] == 74) { 
            return array211;
         }
      }
      array216->refC--;
      if(array216->refC == 0) {
         free(array216->data);
         free(array216);
         DEBUG_FREE(array216->id);
      }
      array215->refC--;
      if(array215->refC == 0) {
         free(array215->data);
         free(array215);
         DEBUG_FREE(array215->id);
      }
   }
   for (int i = 0; i < array211->size; i++) {
      array211->data[i]--;
   }
   for (int i = 0; i < array211->size; i++) {
      if (array211->data[i] == 86) { 
         return array211;
      }
   }
   return array211;
}

