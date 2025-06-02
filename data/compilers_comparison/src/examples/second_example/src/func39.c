#include "second_example.h" 
array_t* func39(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array112;
   if (pCounter > 0) {
      array112 = vars->data[--pCounter];
      array112->refC++;
      DEBUG_COPY(array112->id);
   } else {
      array112 = (array_t*)malloc(sizeof(array_t));
      array112->size = 994;
      array112->refC = 1;
      array112->id = 112;
      array112->data = (unsigned int*)malloc(array112->size*sizeof(unsigned int));
      memset(array112->data, 0, array112->size*sizeof(unsigned int));
      DEBUG_NEW(array112->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array112;
   array_t* array113 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array113->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array114;
      if (pCounter > 0) {
         array114 = vars->data[--pCounter];
         array114->refC++;
         DEBUG_COPY(array114->id);
      } else {
         array114 = (array_t*)malloc(sizeof(array_t));
         array114->size = 769;
         array114->refC = 1;
         array114->id = 114;
         array114->data = (unsigned int*)malloc(array114->size*sizeof(unsigned int));
         memset(array114->data, 0, array114->size*sizeof(unsigned int));
         DEBUG_NEW(array114->id);
      }
      unsigned int loop35 = 0;
      unsigned int loopLimit35 = (rand()%loopsFactor)/4 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         for (int i = 0; i < array112->size; i++) {
            array112->data[i]--;
         }
         for (int i = 0; i < array114->size; i++) {
            if (array114->data[i] == 50) { 
               return array114;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array112;
      params1.data[1] = array113;
      params1.data[2] = array114;
      array_t* array115 = func54(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array115->id);
      free(params1.data);
      array115->refC--;
      if(array115->refC == 0) {
         free(array115->data);
         free(array115);
         DEBUG_FREE(array115->id);
      }
      array114->refC--;
      if(array114->refC == 0) {
         free(array114->data);
         free(array114);
         DEBUG_FREE(array114->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array112;
      params1.data[1] = array113;
      array_t* array116 = func50(&params1, loopsFactor);
      DEBUG_RETURN(array116->id);
      free(params1.data);
      array116->refC--;
      if(array116->refC == 0) {
         free(array116->data);
         free(array116);
         DEBUG_FREE(array116->id);
      }
   }
   array113->refC--;
   if(array113->refC == 0) {
      free(array113->data);
      free(array113);
      DEBUG_FREE(array113->id);
   }
   return array112;
}

