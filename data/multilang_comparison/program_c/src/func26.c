#include "program_c.h" 
array_t* func26(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array78;
      if (pCounter > 0) {
         array78 = vars->data[--pCounter];
         array78->refC++;
         DEBUG_COPY(array78->id);
      } else {
         array78 = (array_t*)malloc(sizeof(array_t));
         array78->size = 924;
         array78->refC = 1;
         array78->id = 78;
         array78->data = (unsigned int*)malloc(array78->size*sizeof(unsigned int));
         memset(array78->data, 0, array78->size*sizeof(unsigned int));
         DEBUG_NEW(array78->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (50)/3 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array78->size; i++) {
            array78->data[i]--;
         }
         for (int i = 0; i < array78->size; i++) {
            if (array78->data[i] == 24) { 
               return array78;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array78;
      array_t* array79 = func36(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array79->id);
      free(params0.data);
      array79->refC--;
      if(array79->refC == 0) {
         free(array79->data);
         free(array79);
         DEBUG_FREE(array79->id);
      }
      array78->refC--;
      if(array78->refC == 0) {
         free(array78->data);
         free(array78);
         DEBUG_FREE(array78->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array80 = func32(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array80->id);
      free(params0.data);
      array80->refC--;
      if(array80->refC == 0) {
         free(array80->data);
         free(array80);
         DEBUG_FREE(array80->id);
      }
   }
   array_t* array81;
   if (pCounter > 0) {
      array81 = vars->data[--pCounter];
      array81->refC++;
      DEBUG_COPY(array81->id);
   } else {
      array81 = (array_t*)malloc(sizeof(array_t));
      array81->size = 379;
      array81->refC = 1;
      array81->id = 81;
      array81->data = (unsigned int*)malloc(array81->size*sizeof(unsigned int));
      memset(array81->data, 0, array81->size*sizeof(unsigned int));
      DEBUG_NEW(array81->id);
   }
   return array81;
}

