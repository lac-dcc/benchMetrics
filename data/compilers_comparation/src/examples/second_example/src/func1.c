#include "second_example.h" 
array_t* func1(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array257;
   if (pCounter > 0) {
      array257 = vars->data[--pCounter];
      array257->refC++;
      DEBUG_COPY(array257->id);
   } else {
      array257 = (array_t*)malloc(sizeof(array_t));
      array257->size = 457;
      array257->refC = 1;
      array257->id = 257;
      array257->data = (unsigned int*)malloc(array257->size*sizeof(unsigned int));
      memset(array257->data, 0, array257->size*sizeof(unsigned int));
      DEBUG_NEW(array257->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array257;
   array_t* array258 = func3(&params0, loopsFactor);
   DEBUG_RETURN(array258->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array261;
      if (pCounter > 0) {
         array261 = vars->data[--pCounter];
         array261->refC++;
         DEBUG_COPY(array261->id);
      } else {
         array261 = (array_t*)malloc(sizeof(array_t));
         array261->size = 959;
         array261->refC = 1;
         array261->id = 261;
         array261->data = (unsigned int*)malloc(array261->size*sizeof(unsigned int));
         memset(array261->data, 0, array261->size*sizeof(unsigned int));
         DEBUG_NEW(array261->id);
      }
      unsigned int loop75 = 0;
      unsigned int loopLimit75 = (rand()%loopsFactor)/2 + 1;
      for(; loop75 < loopLimit75; loop75++) {
         for (int i = 0; i < array257->size; i++) {
            array257->data[i]--;
         }
         for (int i = 0; i < array261->size; i++) {
            if (array261->data[i] == 97) { 
               return array261;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array257;
      params1.data[1] = array258;
      params1.data[2] = array261;
      array_t* array262 = func10(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array262->id);
      free(params1.data);
      array262->refC--;
      if(array262->refC == 0) {
         free(array262->data);
         free(array262);
         DEBUG_FREE(array262->id);
      }
      array261->refC--;
      if(array261->refC == 0) {
         free(array261->data);
         free(array261);
         DEBUG_FREE(array261->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array257;
      params1.data[1] = array258;
      array_t* array263 = func4(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array263->id);
      free(params1.data);
      array263->refC--;
      if(array263->refC == 0) {
         free(array263->data);
         free(array263);
         DEBUG_FREE(array263->id);
      }
   }
   array258->refC--;
   if(array258->refC == 0) {
      free(array258->data);
      free(array258);
      DEBUG_FREE(array258->id);
   }
   return array257;
}

