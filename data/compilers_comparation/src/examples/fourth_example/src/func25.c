#include "fourth_example.h" 
array_t* func25(array_t_param* vars, int loopsFactor) {
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
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      for (int i = 0; i < array65->size; i++) {
         array65->data[i]--;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array65;
   array_t* array66 = func31(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array66->id);
   free(params0.data);
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (rand()%loopsFactor)/2 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      for (int i = 0; i < array65->size; i++) {
         array65->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 2;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array65;
   params1.data[1] = array66;
   array_t* array67 = func28(&params1, loopsFactor);
   DEBUG_RETURN(array67->id);
   free(params1.data);
   for (int i = 0; i < array65->size; i++) {
      if (array65->data[i] == 4) { 
         return array65;
      }
   }
   array66->refC--;
   if(array66->refC == 0) {
      free(array66->data);
      free(array66);
      DEBUG_FREE(array66->id);
   }
   array65->refC--;
   if(array65->refC == 0) {
      free(array65->data);
      free(array65);
      DEBUG_FREE(array65->id);
   }
   return array67;
}

