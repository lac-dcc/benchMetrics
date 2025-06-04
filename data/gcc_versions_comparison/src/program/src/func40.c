#include "program.h" 
array_t* func40(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10->refC++;
      DEBUG_COPY(array10->id);
   } else {
      array10 = (array_t*)malloc(sizeof(array_t));
      array10->size = 42;
      array10->refC = 1;
      array10->id = 10;
      array10->data = (unsigned int*)malloc(array10->size*sizeof(unsigned int));
      memset(array10->data, 0, array10->size*sizeof(unsigned int));
      DEBUG_NEW(array10->id);
   }
   for (int i = 0; i < array10->size; i++) {
      array10->data[i]--;
   }
   for (int i = 0; i < array10->size; i++) {
      if (array10->data[i] == 21) { 
         return array10;
      }
   }
   return array10;
}

