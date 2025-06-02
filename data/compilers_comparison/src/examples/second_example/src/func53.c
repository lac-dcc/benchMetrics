#include "second_example.h" 
array_t* func53(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20->refC++;
      DEBUG_COPY(array20->id);
   } else {
      array20 = (array_t*)malloc(sizeof(array_t));
      array20->size = 545;
      array20->refC = 1;
      array20->id = 20;
      array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
      memset(array20->data, 0, array20->size*sizeof(unsigned int));
      DEBUG_NEW(array20->id);
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/5 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array20->size; i++) {
         array20->data[i]++;
      }
   }
   for (int i = 0; i < array20->size; i++) {
      if (array20->data[i] == 34) { 
         return array20;
      }
   }
   return array20;
}

