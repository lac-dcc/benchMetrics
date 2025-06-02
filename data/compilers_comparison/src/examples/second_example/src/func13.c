#include "second_example.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array166;
   if (pCounter > 0) {
      array166 = vars->data[--pCounter];
      array166->refC++;
      DEBUG_COPY(array166->id);
   } else {
      array166 = (array_t*)malloc(sizeof(array_t));
      array166->size = 946;
      array166->refC = 1;
      array166->id = 166;
      array166->data = (unsigned int*)malloc(array166->size*sizeof(unsigned int));
      memset(array166->data, 0, array166->size*sizeof(unsigned int));
      DEBUG_NEW(array166->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array166;
   array_t* array167 = func17(&params0, loopsFactor);
   DEBUG_RETURN(array167->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array170;
      if (pCounter > 0) {
         array170 = vars->data[--pCounter];
         array170->refC++;
         DEBUG_COPY(array170->id);
      } else {
         array170 = (array_t*)malloc(sizeof(array_t));
         array170->size = 214;
         array170->refC = 1;
         array170->id = 170;
         array170->data = (unsigned int*)malloc(array170->size*sizeof(unsigned int));
         memset(array170->data, 0, array170->size*sizeof(unsigned int));
         DEBUG_NEW(array170->id);
      }
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (rand()%loopsFactor)/3 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array167->size; i++) {
            array167->data[i]--;
         }
         for (int i = 0; i < array170->size; i++) {
            if (array170->data[i] == 90) { 
               return array170;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array166;
      params1.data[1] = array167;
      params1.data[2] = array170;
      array_t* array171 = func28(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array171->id);
      free(params1.data);
      array171->refC--;
      if(array171->refC == 0) {
         free(array171->data);
         free(array171);
         DEBUG_FREE(array171->id);
      }
      array170->refC--;
      if(array170->refC == 0) {
         free(array170->data);
         free(array170);
         DEBUG_FREE(array170->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array166;
      params1.data[1] = array167;
      array_t* array172 = func22(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array172->id);
      free(params1.data);
      array172->refC--;
      if(array172->refC == 0) {
         free(array172->data);
         free(array172);
         DEBUG_FREE(array172->id);
      }
   }
   array166->refC--;
   if(array166->refC == 0) {
      free(array166->data);
      free(array166);
      DEBUG_FREE(array166->id);
   }
   return array167;
}

