#include "first_example.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array110;
   if (pCounter > 0) {
      array110 = vars->data[--pCounter];
      array110->refC++;
      DEBUG_COPY(array110->id);
   } else {
      array110 = (array_t*)malloc(sizeof(array_t));
      array110->size = 209;
      array110->refC = 1;
      array110->id = 110;
      array110->data = (unsigned int*)malloc(array110->size*sizeof(unsigned int));
      memset(array110->data, 0, array110->size*sizeof(unsigned int));
      DEBUG_NEW(array110->id);
   }
   unsigned int loop33 = 0;
   unsigned int loopLimit33 = (rand()%loopsFactor)/3 + 1;
   for(; loop33 < loopLimit33; loop33++) {
      if(PATH0 & 1) {
         array_t* array111;
         if (pCounter > 0) {
            array111 = vars->data[--pCounter];
            array111->refC++;
            DEBUG_COPY(array111->id);
         } else {
            array111 = (array_t*)malloc(sizeof(array_t));
            array111->size = 581;
            array111->refC = 1;
            array111->id = 111;
            array111->data = (unsigned int*)malloc(array111->size*sizeof(unsigned int));
            memset(array111->data, 0, array111->size*sizeof(unsigned int));
            DEBUG_NEW(array111->id);
         }
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/4 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            for (int i = 0; i < array111->size; i++) {
               array111->data[i]--;
            }
            for (int i = 0; i < array110->size; i++) {
               if (array110->data[i] == 32) { 
                  return array110;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array110;
         params0.data[1] = array111;
         array_t* array112 = func24(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array112->id);
         free(params0.data);
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
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array110;
         array_t* array113 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array113->id);
         free(params0.data);
         array113->refC--;
         if(array113->refC == 0) {
            free(array113->data);
            free(array113);
            DEBUG_FREE(array113->id);
         }
      }
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
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array110;
      params0.data[1] = array114;
      array_t* array115 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array115->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array116;
         if (pCounter > 0) {
            array116 = vars->data[--pCounter];
            array116->refC++;
            DEBUG_COPY(array116->id);
         } else {
            array116 = (array_t*)malloc(sizeof(array_t));
            array116->size = 850;
            array116->refC = 1;
            array116->id = 116;
            array116->data = (unsigned int*)malloc(array116->size*sizeof(unsigned int));
            memset(array116->data, 0, array116->size*sizeof(unsigned int));
            DEBUG_NEW(array116->id);
         }
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (rand()%loopsFactor)/4 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            for (int i = 0; i < array116->size; i++) {
               array116->data[i]--;
            }
            for (int i = 0; i < array110->size; i++) {
               if (array110->data[i] == 42) { 
                  return array110;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array110;
         params1.data[1] = array114;
         params1.data[2] = array115;
         params1.data[3] = array116;
         array_t* array117 = func28(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array117->id);
         free(params1.data);
         array117->refC--;
         if(array117->refC == 0) {
            free(array117->data);
            free(array117);
            DEBUG_FREE(array117->id);
         }
         array116->refC--;
         if(array116->refC == 0) {
            free(array116->data);
            free(array116);
            DEBUG_FREE(array116->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array110;
         params1.data[1] = array114;
         params1.data[2] = array115;
         array_t* array118 = func22(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array118->id);
         free(params1.data);
         array118->refC--;
         if(array118->refC == 0) {
            free(array118->data);
            free(array118);
            DEBUG_FREE(array118->id);
         }
      }
      for (int i = 0; i < array115->size; i++) {
         if (array115->data[i] == 67) { 
            return array115;
         }
      }
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
   for (int i = 0; i < array110->size; i++) {
      array110->data[i]--;
   }
   for (int i = 0; i < array110->size; i++) {
      if (array110->data[i] == 61) { 
         return array110;
      }
   }
   return array110;
}

