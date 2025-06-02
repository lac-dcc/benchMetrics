#include "fourth_example.h" 
array_t* func19(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array103;
   if (pCounter > 0) {
      array103 = vars->data[--pCounter];
      array103->refC++;
      DEBUG_COPY(array103->id);
   } else {
      array103 = (array_t*)malloc(sizeof(array_t));
      array103->size = 269;
      array103->refC = 1;
      array103->id = 103;
      array103->data = (unsigned int*)malloc(array103->size*sizeof(unsigned int));
      memset(array103->data, 0, array103->size*sizeof(unsigned int));
      DEBUG_NEW(array103->id);
   }
   for (int i = 0; i < array103->size; i++) {
      array103->data[i]++;
   }
   for (int i = 0; i < array103->size; i++) {
      if (array103->data[i] == 30) { 
         return array103;
      }
   }
   for (int i = 0; i < array103->size; i++) {
      array103->data[i]--;
   }
   array_t* array104;
   if (pCounter > 0) {
      array104 = vars->data[--pCounter];
      array104->refC++;
      DEBUG_COPY(array104->id);
   } else {
      array104 = (array_t*)malloc(sizeof(array_t));
      array104->size = 292;
      array104->refC = 1;
      array104->id = 104;
      array104->data = (unsigned int*)malloc(array104->size*sizeof(unsigned int));
      memset(array104->data, 0, array104->size*sizeof(unsigned int));
      DEBUG_NEW(array104->id);
   }
   if(PATH0 & 1) {
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         array_t* array105;
         if (pCounter > 0) {
            array105 = vars->data[--pCounter];
            array105->refC++;
            DEBUG_COPY(array105->id);
         } else {
            array105 = (array_t*)malloc(sizeof(array_t));
            array105->size = 972;
            array105->refC = 1;
            array105->id = 105;
            array105->data = (unsigned int*)malloc(array105->size*sizeof(unsigned int));
            memset(array105->data, 0, array105->size*sizeof(unsigned int));
            DEBUG_NEW(array105->id);
         }
         for (int i = 0; i < array105->size; i++) {
            array105->data[i]--;
         }
         for (int i = 0; i < array105->size; i++) {
            if (array105->data[i] == 25) { 
               return array105;
            }
         }
         array105->refC--;
         if(array105->refC == 0) {
            free(array105->data);
            free(array105);
            DEBUG_FREE(array105->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array103;
      params0.data[1] = array104;
      array_t* array106 = func27(&params0, loopsFactor);
      DEBUG_RETURN(array106->id);
      free(params0.data);
      array106->refC--;
      if(array106->refC == 0) {
         free(array106->data);
         free(array106);
         DEBUG_FREE(array106->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array103;
   params0.data[1] = array104;
   array_t* array107 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array107->id);
   free(params0.data);
   array104->refC--;
   if(array104->refC == 0) {
      free(array104->data);
      free(array104);
      DEBUG_FREE(array104->id);
   }
   array103->refC--;
   if(array103->refC == 0) {
      free(array103->data);
      free(array103);
      DEBUG_FREE(array103->id);
   }
   return array107;
}

