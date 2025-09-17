#include "program_c.h" 
array_t* func37(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/4 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      if(PATH0 & 1) {
         array_t* array71;
         if (pCounter > 0) {
            array71 = vars->data[--pCounter];
            array71->refC++;
            DEBUG_COPY(array71->id);
         } else {
            array71 = (array_t*)malloc(sizeof(array_t));
            array71->size = 340;
            array71->refC = 1;
            array71->id = 71;
            array71->data = (unsigned int*)malloc(array71->size*sizeof(unsigned int));
            memset(array71->data, 0, array71->size*sizeof(unsigned int));
            DEBUG_NEW(array71->id);
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/5 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            for (int i = 0; i < array71->size; i++) {
               array71->data[i]--;
            }
            for (int i = 0; i < array71->size; i++) {
               if (array71->data[i] == 10) { 
                  return array71;
               }
            }
         }
         array71->refC--;
         if(array71->refC == 0) {
            free(array71->data);
            free(array71);
            DEBUG_FREE(array71->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array72 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array72->id);
         free(params0.data);
         array72->refC--;
         if(array72->refC == 0) {
            free(array72->data);
            free(array72);
            DEBUG_FREE(array72->id);
         }
      }
      array_t* array73;
      if (pCounter > 0) {
         array73 = vars->data[--pCounter];
         array73->refC++;
         DEBUG_COPY(array73->id);
      } else {
         array73 = (array_t*)malloc(sizeof(array_t));
         array73->size = 661;
         array73->refC = 1;
         array73->id = 73;
         array73->data = (unsigned int*)malloc(array73->size*sizeof(unsigned int));
         memset(array73->data, 0, array73->size*sizeof(unsigned int));
         DEBUG_NEW(array73->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array73;
      array_t* array74 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array74->id);
      free(params0.data);
      for (int i = 0; i < array74->size; i++) {
         if (array74->data[i] == 20) { 
            return array74;
         }
      }
      array74->refC--;
      if(array74->refC == 0) {
         free(array74->data);
         free(array74);
         DEBUG_FREE(array74->id);
      }
      array73->refC--;
      if(array73->refC == 0) {
         free(array73->data);
         free(array73);
         DEBUG_FREE(array73->id);
      }
   }
   array_t* array75;
   if (pCounter > 0) {
      array75 = vars->data[--pCounter];
      array75->refC++;
      DEBUG_COPY(array75->id);
   } else {
      array75 = (array_t*)malloc(sizeof(array_t));
      array75->size = 736;
      array75->refC = 1;
      array75->id = 75;
      array75->data = (unsigned int*)malloc(array75->size*sizeof(unsigned int));
      memset(array75->data, 0, array75->size*sizeof(unsigned int));
      DEBUG_NEW(array75->id);
   }
   return array75;
}

