#include "fourth_example.h" 
array_t* func18(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array90;
   if (pCounter > 0) {
      array90 = vars->data[--pCounter];
      array90->refC++;
      DEBUG_COPY(array90->id);
   } else {
      array90 = (array_t*)malloc(sizeof(array_t));
      array90->size = 445;
      array90->refC = 1;
      array90->id = 90;
      array90->data = (unsigned int*)malloc(array90->size*sizeof(unsigned int));
      memset(array90->data, 0, array90->size*sizeof(unsigned int));
      DEBUG_NEW(array90->id);
   }
   unsigned int loop37 = 0;
   unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
   for(; loop37 < loopLimit37; loop37++) {
      for (int i = 0; i < array90->size; i++) {
         array90->data[i]--;
      }
   }
   array_t* array91;
   if (pCounter > 0) {
      array91 = vars->data[--pCounter];
      array91->refC++;
      DEBUG_COPY(array91->id);
   } else {
      array91 = (array_t*)malloc(sizeof(array_t));
      array91->size = 179;
      array91->refC = 1;
      array91->id = 91;
      array91->data = (unsigned int*)malloc(array91->size*sizeof(unsigned int));
      memset(array91->data, 0, array91->size*sizeof(unsigned int));
      DEBUG_NEW(array91->id);
   }
   if(PATH0 & 1) {
      unsigned int loop38 = 0;
      unsigned int loopLimit38 = (rand()%loopsFactor)/2 + 1;
      for(; loop38 < loopLimit38; loop38++) {
         array_t* array92;
         if (pCounter > 0) {
            array92 = vars->data[--pCounter];
            array92->refC++;
            DEBUG_COPY(array92->id);
         } else {
            array92 = (array_t*)malloc(sizeof(array_t));
            array92->size = 418;
            array92->refC = 1;
            array92->id = 92;
            array92->data = (unsigned int*)malloc(array92->size*sizeof(unsigned int));
            memset(array92->data, 0, array92->size*sizeof(unsigned int));
            DEBUG_NEW(array92->id);
         }
         for (int i = 0; i < array92->size; i++) {
            array92->data[i]--;
         }
         for (int i = 0; i < array92->size; i++) {
            if (array92->data[i] == 48) { 
               return array92;
            }
         }
         array92->refC--;
         if(array92->refC == 0) {
            free(array92->data);
            free(array92);
            DEBUG_FREE(array92->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array90;
      params0.data[1] = array91;
      array_t* array93 = func27(&params0, loopsFactor);
      DEBUG_RETURN(array93->id);
      free(params0.data);
      array93->refC--;
      if(array93->refC == 0) {
         free(array93->data);
         free(array93);
         DEBUG_FREE(array93->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array90;
   params0.data[1] = array91;
   array_t* array94 = func24(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array94->id);
   free(params0.data);
   unsigned int loop39 = 0;
   unsigned int loopLimit39 = (rand()%loopsFactor)/2 + 1;
   for(; loop39 < loopLimit39; loop39++) {
      for (int i = 0; i < array94->size; i++) {
         array94->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array90;
   params1.data[1] = array91;
   params1.data[2] = array94;
   array_t* array95 = func21(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array95->id);
   free(params1.data);
   for (int i = 0; i < array94->size; i++) {
      if (array94->data[i] == 1) { 
         return array94;
      }
   }
   array95->refC--;
   if(array95->refC == 0) {
      free(array95->data);
      free(array95);
      DEBUG_FREE(array95->id);
   }
   array94->refC--;
   if(array94->refC == 0) {
      free(array94->data);
      free(array94);
      DEBUG_FREE(array94->id);
   }
   array90->refC--;
   if(array90->refC == 0) {
      free(array90->data);
      free(array90);
      DEBUG_FREE(array90->id);
   }
   return array91;
}

