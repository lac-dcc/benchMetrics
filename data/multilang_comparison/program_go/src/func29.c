#include "program_go.h" 
array_t* func29(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      if(PATH0 & 1) {
         array_t* array8;
         if (pCounter > 0) {
            array8 = vars->data[--pCounter];
            array8->refC++;
            DEBUG_COPY(array8->id);
         } else {
            array8 = (array_t*)malloc(sizeof(array_t));
            array8->size = 802;
            array8->refC = 1;
            array8->id = 8;
            array8->data = (unsigned int*)malloc(array8->size*sizeof(unsigned int));
            memset(array8->data, 0, array8->size*sizeof(unsigned int));
            DEBUG_NEW(array8->id);
         }
         unsigned int loop6 = 0;
         unsigned int loopLimit6 = (rand()%loopsFactor)/5 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            for (int i = 0; i < array8->size; i++) {
               array8->data[i]--;
            }
            for (int i = 0; i < array8->size; i++) {
               if (array8->data[i] == 69) { 
                  return array8;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array8;
         array_t* array9 = func46(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array9->id);
         free(params0.data);
         array9->refC--;
         if(array9->refC == 0) {
            free(array9->data);
            free(array9);
            DEBUG_FREE(array9->id);
         }
         array8->refC--;
         if(array8->refC == 0) {
            free(array8->data);
            free(array8);
            DEBUG_FREE(array8->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array16 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array16->id);
         free(params0.data);
         array16->refC--;
         if(array16->refC == 0) {
            free(array16->data);
            free(array16);
            DEBUG_FREE(array16->id);
         }
      }
      array_t* array18;
      if (pCounter > 0) {
         array18 = vars->data[--pCounter];
         array18->refC++;
         DEBUG_COPY(array18->id);
      } else {
         array18 = (array_t*)malloc(sizeof(array_t));
         array18->size = 857;
         array18->refC = 1;
         array18->id = 18;
         array18->data = (unsigned int*)malloc(array18->size*sizeof(unsigned int));
         memset(array18->data, 0, array18->size*sizeof(unsigned int));
         DEBUG_NEW(array18->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array18;
      array_t* array19 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array19->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array22;
         if (pCounter > 0) {
            array22 = vars->data[--pCounter];
            array22->refC++;
            DEBUG_COPY(array22->id);
         } else {
            array22 = (array_t*)malloc(sizeof(array_t));
            array22->size = 808;
            array22->refC = 1;
            array22->id = 22;
            array22->data = (unsigned int*)malloc(array22->size*sizeof(unsigned int));
            memset(array22->data, 0, array22->size*sizeof(unsigned int));
            DEBUG_NEW(array22->id);
         }
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (rand()%loopsFactor)/5 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array18->size; i++) {
               array18->data[i]--;
            }
            for (int i = 0; i < array22->size; i++) {
               if (array22->data[i] == 88) { 
                  return array22;
               }
            }
         }
         array22->refC--;
         if(array22->refC == 0) {
            free(array22->data);
            free(array22);
            DEBUG_FREE(array22->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array18;
         params1.data[1] = array19;
         array_t* array23 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array23->id);
         free(params1.data);
         array23->refC--;
         if(array23->refC == 0) {
            free(array23->data);
            free(array23);
            DEBUG_FREE(array23->id);
         }
      }
      for (int i = 0; i < array19->size; i++) {
         if (array19->data[i] == 12) { 
            return array19;
         }
      }
      array19->refC--;
      if(array19->refC == 0) {
         free(array19->data);
         free(array19);
         DEBUG_FREE(array19->id);
      }
      array18->refC--;
      if(array18->refC == 0) {
         free(array18->data);
         free(array18);
         DEBUG_FREE(array18->id);
      }
   }
   array_t* array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25->refC++;
      DEBUG_COPY(array25->id);
   } else {
      array25 = (array_t*)malloc(sizeof(array_t));
      array25->size = 226;
      array25->refC = 1;
      array25->id = 25;
      array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
      memset(array25->data, 0, array25->size*sizeof(unsigned int));
      DEBUG_NEW(array25->id);
   }
   return array25;
}

