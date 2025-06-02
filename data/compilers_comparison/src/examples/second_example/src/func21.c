#include "second_example.h" 
array_t* func21(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array205;
   if (pCounter > 0) {
      array205 = vars->data[--pCounter];
      array205->refC++;
      DEBUG_COPY(array205->id);
   } else {
      array205 = (array_t*)malloc(sizeof(array_t));
      array205->size = 685;
      array205->refC = 1;
      array205->id = 205;
      array205->data = (unsigned int*)malloc(array205->size*sizeof(unsigned int));
      memset(array205->data, 0, array205->size*sizeof(unsigned int));
      DEBUG_NEW(array205->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array205;
   array_t* array206 = func23(&params0, loopsFactor);
   DEBUG_RETURN(array206->id);
   free(params0.data);
   if(PATH0 & 1) {
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
      unsigned int loop60 = 0;
      unsigned int loopLimit60 = (rand()%loopsFactor)/3 + 1;
      for(; loop60 < loopLimit60; loop60++) {
         for (int i = 0; i < array205->size; i++) {
            array205->data[i]--;
         }
         for (int i = 0; i < array207->size; i++) {
            if (array207->data[i] == 59) { 
               return array207;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array205;
      params1.data[1] = array206;
      params1.data[2] = array207;
      array_t* array208 = func36(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array208->id);
      free(params1.data);
      array208->refC--;
      if(array208->refC == 0) {
         free(array208->data);
         free(array208);
         DEBUG_FREE(array208->id);
      }
      array207->refC--;
      if(array207->refC == 0) {
         free(array207->data);
         free(array207);
         DEBUG_FREE(array207->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array205;
      params1.data[1] = array206;
      array_t* array209 = func32(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array209->id);
      free(params1.data);
      array209->refC--;
      if(array209->refC == 0) {
         free(array209->data);
         free(array209);
         DEBUG_FREE(array209->id);
      }
   }
   array205->refC--;
   if(array205->refC == 0) {
      free(array205->data);
      free(array205);
      DEBUG_FREE(array205->id);
   }
   return array206;
}

