#include "program.h" 
array_t* func32(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array59;
   if (pCounter > 0) {
      array59 = vars->data[--pCounter];
      array59->refC++;
      DEBUG_COPY(array59->id);
   } else {
      array59 = (array_t*)malloc(sizeof(array_t));
      array59->size = 538;
      array59->refC = 1;
      array59->id = 59;
      array59->data = (unsigned int*)malloc(array59->size*sizeof(unsigned int));
      memset(array59->data, 0, array59->size*sizeof(unsigned int));
      DEBUG_NEW(array59->id);
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/4 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      if(PATH0 & 1) {
         array_t* array60;
         if (pCounter > 0) {
            array60 = vars->data[--pCounter];
            array60->refC++;
            DEBUG_COPY(array60->id);
         } else {
            array60 = (array_t*)malloc(sizeof(array_t));
            array60->size = 606;
            array60->refC = 1;
            array60->id = 60;
            array60->data = (unsigned int*)malloc(array60->size*sizeof(unsigned int));
            memset(array60->data, 0, array60->size*sizeof(unsigned int));
            DEBUG_NEW(array60->id);
         }
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (rand()%loopsFactor)/5 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            for (int i = 0; i < array59->size; i++) {
               array59->data[i]--;
            }
            for (int i = 0; i < array59->size; i++) {
               if (array59->data[i] == 18) { 
                  return array59;
               }
            }
         }
         array60->refC--;
         if(array60->refC == 0) {
            free(array60->data);
            free(array60);
            DEBUG_FREE(array60->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array59;
         array_t* array61 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array61->id);
         free(params0.data);
         array61->refC--;
         if(array61->refC == 0) {
            free(array61->data);
            free(array61);
            DEBUG_FREE(array61->id);
         }
      }
      array_t* array62;
      if (pCounter > 0) {
         array62 = vars->data[--pCounter];
         array62->refC++;
         DEBUG_COPY(array62->id);
      } else {
         array62 = (array_t*)malloc(sizeof(array_t));
         array62->size = 369;
         array62->refC = 1;
         array62->id = 62;
         array62->data = (unsigned int*)malloc(array62->size*sizeof(unsigned int));
         memset(array62->data, 0, array62->size*sizeof(unsigned int));
         DEBUG_NEW(array62->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array59;
      params0.data[1] = array62;
      array_t* array63 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array63->id);
      free(params0.data);
      for (int i = 0; i < array59->size; i++) {
         if (array59->data[i] == 24) { 
            return array59;
         }
      }
      array63->refC--;
      if(array63->refC == 0) {
         free(array63->data);
         free(array63);
         DEBUG_FREE(array63->id);
      }
      array62->refC--;
      if(array62->refC == 0) {
         free(array62->data);
         free(array62);
         DEBUG_FREE(array62->id);
      }
   }
   for (int i = 0; i < array59->size; i++) {
      array59->data[i]--;
   }
   for (int i = 0; i < array59->size; i++) {
      if (array59->data[i] == 83) { 
         return array59;
      }
   }
   return array59;
}

