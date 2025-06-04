#include "program.h" 
array_t* func41(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13->refC++;
      DEBUG_COPY(array13->id);
   } else {
      array13 = (array_t*)malloc(sizeof(array_t));
      array13->size = 370;
      array13->refC = 1;
      array13->id = 13;
      array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
      memset(array13->data, 0, array13->size*sizeof(unsigned int));
      DEBUG_NEW(array13->id);
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/5 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]++;
      }
   }
   for (int i = 0; i < array13->size; i++) {
      if (array13->data[i] == 91) { 
         return array13;
      }
   }
   return array13;
}

