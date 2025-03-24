#include "second_example.h" 
array_t* func27(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array147;
   if (pCounter > 0) {
      array147 = vars->data[--pCounter];
      array147->refC++;
      DEBUG_COPY(array147->id);
   } else {
      array147 = (array_t*)malloc(sizeof(array_t));
      array147->size = 49;
      array147->refC = 1;
      array147->id = 147;
      array147->data = (unsigned int*)malloc(array147->size*sizeof(unsigned int));
      memset(array147->data, 0, array147->size*sizeof(unsigned int));
      DEBUG_NEW(array147->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array147;
   array_t* array148 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array148->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array151;
      if (pCounter > 0) {
         array151 = vars->data[--pCounter];
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = (array_t*)malloc(sizeof(array_t));
         array151->size = 367;
         array151->refC = 1;
         array151->id = 151;
         array151->data = (unsigned int*)malloc(array151->size*sizeof(unsigned int));
         memset(array151->data, 0, array151->size*sizeof(unsigned int));
         DEBUG_NEW(array151->id);
      }
      unsigned int loop45 = 0;
      unsigned int loopLimit45 = (rand()%loopsFactor)/3 + 1;
      for(; loop45 < loopLimit45; loop45++) {
         for (int i = 0; i < array148->size; i++) {
            array148->data[i]--;
         }
         for (int i = 0; i < array147->size; i++) {
            if (array147->data[i] == 95) { 
               return array147;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array147;
      params1.data[1] = array148;
      params1.data[2] = array151;
      array_t* array152 = func42(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array152->id);
      free(params1.data);
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
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array147;
      params1.data[1] = array148;
      array_t* array153 = func34(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array153->id);
      free(params1.data);
      array153->refC--;
      if(array153->refC == 0) {
         free(array153->data);
         free(array153);
         DEBUG_FREE(array153->id);
      }
   }
   array148->refC--;
   if(array148->refC == 0) {
      free(array148->data);
      free(array148);
      DEBUG_FREE(array148->id);
   }
   return array147;
}

