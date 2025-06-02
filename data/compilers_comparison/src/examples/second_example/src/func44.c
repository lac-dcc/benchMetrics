#include "second_example.h" 
array_t* func44(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array52;
      if (pCounter > 0) {
         array52 = vars->data[--pCounter];
         array52->refC++;
         DEBUG_COPY(array52->id);
      } else {
         array52 = (array_t*)malloc(sizeof(array_t));
         array52->size = 121;
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
            if (array52->data[i] == 29) { 
               return array52;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array52;
      array_t* array53 = func54(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array53->id);
      free(params0.data);
      array53->refC--;
      if(array53->refC == 0) {
         free(array53->data);
         free(array53);
         DEBUG_FREE(array53->id);
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
      array_t* array54 = func50(&params0, loopsFactor);
      DEBUG_RETURN(array54->id);
      free(params0.data);
      array54->refC--;
      if(array54->refC == 0) {
         free(array54->data);
         free(array54);
         DEBUG_FREE(array54->id);
      }
   }
   array_t* array55;
   if (pCounter > 0) {
      array55 = vars->data[--pCounter];
      array55->refC++;
      DEBUG_COPY(array55->id);
   } else {
      array55 = (array_t*)malloc(sizeof(array_t));
      array55->size = 428;
      array55->refC = 1;
      array55->id = 55;
      array55->data = (unsigned int*)malloc(array55->size*sizeof(unsigned int));
      memset(array55->data, 0, array55->size*sizeof(unsigned int));
      DEBUG_NEW(array55->id);
   }
   return array55;
}

