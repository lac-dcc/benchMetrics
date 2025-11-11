#include "program_c.h" 
array_t* func25(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop22 = 0;
   unsigned int loopLimit22 = (50)/3 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      if(PATH0 & 1) {
         array_t* array69;
         if (pCounter > 0) {
            array69 = vars->data[--pCounter];
            array69->refC++;
            DEBUG_COPY(array69->id);
         } else {
            array69 = (array_t*)malloc(sizeof(array_t));
            array69->size = 828;
            array69->refC = 1;
            array69->id = 69;
            array69->data = (unsigned int*)malloc(array69->size*sizeof(unsigned int));
            memset(array69->data, 0, array69->size*sizeof(unsigned int));
            DEBUG_NEW(array69->id);
         }
         unsigned int loop23 = 0;
         unsigned int loopLimit23 = (50)/4 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            for (int i = 0; i < array69->size; i++) {
               array69->data[i]--;
            }
            for (int i = 0; i < array69->size; i++) {
               if (array69->data[i] == 46) { 
                  return array69;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array69;
         array_t* array70 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array70->id);
         free(params0.data);
         array70->refC--;
         if(array70->refC == 0) {
            free(array70->data);
            free(array70);
            DEBUG_FREE(array70->id);
         }
         array69->refC--;
         if(array69->refC == 0) {
            free(array69->data);
            free(array69);
            DEBUG_FREE(array69->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array71 = func34(&params0, loopsFactor);
         DEBUG_RETURN(array71->id);
         free(params0.data);
         array71->refC--;
         if(array71->refC == 0) {
            free(array71->data);
            free(array71);
            DEBUG_FREE(array71->id);
         }
      }
      array_t* array72;
      if (pCounter > 0) {
         array72 = vars->data[--pCounter];
         array72->refC++;
         DEBUG_COPY(array72->id);
      } else {
         array72 = (array_t*)malloc(sizeof(array_t));
         array72->size = 810;
         array72->refC = 1;
         array72->id = 72;
         array72->data = (unsigned int*)malloc(array72->size*sizeof(unsigned int));
         memset(array72->data, 0, array72->size*sizeof(unsigned int));
         DEBUG_NEW(array72->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array72;
      array_t* array73 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array73->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array74;
         if (pCounter > 0) {
            array74 = vars->data[--pCounter];
            array74->refC++;
            DEBUG_COPY(array74->id);
         } else {
            array74 = (array_t*)malloc(sizeof(array_t));
            array74->size = 661;
            array74->refC = 1;
            array74->id = 74;
            array74->data = (unsigned int*)malloc(array74->size*sizeof(unsigned int));
            memset(array74->data, 0, array74->size*sizeof(unsigned int));
            DEBUG_NEW(array74->id);
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (50)/4 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            for (int i = 0; i < array72->size; i++) {
               array72->data[i]--;
            }
            for (int i = 0; i < array73->size; i++) {
               if (array73->data[i] == 5) { 
                  return array73;
               }
            }
         }
         array74->refC--;
         if(array74->refC == 0) {
            free(array74->data);
            free(array74);
            DEBUG_FREE(array74->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array72;
         params1.data[1] = array73;
         array_t* array75 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array75->id);
         free(params1.data);
         array75->refC--;
         if(array75->refC == 0) {
            free(array75->data);
            free(array75);
            DEBUG_FREE(array75->id);
         }
      }
      for (int i = 0; i < array72->size; i++) {
         if (array72->data[i] == 26) { 
            return array72;
         }
      }
      array73->refC--;
      if(array73->refC == 0) {
         free(array73->data);
         free(array73);
         DEBUG_FREE(array73->id);
      }
      array72->refC--;
      if(array72->refC == 0) {
         free(array72->data);
         free(array72);
         DEBUG_FREE(array72->id);
      }
   }
   array_t* array76;
   if (pCounter > 0) {
      array76 = vars->data[--pCounter];
      array76->refC++;
      DEBUG_COPY(array76->id);
   } else {
      array76 = (array_t*)malloc(sizeof(array_t));
      array76->size = 522;
      array76->refC = 1;
      array76->id = 76;
      array76->data = (unsigned int*)malloc(array76->size*sizeof(unsigned int));
      memset(array76->data, 0, array76->size*sizeof(unsigned int));
      DEBUG_NEW(array76->id);
   }
   return array76;
}

