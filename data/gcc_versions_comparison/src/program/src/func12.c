#include "program.h" 
array_t* func12(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array66;
      if (pCounter > 0) {
         array66 = vars->data[--pCounter];
         array66->refC++;
         DEBUG_COPY(array66->id);
      } else {
         array66 = (array_t*)malloc(sizeof(array_t));
         array66->size = 786;
         array66->refC = 1;
         array66->id = 66;
         array66->data = (unsigned int*)malloc(array66->size*sizeof(unsigned int));
         memset(array66->data, 0, array66->size*sizeof(unsigned int));
         DEBUG_NEW(array66->id);
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array66->size; i++) {
            array66->data[i]--;
         }
         for (int i = 0; i < array66->size; i++) {
            if (array66->data[i] == 42) { 
               return array66;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array66;
      array_t* array67 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array67->id);
      free(params0.data);
      array67->refC--;
      if(array67->refC == 0) {
         free(array67->data);
         free(array67);
         DEBUG_FREE(array67->id);
      }
      array66->refC--;
      if(array66->refC == 0) {
         free(array66->data);
         free(array66);
         DEBUG_FREE(array66->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array90 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array90->id);
      free(params0.data);
      array90->refC--;
      if(array90->refC == 0) {
         free(array90->data);
         free(array90);
         DEBUG_FREE(array90->id);
      }
   }
   array_t* array100;
   if (pCounter > 0) {
      array100 = vars->data[--pCounter];
      array100->refC++;
      DEBUG_COPY(array100->id);
   } else {
      array100 = (array_t*)malloc(sizeof(array_t));
      array100->size = 940;
      array100->refC = 1;
      array100->id = 100;
      array100->data = (unsigned int*)malloc(array100->size*sizeof(unsigned int));
      memset(array100->data, 0, array100->size*sizeof(unsigned int));
      DEBUG_NEW(array100->id);
   }
   return array100;
}

