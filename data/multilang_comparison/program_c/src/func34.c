#include "program_c.h" 
array_t* func34(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array40;
   if (pCounter > 0) {
      array40 = vars->data[--pCounter];
      array40->refC++;
      DEBUG_COPY(array40->id);
   } else {
      array40 = (array_t*)malloc(sizeof(array_t));
      array40->size = 708;
      array40->refC = 1;
      array40->id = 40;
      array40->data = (unsigned int*)malloc(array40->size*sizeof(unsigned int));
      memset(array40->data, 0, array40->size*sizeof(unsigned int));
      DEBUG_NEW(array40->id);
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/4 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      if(PATH0 & 1) {
         array_t* array41;
         if (pCounter > 0) {
            array41 = vars->data[--pCounter];
            array41->refC++;
            DEBUG_COPY(array41->id);
         } else {
            array41 = (array_t*)malloc(sizeof(array_t));
            array41->size = 715;
            array41->refC = 1;
            array41->id = 41;
            array41->data = (unsigned int*)malloc(array41->size*sizeof(unsigned int));
            memset(array41->data, 0, array41->size*sizeof(unsigned int));
            DEBUG_NEW(array41->id);
         }
         unsigned int loop15 = 0;
         unsigned int loopLimit15 = (rand()%loopsFactor)/5 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            for (int i = 0; i < array40->size; i++) {
               array40->data[i]--;
            }
            for (int i = 0; i < array41->size; i++) {
               if (array41->data[i] == 96) { 
                  return array41;
               }
            }
         }
         array41->refC--;
         if(array41->refC == 0) {
            free(array41->data);
            free(array41);
            DEBUG_FREE(array41->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array40;
         array_t* array42 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array42->id);
         free(params0.data);
         array42->refC--;
         if(array42->refC == 0) {
            free(array42->data);
            free(array42);
            DEBUG_FREE(array42->id);
         }
      }
      array_t* array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43->refC++;
         DEBUG_COPY(array43->id);
      } else {
         array43 = (array_t*)malloc(sizeof(array_t));
         array43->size = 245;
         array43->refC = 1;
         array43->id = 43;
         array43->data = (unsigned int*)malloc(array43->size*sizeof(unsigned int));
         memset(array43->data, 0, array43->size*sizeof(unsigned int));
         DEBUG_NEW(array43->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array40;
      params0.data[1] = array43;
      array_t* array44 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array44->id);
      free(params0.data);
      for (int i = 0; i < array43->size; i++) {
         if (array43->data[i] == 55) { 
            return array43;
         }
      }
      array44->refC--;
      if(array44->refC == 0) {
         free(array44->data);
         free(array44);
         DEBUG_FREE(array44->id);
      }
      array43->refC--;
      if(array43->refC == 0) {
         free(array43->data);
         free(array43);
         DEBUG_FREE(array43->id);
      }
   }
   for (int i = 0; i < array40->size; i++) {
      array40->data[i]--;
   }
   for (int i = 0; i < array40->size; i++) {
      if (array40->data[i] == 64) { 
         return array40;
      }
   }
   return array40;
}

