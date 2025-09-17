#include "program_go.h" 
array_t* func9(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array207;
   if (pCounter > 0) {
      array207 = vars->data[--pCounter];
      array207->refC++;
      DEBUG_COPY(array207->id);
   } else {
      array207 = (array_t*)malloc(sizeof(array_t));
      array207->size = 176;
      array207->refC = 1;
      array207->id = 207;
      array207->data = (unsigned int*)malloc(array207->size*sizeof(unsigned int));
      memset(array207->data, 0, array207->size*sizeof(unsigned int));
      DEBUG_NEW(array207->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array207;
   array_t* array208 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array208->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array211;
      if (pCounter > 0) {
         array211 = vars->data[--pCounter];
         array211->refC++;
         DEBUG_COPY(array211->id);
      } else {
         array211 = (array_t*)malloc(sizeof(array_t));
         array211->size = 818;
         array211->refC = 1;
         array211->id = 211;
         array211->data = (unsigned int*)malloc(array211->size*sizeof(unsigned int));
         memset(array211->data, 0, array211->size*sizeof(unsigned int));
         DEBUG_NEW(array211->id);
      }
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         for (int i = 0; i < array211->size; i++) {
            array211->data[i]--;
         }
         for (int i = 0; i < array207->size; i++) {
            if (array207->data[i] == 49) { 
               return array207;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array207;
      params1.data[1] = array208;
      params1.data[2] = array211;
      array_t* array212 = func24(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array212->id);
      free(params1.data);
      array212->refC--;
      if(array212->refC == 0) {
         free(array212->data);
         free(array212);
         DEBUG_FREE(array212->id);
      }
      array211->refC--;
      if(array211->refC == 0) {
         free(array211->data);
         free(array211);
         DEBUG_FREE(array211->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array207;
      params1.data[1] = array208;
      array_t* array213 = func16(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array213->id);
      free(params1.data);
      array213->refC--;
      if(array213->refC == 0) {
         free(array213->data);
         free(array213);
         DEBUG_FREE(array213->id);
      }
   }
   array207->refC--;
   if(array207->refC == 0) {
      free(array207->data);
      free(array207);
      DEBUG_FREE(array207->id);
   }
   return array208;
}

