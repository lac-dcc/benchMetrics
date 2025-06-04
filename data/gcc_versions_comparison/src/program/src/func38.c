#include "program.h" 
array_t* func38(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array52;
      if (pCounter > 0) {
         array52 = vars->data[--pCounter];
         array52->refC++;
         DEBUG_COPY(array52->id);
      } else {
         array52 = (array_t*)malloc(sizeof(array_t));
         array52->size = 275;
         array52->refC = 1;
         array52->id = 52;
         array52->data = (unsigned int*)malloc(array52->size*sizeof(unsigned int));
         memset(array52->data, 0, array52->size*sizeof(unsigned int));
         DEBUG_NEW(array52->id);
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/4 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         for (int i = 0; i < array52->size; i++) {
            array52->data[i]--;
         }
         for (int i = 0; i < array52->size; i++) {
            if (array52->data[i] == 21) { 
               return array52;
            }
         }
      }
      array52->refC--;
      if(array52->refC == 0) {
         free(array52->data);
         free(array52);
         DEBUG_FREE(array52->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array53 = func40(&params0, loopsFactor);
      DEBUG_RETURN(array53->id);
      free(params0.data);
      array53->refC--;
      if(array53->refC == 0) {
         free(array53->data);
         free(array53);
         DEBUG_FREE(array53->id);
      }
   }
   array_t* array54;
   if (pCounter > 0) {
      array54 = vars->data[--pCounter];
      array54->refC++;
      DEBUG_COPY(array54->id);
   } else {
      array54 = (array_t*)malloc(sizeof(array_t));
      array54->size = 29;
      array54->refC = 1;
      array54->id = 54;
      array54->data = (unsigned int*)malloc(array54->size*sizeof(unsigned int));
      memset(array54->data, 0, array54->size*sizeof(unsigned int));
      DEBUG_NEW(array54->id);
   }
   return array54;
}

