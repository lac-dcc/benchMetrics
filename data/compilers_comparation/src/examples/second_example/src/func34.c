#include "second_example.h" 
array_t* func34(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array64;
   if (pCounter > 0) {
      array64 = vars->data[--pCounter];
      array64->refC++;
      DEBUG_COPY(array64->id);
   } else {
      array64 = (array_t*)malloc(sizeof(array_t));
      array64->size = 590;
      array64->refC = 1;
      array64->id = 64;
      array64->data = (unsigned int*)malloc(array64->size*sizeof(unsigned int));
      memset(array64->data, 0, array64->size*sizeof(unsigned int));
      DEBUG_NEW(array64->id);
   }
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/4 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      if(PATH0 & 1) {
         array_t* array65;
         if (pCounter > 0) {
            array65 = vars->data[--pCounter];
            array65->refC++;
            DEBUG_COPY(array65->id);
         } else {
            array65 = (array_t*)malloc(sizeof(array_t));
            array65->size = 505;
            array65->refC = 1;
            array65->id = 65;
            array65->data = (unsigned int*)malloc(array65->size*sizeof(unsigned int));
            memset(array65->data, 0, array65->size*sizeof(unsigned int));
            DEBUG_NEW(array65->id);
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/5 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array65->size; i++) {
               array65->data[i]--;
            }
            for (int i = 0; i < array64->size; i++) {
               if (array64->data[i] == 86) { 
                  return array64;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array64;
         params0.data[1] = array65;
         array_t* array66 = func54(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array66->id);
         free(params0.data);
         array66->refC--;
         if(array66->refC == 0) {
            free(array66->data);
            free(array66);
            DEBUG_FREE(array66->id);
         }
         array65->refC--;
         if(array65->refC == 0) {
            free(array65->data);
            free(array65);
            DEBUG_FREE(array65->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array64;
         array_t* array67 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array67->id);
         free(params0.data);
         array67->refC--;
         if(array67->refC == 0) {
            free(array67->data);
            free(array67);
            DEBUG_FREE(array67->id);
         }
      }
      array_t* array68;
      if (pCounter > 0) {
         array68 = vars->data[--pCounter];
         array68->refC++;
         DEBUG_COPY(array68->id);
      } else {
         array68 = (array_t*)malloc(sizeof(array_t));
         array68->size = 197;
         array68->refC = 1;
         array68->id = 68;
         array68->data = (unsigned int*)malloc(array68->size*sizeof(unsigned int));
         memset(array68->data, 0, array68->size*sizeof(unsigned int));
         DEBUG_NEW(array68->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array64;
      params0.data[1] = array68;
      array_t* array69 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array69->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array70;
         if (pCounter > 0) {
            array70 = vars->data[--pCounter];
            array70->refC++;
            DEBUG_COPY(array70->id);
         } else {
            array70 = (array_t*)malloc(sizeof(array_t));
            array70->size = 804;
            array70->refC = 1;
            array70->id = 70;
            array70->data = (unsigned int*)malloc(array70->size*sizeof(unsigned int));
            memset(array70->data, 0, array70->size*sizeof(unsigned int));
            DEBUG_NEW(array70->id);
         }
         unsigned int loop23 = 0;
         unsigned int loopLimit23 = (rand()%loopsFactor)/5 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            for (int i = 0; i < array64->size; i++) {
               array64->data[i]--;
            }
            for (int i = 0; i < array70->size; i++) {
               if (array70->data[i] == 22) { 
                  return array70;
               }
            }
         }
         array70->refC--;
         if(array70->refC == 0) {
            free(array70->data);
            free(array70);
            DEBUG_FREE(array70->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array64;
         params1.data[1] = array68;
         params1.data[2] = array69;
         array_t* array71 = func52(&params1, loopsFactor);
         DEBUG_RETURN(array71->id);
         free(params1.data);
         array71->refC--;
         if(array71->refC == 0) {
            free(array71->data);
            free(array71);
            DEBUG_FREE(array71->id);
         }
      }
      for (int i = 0; i < array64->size; i++) {
         if (array64->data[i] == 46) { 
            return array64;
         }
      }
      array69->refC--;
      if(array69->refC == 0) {
         free(array69->data);
         free(array69);
         DEBUG_FREE(array69->id);
      }
      array68->refC--;
      if(array68->refC == 0) {
         free(array68->data);
         free(array68);
         DEBUG_FREE(array68->id);
      }
   }
   for (int i = 0; i < array64->size; i++) {
      array64->data[i]--;
   }
   for (int i = 0; i < array64->size; i++) {
      if (array64->data[i] == 22) { 
         return array64;
      }
   }
   return array64;
}

