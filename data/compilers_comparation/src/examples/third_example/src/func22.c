#include "third_example.h" 
array_t* func22(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array33;
   if (pCounter > 0) {
      array33 = vars->data[--pCounter];
      array33->refC++;
      DEBUG_COPY(array33->id);
   } else {
      array33 = (array_t*)malloc(sizeof(array_t));
      array33->size = 440;
      array33->refC = 1;
      array33->id = 33;
      array33->data = (unsigned int*)malloc(array33->size*sizeof(unsigned int));
      memset(array33->data, 0, array33->size*sizeof(unsigned int));
      DEBUG_NEW(array33->id);
   }
   if(PATH0 & 1) {
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]--;
         }
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array33;
      array_t* array34 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array34->id);
      free(params0.data);
      array34->refC--;
      if(array34->refC == 0) {
         free(array34->data);
         free(array34);
         DEBUG_FREE(array34->id);
      }
   }
   else {
      array_t* array35;
      if (pCounter > 0) {
         array35 = vars->data[--pCounter];
         array35->refC++;
         DEBUG_COPY(array35->id);
      } else {
         array35 = (array_t*)malloc(sizeof(array_t));
         array35->size = 771;
         array35->refC = 1;
         array35->id = 35;
         array35->data = (unsigned int*)malloc(array35->size*sizeof(unsigned int));
         memset(array35->data, 0, array35->size*sizeof(unsigned int));
         DEBUG_NEW(array35->id);
      }
      for (int i = 0; i < array35->size; i++) {
         array35->data[i]++;
      }
      for (int i = 0; i < array35->size; i++) {
         if (array35->data[i] == 9) { 
            return array35;
         }
      }
      for (int i = 0; i < array35->size; i++) {
         array35->data[i]--;
      }
      array35->refC--;
      if(array35->refC == 0) {
         free(array35->data);
         free(array35);
         DEBUG_FREE(array35->id);
      }
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array33->size; i++) {
         array33->data[i]++;
      }
      array_t* array36;
      if (pCounter > 0) {
         array36 = vars->data[--pCounter];
         array36->refC++;
         DEBUG_COPY(array36->id);
      } else {
         array36 = (array_t*)malloc(sizeof(array_t));
         array36->size = 856;
         array36->refC = 1;
         array36->id = 36;
         array36->data = (unsigned int*)malloc(array36->size*sizeof(unsigned int));
         memset(array36->data, 0, array36->size*sizeof(unsigned int));
         DEBUG_NEW(array36->id);
      }
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]++;
      }
      for (int i = 0; i < array36->size; i++) {
         if (array36->data[i] == 86) { 
            return array36;
         }
      }
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]--;
      }
      array36->refC--;
      if(array36->refC == 0) {
         free(array36->data);
         free(array36);
         DEBUG_FREE(array36->id);
      }
   }
   return array33;
}

