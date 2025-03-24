#include "first_example.h" 
array_t* func34(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25->refC++;
      DEBUG_COPY(array25->id);
   } else {
      array25 = (array_t*)malloc(sizeof(array_t));
      array25->size = 368;
      array25->refC = 1;
      array25->id = 25;
      array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
      memset(array25->data, 0, array25->size*sizeof(unsigned int));
      DEBUG_NEW(array25->id);
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/4 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array25->size; i++) {
         if (array25->data[i] == 12) { 
            return array25;
         }
      }
   }
   for (int i = 0; i < array25->size; i++) {
      array25->data[i]--;
   }
   for (int i = 0; i < array25->size; i++) {
      if (array25->data[i] == 94) { 
         return array25;
      }
   }
   return array25;
}

