#include "third_example.h" 
array_t* func7(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array148;
   if (pCounter > 0) {
      array148 = vars->data[--pCounter];
      array148->refC++;
      DEBUG_COPY(array148->id);
   } else {
      array148 = (array_t*)malloc(sizeof(array_t));
      array148->size = 949;
      array148->refC = 1;
      array148->id = 148;
      array148->data = (unsigned int*)malloc(array148->size*sizeof(unsigned int));
      memset(array148->data, 0, array148->size*sizeof(unsigned int));
      DEBUG_NEW(array148->id);
   }
   unsigned int loop58 = 0;
   unsigned int loopLimit58 = (rand()%loopsFactor)/2 + 1;
   for(; loop58 < loopLimit58; loop58++) {
      for (int i = 0; i < array148->size; i++) {
         array148->data[i]--;
      }
   }
   array_t* array149;
   if (pCounter > 0) {
      array149 = vars->data[--pCounter];
      array149->refC++;
      DEBUG_COPY(array149->id);
   } else {
      array149 = (array_t*)malloc(sizeof(array_t));
      array149->size = 367;
      array149->refC = 1;
      array149->id = 149;
      array149->data = (unsigned int*)malloc(array149->size*sizeof(unsigned int));
      memset(array149->data, 0, array149->size*sizeof(unsigned int));
      DEBUG_NEW(array149->id);
   }
   if(PATH0 & 1) {
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         array_t* array150;
         if (pCounter > 0) {
            array150 = vars->data[--pCounter];
            array150->refC++;
            DEBUG_COPY(array150->id);
         } else {
            array150 = (array_t*)malloc(sizeof(array_t));
            array150->size = 988;
            array150->refC = 1;
            array150->id = 150;
            array150->data = (unsigned int*)malloc(array150->size*sizeof(unsigned int));
            memset(array150->data, 0, array150->size*sizeof(unsigned int));
            DEBUG_NEW(array150->id);
         }
         for (int i = 0; i < array148->size; i++) {
            array148->data[i]--;
         }
         for (int i = 0; i < array150->size; i++) {
            if (array150->data[i] == 43) { 
               return array150;
            }
         }
         array150->refC--;
         if(array150->refC == 0) {
            free(array150->data);
            free(array150);
            DEBUG_FREE(array150->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array148;
      params0.data[1] = array149;
      array_t* array151 = func16(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array151->id);
      free(params0.data);
      array151->refC--;
      if(array151->refC == 0) {
         free(array151->data);
         free(array151);
         DEBUG_FREE(array151->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array148;
   params0.data[1] = array149;
   array_t* array152 = func13(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array152->id);
   free(params0.data);
   unsigned int loop60 = 0;
   unsigned int loopLimit60 = (rand()%loopsFactor)/2 + 1;
   for(; loop60 < loopLimit60; loop60++) {
      for (int i = 0; i < array152->size; i++) {
         array152->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array148;
   params1.data[1] = array149;
   params1.data[2] = array152;
   array_t* array153 = func10(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array153->id);
   free(params1.data);
   for (int i = 0; i < array152->size; i++) {
      if (array152->data[i] == 32) { 
         return array152;
      }
   }
   array153->refC--;
   if(array153->refC == 0) {
      free(array153->data);
      free(array153);
      DEBUG_FREE(array153->id);
   }
   array152->refC--;
   if(array152->refC == 0) {
      free(array152->data);
      free(array152);
      DEBUG_FREE(array152->id);
   }
   array148->refC--;
   if(array148->refC == 0) {
      free(array148->data);
      free(array148);
      DEBUG_FREE(array148->id);
   }
   return array149;
}

