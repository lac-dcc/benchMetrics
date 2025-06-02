#include "second_example.h" 
array_t* func40(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array22;
   if (pCounter > 0) {
      array22 = vars->data[--pCounter];
      array22->refC++;
      DEBUG_COPY(array22->id);
   } else {
      array22 = (array_t*)malloc(sizeof(array_t));
      array22->size = 788;
      array22->refC = 1;
      array22->id = 22;
      array22->data = (unsigned int*)malloc(array22->size*sizeof(unsigned int));
      memset(array22->data, 0, array22->size*sizeof(unsigned int));
      DEBUG_NEW(array22->id);
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/5 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
         array_t* array23;
         if (pCounter > 0) {
            array23 = vars->data[--pCounter];
            array23->refC++;
            DEBUG_COPY(array23->id);
         } else {
            array23 = (array_t*)malloc(sizeof(array_t));
            array23->size = 584;
            array23->refC = 1;
            array23->id = 23;
            array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
            memset(array23->data, 0, array23->size*sizeof(unsigned int));
            DEBUG_NEW(array23->id);
         }
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/6 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            for (int i = 0; i < array23->size; i++) {
               array23->data[i]--;
            }
            for (int i = 0; i < array23->size; i++) {
               if (array23->data[i] == 54) { 
                  return array23;
               }
            }
         }
         array23->refC--;
         if(array23->refC == 0) {
            free(array23->data);
            free(array23);
            DEBUG_FREE(array23->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array22;
         array_t* array24 = func52(&params0, loopsFactor);
         DEBUG_RETURN(array24->id);
         free(params0.data);
         array24->refC--;
         if(array24->refC == 0) {
            free(array24->data);
            free(array24);
            DEBUG_FREE(array24->id);
         }
      }
      array_t* array25;
      if (pCounter > 0) {
         array25 = vars->data[--pCounter];
         array25->refC++;
         DEBUG_COPY(array25->id);
      } else {
         array25 = (array_t*)malloc(sizeof(array_t));
         array25->size = 60;
         array25->refC = 1;
         array25->id = 25;
         array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
         memset(array25->data, 0, array25->size*sizeof(unsigned int));
         DEBUG_NEW(array25->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array22;
      params0.data[1] = array25;
      array_t* array26 = func53(&params0, loopsFactor);
      DEBUG_RETURN(array26->id);
      free(params0.data);
      for (int i = 0; i < array25->size; i++) {
         if (array25->data[i] == 12) { 
            return array25;
         }
      }
      array26->refC--;
      if(array26->refC == 0) {
         free(array26->data);
         free(array26);
         DEBUG_FREE(array26->id);
      }
      array25->refC--;
      if(array25->refC == 0) {
         free(array25->data);
         free(array25);
         DEBUG_FREE(array25->id);
      }
   }
   for (int i = 0; i < array22->size; i++) {
      array22->data[i]--;
   }
   for (int i = 0; i < array22->size; i++) {
      if (array22->data[i] == 94) { 
         return array22;
      }
   }
   return array22;
}

