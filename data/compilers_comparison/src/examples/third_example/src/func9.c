#include "third_example.h" 
array_t* func9(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array111;
   if (pCounter > 0) {
      array111 = vars->data[--pCounter];
      array111->refC++;
      DEBUG_COPY(array111->id);
   } else {
      array111 = (array_t*)malloc(sizeof(array_t));
      array111->size = 769;
      array111->refC = 1;
      array111->id = 111;
      array111->data = (unsigned int*)malloc(array111->size*sizeof(unsigned int));
      memset(array111->data, 0, array111->size*sizeof(unsigned int));
      DEBUG_NEW(array111->id);
   }
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (rand()%loopsFactor)/2 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      for (int i = 0; i < array111->size; i++) {
         array111->data[i]--;
      }
   }
   array_t* array112;
   if (pCounter > 0) {
      array112 = vars->data[--pCounter];
      array112->refC++;
      DEBUG_COPY(array112->id);
   } else {
      array112 = (array_t*)malloc(sizeof(array_t));
      array112->size = 776;
      array112->refC = 1;
      array112->id = 112;
      array112->data = (unsigned int*)malloc(array112->size*sizeof(unsigned int));
      memset(array112->data, 0, array112->size*sizeof(unsigned int));
      DEBUG_NEW(array112->id);
   }
   if(PATH0 & 1) {
      unsigned int loop46 = 0;
      unsigned int loopLimit46 = (rand()%loopsFactor)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         array_t* array113;
         if (pCounter > 0) {
            array113 = vars->data[--pCounter];
            array113->refC++;
            DEBUG_COPY(array113->id);
         } else {
            array113 = (array_t*)malloc(sizeof(array_t));
            array113->size = 850;
            array113->refC = 1;
            array113->id = 113;
            array113->data = (unsigned int*)malloc(array113->size*sizeof(unsigned int));
            memset(array113->data, 0, array113->size*sizeof(unsigned int));
            DEBUG_NEW(array113->id);
         }
         for (int i = 0; i < array112->size; i++) {
            array112->data[i]--;
         }
         for (int i = 0; i < array112->size; i++) {
            if (array112->data[i] == 42) { 
               return array112;
            }
         }
         array113->refC--;
         if(array113->refC == 0) {
            free(array113->data);
            free(array113);
            DEBUG_FREE(array113->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array111;
      params0.data[1] = array112;
      array_t* array114 = func18(&params0, loopsFactor);
      DEBUG_RETURN(array114->id);
      free(params0.data);
      array114->refC--;
      if(array114->refC == 0) {
         free(array114->data);
         free(array114);
         DEBUG_FREE(array114->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array111;
   params0.data[1] = array112;
   array_t* array115 = func15(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array115->id);
   free(params0.data);
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (rand()%loopsFactor)/2 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      for (int i = 0; i < array115->size; i++) {
         array115->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array111;
   params1.data[1] = array112;
   params1.data[2] = array115;
   array_t* array116 = func12(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array116->id);
   free(params1.data);
   for (int i = 0; i < array112->size; i++) {
      if (array112->data[i] == 61) { 
         return array112;
      }
   }
   array116->refC--;
   if(array116->refC == 0) {
      free(array116->data);
      free(array116);
      DEBUG_FREE(array116->id);
   }
   array112->refC--;
   if(array112->refC == 0) {
      free(array112->data);
      free(array112);
      DEBUG_FREE(array112->id);
   }
   array111->refC--;
   if(array111->refC == 0) {
      free(array111->data);
      free(array111);
      DEBUG_FREE(array111->id);
   }
   return array115;
}

