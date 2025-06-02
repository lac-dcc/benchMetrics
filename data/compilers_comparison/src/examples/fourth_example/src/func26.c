#include "fourth_example.h" 
array_t* func26(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array19;
   if (pCounter > 0) {
      array19 = vars->data[--pCounter];
      array19->refC++;
      DEBUG_COPY(array19->id);
   } else {
      array19 = (array_t*)malloc(sizeof(array_t));
      array19->size = 305;
      array19->refC = 1;
      array19->id = 19;
      array19->data = (unsigned int*)malloc(array19->size*sizeof(unsigned int));
      memset(array19->data, 0, array19->size*sizeof(unsigned int));
      DEBUG_NEW(array19->id);
   }
   if(PATH0 & 1) {
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]--;
         }
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array19;
      array_t* array20 = func30(&params0, loopsFactor);
      DEBUG_RETURN(array20->id);
      free(params0.data);
      array20->refC--;
      if(array20->refC == 0) {
         free(array20->data);
         free(array20);
         DEBUG_FREE(array20->id);
      }
   }
   else {
      array_t* array22;
      if (pCounter > 0) {
         array22 = vars->data[--pCounter];
         array22->refC++;
         DEBUG_COPY(array22->id);
      } else {
         array22 = (array_t*)malloc(sizeof(array_t));
         array22->size = 857;
         array22->refC = 1;
         array22->id = 22;
         array22->data = (unsigned int*)malloc(array22->size*sizeof(unsigned int));
         memset(array22->data, 0, array22->size*sizeof(unsigned int));
         DEBUG_NEW(array22->id);
      }
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]++;
      }
      for (int i = 0; i < array22->size; i++) {
         if (array22->data[i] == 82) { 
            return array22;
         }
      }
      for (int i = 0; i < array22->size; i++) {
         array22->data[i]--;
      }
      array22->refC--;
      if(array22->refC == 0) {
         free(array22->data);
         free(array22);
         DEBUG_FREE(array22->id);
      }
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]++;
      }
      array_t* array23;
      if (pCounter > 0) {
         array23 = vars->data[--pCounter];
         array23->refC++;
         DEBUG_COPY(array23->id);
      } else {
         array23 = (array_t*)malloc(sizeof(array_t));
         array23->size = 367;
         array23->refC = 1;
         array23->id = 23;
         array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
         memset(array23->data, 0, array23->size*sizeof(unsigned int));
         DEBUG_NEW(array23->id);
      }
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]++;
      }
      for (int i = 0; i < array19->size; i++) {
         if (array19->data[i] == 43) { 
            return array19;
         }
      }
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]--;
      }
      array23->refC--;
      if(array23->refC == 0) {
         free(array23->data);
         free(array23);
         DEBUG_FREE(array23->id);
      }
   }
   return array19;
}

