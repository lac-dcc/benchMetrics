#include "second_example.h" 
array_t* func22(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array82;
   if (pCounter > 0) {
      array82 = vars->data[--pCounter];
      array82->refC++;
      DEBUG_COPY(array82->id);
   } else {
      array82 = (array_t*)malloc(sizeof(array_t));
      array82->size = 930;
      array82->refC = 1;
      array82->id = 82;
      array82->data = (unsigned int*)malloc(array82->size*sizeof(unsigned int));
      memset(array82->data, 0, array82->size*sizeof(unsigned int));
      DEBUG_NEW(array82->id);
   }
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (rand()%loopsFactor)/4 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      if(PATH0 & 1) {
         array_t* array83;
         if (pCounter > 0) {
            array83 = vars->data[--pCounter];
            array83->refC++;
            DEBUG_COPY(array83->id);
         } else {
            array83 = (array_t*)malloc(sizeof(array_t));
            array83->size = 933;
            array83->refC = 1;
            array83->id = 83;
            array83->data = (unsigned int*)malloc(array83->size*sizeof(unsigned int));
            memset(array83->data, 0, array83->size*sizeof(unsigned int));
            DEBUG_NEW(array83->id);
         }
         unsigned int loop27 = 0;
         unsigned int loopLimit27 = (rand()%loopsFactor)/5 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            for (int i = 0; i < array82->size; i++) {
               array82->data[i]--;
            }
            for (int i = 0; i < array82->size; i++) {
               if (array82->data[i] == 63) { 
                  return array82;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array82;
         params0.data[1] = array83;
         array_t* array84 = func42(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array84->id);
         free(params0.data);
         array84->refC--;
         if(array84->refC == 0) {
            free(array84->data);
            free(array84);
            DEBUG_FREE(array84->id);
         }
         array83->refC--;
         if(array83->refC == 0) {
            free(array83->data);
            free(array83);
            DEBUG_FREE(array83->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array82;
         array_t* array85 = func34(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array85->id);
         free(params0.data);
         array85->refC--;
         if(array85->refC == 0) {
            free(array85->data);
            free(array85);
            DEBUG_FREE(array85->id);
         }
      }
      array_t* array86;
      if (pCounter > 0) {
         array86 = vars->data[--pCounter];
         array86->refC++;
         DEBUG_COPY(array86->id);
      } else {
         array86 = (array_t*)malloc(sizeof(array_t));
         array86->size = 959;
         array86->refC = 1;
         array86->id = 86;
         array86->data = (unsigned int*)malloc(array86->size*sizeof(unsigned int));
         memset(array86->data, 0, array86->size*sizeof(unsigned int));
         DEBUG_NEW(array86->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array82;
      params0.data[1] = array86;
      array_t* array87 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array87->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array88;
         if (pCounter > 0) {
            array88 = vars->data[--pCounter];
            array88->refC++;
            DEBUG_COPY(array88->id);
         } else {
            array88 = (array_t*)malloc(sizeof(array_t));
            array88->size = 668;
            array88->refC = 1;
            array88->id = 88;
            array88->data = (unsigned int*)malloc(array88->size*sizeof(unsigned int));
            memset(array88->data, 0, array88->size*sizeof(unsigned int));
            DEBUG_NEW(array88->id);
         }
         unsigned int loop28 = 0;
         unsigned int loopLimit28 = (rand()%loopsFactor)/5 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            for (int i = 0; i < array87->size; i++) {
               array87->data[i]--;
            }
            for (int i = 0; i < array88->size; i++) {
               if (array88->data[i] == 26) { 
                  return array88;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array82;
         params1.data[1] = array86;
         params1.data[2] = array87;
         params1.data[3] = array88;
         array_t* array89 = func46(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array89->id);
         free(params1.data);
         array89->refC--;
         if(array89->refC == 0) {
            free(array89->data);
            free(array89);
            DEBUG_FREE(array89->id);
         }
         array88->refC--;
         if(array88->refC == 0) {
            free(array88->data);
            free(array88);
            DEBUG_FREE(array88->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array82;
         params1.data[1] = array86;
         params1.data[2] = array87;
         array_t* array90 = func40(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array90->id);
         free(params1.data);
         array90->refC--;
         if(array90->refC == 0) {
            free(array90->data);
            free(array90);
            DEBUG_FREE(array90->id);
         }
      }
      for (int i = 0; i < array87->size; i++) {
         if (array87->data[i] == 76) { 
            return array87;
         }
      }
      array87->refC--;
      if(array87->refC == 0) {
         free(array87->data);
         free(array87);
         DEBUG_FREE(array87->id);
      }
      array86->refC--;
      if(array86->refC == 0) {
         free(array86->data);
         free(array86);
         DEBUG_FREE(array86->id);
      }
   }
   for (int i = 0; i < array82->size; i++) {
      array82->data[i]--;
   }
   for (int i = 0; i < array82->size; i++) {
      if (array82->data[i] == 7) { 
         return array82;
      }
   }
   return array82;
}

