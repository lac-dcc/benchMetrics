#include "third_example.h" 
array_t* func16(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array85;
   if (pCounter > 0) {
      array85 = vars->data[--pCounter];
      array85->refC++;
      DEBUG_COPY(array85->id);
   } else {
      array85 = (array_t*)malloc(sizeof(array_t));
      array85->size = 668;
      array85->refC = 1;
      array85->id = 85;
      array85->data = (unsigned int*)malloc(array85->size*sizeof(unsigned int));
      memset(array85->data, 0, array85->size*sizeof(unsigned int));
      DEBUG_NEW(array85->id);
   }
   unsigned int loop34 = 0;
   unsigned int loopLimit34 = (rand()%loopsFactor)/2 + 1;
   for(; loop34 < loopLimit34; loop34++) {
      for (int i = 0; i < array85->size; i++) {
         array85->data[i]--;
      }
   }
   array_t* array86;
   if (pCounter > 0) {
      array86 = vars->data[--pCounter];
      array86->refC++;
      DEBUG_COPY(array86->id);
   } else {
      array86 = (array_t*)malloc(sizeof(array_t));
      array86->size = 95;
      array86->refC = 1;
      array86->id = 86;
      array86->data = (unsigned int*)malloc(array86->size*sizeof(unsigned int));
      memset(array86->data, 0, array86->size*sizeof(unsigned int));
      DEBUG_NEW(array86->id);
   }
   if(PATH0 & 1) {
      unsigned int loop35 = 0;
      unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         array_t* array87;
         if (pCounter > 0) {
            array87 = vars->data[--pCounter];
            array87->refC++;
            DEBUG_COPY(array87->id);
         } else {
            array87 = (array_t*)malloc(sizeof(array_t));
            array87->size = 926;
            array87->refC = 1;
            array87->id = 87;
            array87->data = (unsigned int*)malloc(array87->size*sizeof(unsigned int));
            memset(array87->data, 0, array87->size*sizeof(unsigned int));
            DEBUG_NEW(array87->id);
         }
         for (int i = 0; i < array87->size; i++) {
            array87->data[i]--;
         }
         for (int i = 0; i < array87->size; i++) {
            if (array87->data[i] == 40) { 
               return array87;
            }
         }
         array87->refC--;
         if(array87->refC == 0) {
            free(array87->data);
            free(array87);
            DEBUG_FREE(array87->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array85;
      params0.data[1] = array86;
      array_t* array88 = func25(&params0, loopsFactor);
      DEBUG_RETURN(array88->id);
      free(params0.data);
      array88->refC--;
      if(array88->refC == 0) {
         free(array88->data);
         free(array88);
         DEBUG_FREE(array88->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array85;
   params0.data[1] = array86;
   array_t* array89 = func22(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array89->id);
   free(params0.data);
   unsigned int loop36 = 0;
   unsigned int loopLimit36 = (rand()%loopsFactor)/2 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      for (int i = 0; i < array85->size; i++) {
         array85->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array85;
   params1.data[1] = array86;
   params1.data[2] = array89;
   array_t* array90 = func19(&params1, loopsFactor);
   DEBUG_RETURN(array90->id);
   free(params1.data);
   for (int i = 0; i < array85->size; i++) {
      if (array85->data[i] == 79) { 
         return array85;
      }
   }
   array90->refC--;
   if(array90->refC == 0) {
      free(array90->data);
      free(array90);
      DEBUG_FREE(array90->id);
   }
   array86->refC--;
   if(array86->refC == 0) {
      free(array86->data);
      free(array86);
      DEBUG_FREE(array86->id);
   }
   array85->refC--;
   if(array85->refC == 0) {
      free(array85->data);
      free(array85);
      DEBUG_FREE(array85->id);
   }
   return array89;
}

