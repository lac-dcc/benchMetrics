#include "third_example.h" 
array_t* func17(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17->refC++;
      DEBUG_COPY(array17->id);
   } else {
      array17 = (array_t*)malloc(sizeof(array_t));
      array17->size = 170;
      array17->refC = 1;
      array17->id = 17;
      array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
      memset(array17->data, 0, array17->size*sizeof(unsigned int));
      DEBUG_NEW(array17->id);
   }
   if(PATH0 & 1) {
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array17;
      array_t* array18 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array18->id);
      free(params0.data);
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array17;
      params1.data[1] = array18;
      array_t* array20 = func21(&params1, loopsFactor);
      DEBUG_RETURN(array20->id);
      free(params1.data);
      array20->refC--;
      if(array20->refC == 0) {
         free(array20->data);
         free(array20);
         DEBUG_FREE(array20->id);
      }
      array18->refC--;
      if(array18->refC == 0) {
         free(array18->data);
         free(array18);
         DEBUG_FREE(array18->id);
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
         array22->size = 364;
         array22->refC = 1;
         array22->id = 22;
         array22->data = (unsigned int*)malloc(array22->size*sizeof(unsigned int));
         memset(array22->data, 0, array22->size*sizeof(unsigned int));
         DEBUG_NEW(array22->id);
      }
      for (int i = 0; i < array22->size; i++) {
         array22->data[i]++;
      }
      for (int i = 0; i < array17->size; i++) {
         if (array17->data[i] == 87) { 
            return array17;
         }
      }
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array17;
      params0.data[1] = array22;
      array_t* array23 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array23->id);
      free(params0.data);
      array23->refC--;
      if(array23->refC == 0) {
         free(array23->data);
         free(array23);
         DEBUG_FREE(array23->id);
      }
      array22->refC--;
      if(array22->refC == 0) {
         free(array22->data);
         free(array22);
         DEBUG_FREE(array22->id);
      }
   }
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]++;
      }
      array_t* array24;
      if (pCounter > 0) {
         array24 = vars->data[--pCounter];
         array24->refC++;
         DEBUG_COPY(array24->id);
      } else {
         array24 = (array_t*)malloc(sizeof(array_t));
         array24->size = 584;
         array24->refC = 1;
         array24->id = 24;
         array24->data = (unsigned int*)malloc(array24->size*sizeof(unsigned int));
         memset(array24->data, 0, array24->size*sizeof(unsigned int));
         DEBUG_NEW(array24->id);
      }
      for (int i = 0; i < array24->size; i++) {
         array24->data[i]++;
      }
      for (int i = 0; i < array24->size; i++) {
         if (array24->data[i] == 54) { 
            return array24;
         }
      }
      for (int i = 0; i < array24->size; i++) {
         array24->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array17;
      params0.data[1] = array24;
      array_t* array25 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array25->id);
      free(params0.data);
      array25->refC--;
      if(array25->refC == 0) {
         free(array25->data);
         free(array25);
         DEBUG_FREE(array25->id);
      }
      array24->refC--;
      if(array24->refC == 0) {
         free(array24->data);
         free(array24);
         DEBUG_FREE(array24->id);
      }
   }
   return array17;
}

