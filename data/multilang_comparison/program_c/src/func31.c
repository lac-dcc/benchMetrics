#include "program_c.h" 
array_t* func31(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array28;
   if (pCounter > 0) {
      array28 = vars->data[--pCounter];
      array28->refC++;
      DEBUG_COPY(array28->id);
   } else {
      array28 = (array_t*)malloc(sizeof(array_t));
      array28->size = 97;
      array28->refC = 1;
      array28->id = 28;
      array28->data = (unsigned int*)malloc(array28->size*sizeof(unsigned int));
      memset(array28->data, 0, array28->size*sizeof(unsigned int));
      DEBUG_NEW(array28->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array28;
   array_t* array29 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array29->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32->refC++;
         DEBUG_COPY(array32->id);
      } else {
         array32 = (array_t*)malloc(sizeof(array_t));
         array32->size = 444;
         array32->refC = 1;
         array32->id = 32;
         array32->data = (unsigned int*)malloc(array32->size*sizeof(unsigned int));
         memset(array32->data, 0, array32->size*sizeof(unsigned int));
         DEBUG_NEW(array32->id);
      }
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (50)/4 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         for (int i = 0; i < array32->size; i++) {
            array32->data[i]--;
         }
         for (int i = 0; i < array29->size; i++) {
            if (array29->data[i] == 29) { 
               return array29;
            }
         }
      }
      array32->refC--;
      if(array32->refC == 0) {
         free(array32->data);
         free(array32);
         DEBUG_FREE(array32->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array28;
      params1.data[1] = array29;
      array_t* array33 = func40(&params1, loopsFactor);
      DEBUG_RETURN(array33->id);
      free(params1.data);
      array33->refC--;
      if(array33->refC == 0) {
         free(array33->data);
         free(array33);
         DEBUG_FREE(array33->id);
      }
   }
   array28->refC--;
   if(array28->refC == 0) {
      free(array28->data);
      free(array28);
      DEBUG_FREE(array28->id);
   }
   return array29;
}

