#include "third_example.h" 
array_t* func12(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array65;
   if (pCounter > 0) {
      array65 = vars->data[--pCounter];
      array65->refC++;
      DEBUG_COPY(array65->id);
   } else {
      array65 = (array_t*)malloc(sizeof(array_t));
      array65->size = 786;
      array65->refC = 1;
      array65->id = 65;
      array65->data = (unsigned int*)malloc(array65->size*sizeof(unsigned int));
      memset(array65->data, 0, array65->size*sizeof(unsigned int));
      DEBUG_NEW(array65->id);
   }
   for (int i = 0; i < array65->size; i++) {
      array65->data[i]++;
   }
   for (int i = 0; i < array65->size; i++) {
      if (array65->data[i] == 42) { 
         return array65;
      }
   }
   for (int i = 0; i < array65->size; i++) {
      array65->data[i]--;
   }
   array_t* array66;
   if (pCounter > 0) {
      array66 = vars->data[--pCounter];
      array66->refC++;
      DEBUG_COPY(array66->id);
   } else {
      array66 = (array_t*)malloc(sizeof(array_t));
      array66->size = 197;
      array66->refC = 1;
      array66->id = 66;
      array66->data = (unsigned int*)malloc(array66->size*sizeof(unsigned int));
      memset(array66->data, 0, array66->size*sizeof(unsigned int));
      DEBUG_NEW(array66->id);
   }
   if(PATH0 & 1) {
      unsigned int loop28 = 0;
      unsigned int loopLimit28 = (rand()%loopsFactor)/2 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         array_t* array67;
         if (pCounter > 0) {
            array67 = vars->data[--pCounter];
            array67->refC++;
            DEBUG_COPY(array67->id);
         } else {
            array67 = (array_t*)malloc(sizeof(array_t));
            array67->size = 507;
            array67->refC = 1;
            array67->id = 67;
            array67->data = (unsigned int*)malloc(array67->size*sizeof(unsigned int));
            memset(array67->data, 0, array67->size*sizeof(unsigned int));
            DEBUG_NEW(array67->id);
         }
         for (int i = 0; i < array65->size; i++) {
            array65->data[i]--;
         }
         for (int i = 0; i < array66->size; i++) {
            if (array66->data[i] == 48) { 
               return array66;
            }
         }
         array67->refC--;
         if(array67->refC == 0) {
            free(array67->data);
            free(array67);
            DEBUG_FREE(array67->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array65;
      params0.data[1] = array66;
      array_t* array68 = func20(&params0, loopsFactor);
      DEBUG_RETURN(array68->id);
      free(params0.data);
      array68->refC--;
      if(array68->refC == 0) {
         free(array68->data);
         free(array68);
         DEBUG_FREE(array68->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array65;
   params0.data[1] = array66;
   array_t* array69 = func17(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array69->id);
   free(params0.data);
   array69->refC--;
   if(array69->refC == 0) {
      free(array69->data);
      free(array69);
      DEBUG_FREE(array69->id);
   }
   array66->refC--;
   if(array66->refC == 0) {
      free(array66->data);
      free(array66);
      DEBUG_FREE(array66->id);
   }
   return array65;
}

