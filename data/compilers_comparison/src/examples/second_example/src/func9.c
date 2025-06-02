#include "second_example.h" 
array_t* func9(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array239;
   if (pCounter > 0) {
      array239 = vars->data[--pCounter];
      array239->refC++;
      DEBUG_COPY(array239->id);
   } else {
      array239 = (array_t*)malloc(sizeof(array_t));
      array239->size = 981;
      array239->refC = 1;
      array239->id = 239;
      array239->data = (unsigned int*)malloc(array239->size*sizeof(unsigned int));
      memset(array239->data, 0, array239->size*sizeof(unsigned int));
      DEBUG_NEW(array239->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array239;
   array_t* array240 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array240->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array243;
      if (pCounter > 0) {
         array243 = vars->data[--pCounter];
         array243->refC++;
         DEBUG_COPY(array243->id);
      } else {
         array243 = (array_t*)malloc(sizeof(array_t));
         array243->size = 321;
         array243->refC = 1;
         array243->id = 243;
         array243->data = (unsigned int*)malloc(array243->size*sizeof(unsigned int));
         memset(array243->data, 0, array243->size*sizeof(unsigned int));
         DEBUG_NEW(array243->id);
      }
      unsigned int loop70 = 0;
      unsigned int loopLimit70 = (rand()%loopsFactor)/2 + 1;
      for(; loop70 < loopLimit70; loop70++) {
         for (int i = 0; i < array243->size; i++) {
            array243->data[i]--;
         }
         for (int i = 0; i < array243->size; i++) {
            if (array243->data[i] == 72) { 
               return array243;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array239;
      params1.data[1] = array240;
      params1.data[2] = array243;
      array_t* array244 = func24(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array244->id);
      free(params1.data);
      array244->refC--;
      if(array244->refC == 0) {
         free(array244->data);
         free(array244);
         DEBUG_FREE(array244->id);
      }
      array243->refC--;
      if(array243->refC == 0) {
         free(array243->data);
         free(array243);
         DEBUG_FREE(array243->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array239;
      params1.data[1] = array240;
      array_t* array245 = func16(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array245->id);
      free(params1.data);
      array245->refC--;
      if(array245->refC == 0) {
         free(array245->data);
         free(array245);
         DEBUG_FREE(array245->id);
      }
   }
   array240->refC--;
   if(array240->refC == 0) {
      free(array240->data);
      free(array240);
      DEBUG_FREE(array240->id);
   }
   return array239;
}

