#include "second_example.h" 
array_t* func30(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43->refC++;
         DEBUG_COPY(array43->id);
      } else {
         array43 = (array_t*)malloc(sizeof(array_t));
         array43->size = 921;
         array43->refC = 1;
         array43->id = 43;
         array43->data = (unsigned int*)malloc(array43->size*sizeof(unsigned int));
         memset(array43->data, 0, array43->size*sizeof(unsigned int));
         DEBUG_NEW(array43->id);
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/4 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array43->size; i++) {
            array43->data[i]--;
         }
         for (int i = 0; i < array43->size; i++) {
            if (array43->data[i] == 88) { 
               return array43;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array43;
      array_t* array44 = func42(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array44->id);
      free(params0.data);
      array44->refC--;
      if(array44->refC == 0) {
         free(array44->data);
         free(array44);
         DEBUG_FREE(array44->id);
      }
      array43->refC--;
      if(array43->refC == 0) {
         free(array43->data);
         free(array43);
         DEBUG_FREE(array43->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array63 = func34(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array63->id);
      free(params0.data);
      array63->refC--;
      if(array63->refC == 0) {
         free(array63->data);
         free(array63);
         DEBUG_FREE(array63->id);
      }
   }
   array_t* array72;
   if (pCounter > 0) {
      array72 = vars->data[--pCounter];
      array72->refC++;
      DEBUG_COPY(array72->id);
   } else {
      array72 = (array_t*)malloc(sizeof(array_t));
      array72->size = 810;
      array72->refC = 1;
      array72->id = 72;
      array72->data = (unsigned int*)malloc(array72->size*sizeof(unsigned int));
      memset(array72->data, 0, array72->size*sizeof(unsigned int));
      DEBUG_NEW(array72->id);
   }
   return array72;
}

