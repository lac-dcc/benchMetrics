#include "second_example.h" 
array_t* func43(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/4 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      if(PATH0 & 1) {
         array_t* array46;
         if (pCounter > 0) {
            array46 = vars->data[--pCounter];
            array46->refC++;
            DEBUG_COPY(array46->id);
         } else {
            array46 = (array_t*)malloc(sizeof(array_t));
            array46->size = 124;
            array46->refC = 1;
            array46->id = 46;
            array46->data = (unsigned int*)malloc(array46->size*sizeof(unsigned int));
            memset(array46->data, 0, array46->size*sizeof(unsigned int));
            DEBUG_NEW(array46->id);
         }
         unsigned int loop17 = 0;
         unsigned int loopLimit17 = (rand()%loopsFactor)/5 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            for (int i = 0; i < array46->size; i++) {
               array46->data[i]--;
            }
            for (int i = 0; i < array46->size; i++) {
               if (array46->data[i] == 56) { 
                  return array46;
               }
            }
         }
         array46->refC--;
         if(array46->refC == 0) {
            free(array46->data);
            free(array46);
            DEBUG_FREE(array46->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array47 = func52(&params0, loopsFactor);
         DEBUG_RETURN(array47->id);
         free(params0.data);
         array47->refC--;
         if(array47->refC == 0) {
            free(array47->data);
            free(array47);
            DEBUG_FREE(array47->id);
         }
      }
      array_t* array48;
      if (pCounter > 0) {
         array48 = vars->data[--pCounter];
         array48->refC++;
         DEBUG_COPY(array48->id);
      } else {
         array48 = (array_t*)malloc(sizeof(array_t));
         array48->size = 227;
         array48->refC = 1;
         array48->id = 48;
         array48->data = (unsigned int*)malloc(array48->size*sizeof(unsigned int));
         memset(array48->data, 0, array48->size*sizeof(unsigned int));
         DEBUG_NEW(array48->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array48;
      array_t* array49 = func53(&params0, loopsFactor);
      DEBUG_RETURN(array49->id);
      free(params0.data);
      for (int i = 0; i < array48->size; i++) {
         if (array48->data[i] == 32) { 
            return array48;
         }
      }
      array49->refC--;
      if(array49->refC == 0) {
         free(array49->data);
         free(array49);
         DEBUG_FREE(array49->id);
      }
      array48->refC--;
      if(array48->refC == 0) {
         free(array48->data);
         free(array48);
         DEBUG_FREE(array48->id);
      }
   }
   array_t* array50;
   if (pCounter > 0) {
      array50 = vars->data[--pCounter];
      array50->refC++;
      DEBUG_COPY(array50->id);
   } else {
      array50 = (array_t*)malloc(sizeof(array_t));
      array50->size = 551;
      array50->refC = 1;
      array50->id = 50;
      array50->data = (unsigned int*)malloc(array50->size*sizeof(unsigned int));
      memset(array50->data, 0, array50->size*sizeof(unsigned int));
      DEBUG_NEW(array50->id);
   }
   return array50;
}

