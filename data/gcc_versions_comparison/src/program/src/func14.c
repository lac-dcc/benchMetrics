#include "program.h" 
array_t* func14(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array147;
   if (pCounter > 0) {
      array147 = vars->data[--pCounter];
      array147->refC++;
      DEBUG_COPY(array147->id);
   } else {
      array147 = (array_t*)malloc(sizeof(array_t));
      array147->size = 504;
      array147->refC = 1;
      array147->id = 147;
      array147->data = (unsigned int*)malloc(array147->size*sizeof(unsigned int));
      memset(array147->data, 0, array147->size*sizeof(unsigned int));
      DEBUG_NEW(array147->id);
   }
   unsigned int loop43 = 0;
   unsigned int loopLimit43 = (rand()%loopsFactor)/3 + 1;
   for(; loop43 < loopLimit43; loop43++) {
      if(PATH0 & 1) {
         array_t* array148;
         if (pCounter > 0) {
            array148 = vars->data[--pCounter];
            array148->refC++;
            DEBUG_COPY(array148->id);
         } else {
            array148 = (array_t*)malloc(sizeof(array_t));
            array148->size = 629;
            array148->refC = 1;
            array148->id = 148;
            array148->data = (unsigned int*)malloc(array148->size*sizeof(unsigned int));
            memset(array148->data, 0, array148->size*sizeof(unsigned int));
            DEBUG_NEW(array148->id);
         }
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/4 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            for (int i = 0; i < array148->size; i++) {
               array148->data[i]--;
            }
            for (int i = 0; i < array147->size; i++) {
               if (array147->data[i] == 85) { 
                  return array147;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array147;
         params0.data[1] = array148;
         array_t* array149 = func28(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array149->id);
         free(params0.data);
         array149->refC--;
         if(array149->refC == 0) {
            free(array149->data);
            free(array149);
            DEBUG_FREE(array149->id);
         }
         array148->refC--;
         if(array148->refC == 0) {
            free(array148->data);
            free(array148);
            DEBUG_FREE(array148->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array147;
         array_t* array150 = func22(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array150->id);
         free(params0.data);
         array150->refC--;
         if(array150->refC == 0) {
            free(array150->data);
            free(array150);
            DEBUG_FREE(array150->id);
         }
      }
      array_t* array151;
      if (pCounter > 0) {
         array151 = vars->data[--pCounter];
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = (array_t*)malloc(sizeof(array_t));
         array151->size = 900;
         array151->refC = 1;
         array151->id = 151;
         array151->data = (unsigned int*)malloc(array151->size*sizeof(unsigned int));
         memset(array151->data, 0, array151->size*sizeof(unsigned int));
         DEBUG_NEW(array151->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array147;
      params0.data[1] = array151;
      array_t* array152 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array153;
         if (pCounter > 0) {
            array153 = vars->data[--pCounter];
            array153->refC++;
            DEBUG_COPY(array153->id);
         } else {
            array153 = (array_t*)malloc(sizeof(array_t));
            array153->size = 949;
            array153->refC = 1;
            array153->id = 153;
            array153->data = (unsigned int*)malloc(array153->size*sizeof(unsigned int));
            memset(array153->data, 0, array153->size*sizeof(unsigned int));
            DEBUG_NEW(array153->id);
         }
         unsigned int loop45 = 0;
         unsigned int loopLimit45 = (rand()%loopsFactor)/4 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            for (int i = 0; i < array151->size; i++) {
               array151->data[i]--;
            }
            for (int i = 0; i < array153->size; i++) {
               if (array153->data[i] == 88) { 
                  return array153;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array147;
         params1.data[1] = array151;
         params1.data[2] = array152;
         params1.data[3] = array153;
         array_t* array154 = func36(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array154->id);
         free(params1.data);
         array154->refC--;
         if(array154->refC == 0) {
            free(array154->data);
            free(array154);
            DEBUG_FREE(array154->id);
         }
         array153->refC--;
         if(array153->refC == 0) {
            free(array153->data);
            free(array153);
            DEBUG_FREE(array153->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array147;
         params1.data[1] = array151;
         params1.data[2] = array152;
         array_t* array155 = func32(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array155->id);
         free(params1.data);
         array155->refC--;
         if(array155->refC == 0) {
            free(array155->data);
            free(array155);
            DEBUG_FREE(array155->id);
         }
      }
      for (int i = 0; i < array147->size; i++) {
         if (array147->data[i] == 90) { 
            return array147;
         }
      }
      array152->refC--;
      if(array152->refC == 0) {
         free(array152->data);
         free(array152);
         DEBUG_FREE(array152->id);
      }
      array151->refC--;
      if(array151->refC == 0) {
         free(array151->data);
         free(array151);
         DEBUG_FREE(array151->id);
      }
   }
   for (int i = 0; i < array147->size; i++) {
      array147->data[i]--;
   }
   for (int i = 0; i < array147->size; i++) {
      if (array147->data[i] == 41) { 
         return array147;
      }
   }
   return array147;
}

