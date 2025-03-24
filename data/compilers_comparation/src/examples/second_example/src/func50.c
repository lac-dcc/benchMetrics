#include "second_example.h" 
array_t* func50(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array40;
   if (pCounter > 0) {
      array40 = vars->data[--pCounter];
      array40->refC++;
      DEBUG_COPY(array40->id);
   } else {
      array40 = (array_t*)malloc(sizeof(array_t));
      array40->size = 829;
      array40->refC = 1;
      array40->id = 40;
      array40->data = (unsigned int*)malloc(array40->size*sizeof(unsigned int));
      memset(array40->data, 0, array40->size*sizeof(unsigned int));
      DEBUG_NEW(array40->id);
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/5 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      for (int i = 0; i < array40->size; i++) {
         if (array40->data[i] == 19) { 
            return array40;
         }
      }
   }
   for (int i = 0; i < array40->size; i++) {
      array40->data[i]--;
   }
   for (int i = 0; i < array40->size; i++) {
      if (array40->data[i] == 8) { 
         return array40;
      }
   }
   return array40;
}

