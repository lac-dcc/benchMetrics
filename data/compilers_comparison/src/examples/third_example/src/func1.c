#include "third_example.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array173;
   if (pCounter > 0) {
      array173 = vars->data[--pCounter];
      array173->refC++;
      DEBUG_COPY(array173->id);
   } else {
      array173 = (array_t*)malloc(sizeof(array_t));
      array173->size = 987;
      array173->refC = 1;
      array173->id = 173;
      array173->data = (unsigned int*)malloc(array173->size*sizeof(unsigned int));
      memset(array173->data, 0, array173->size*sizeof(unsigned int));
      DEBUG_NEW(array173->id);
   }
   for (int i = 0; i < array173->size; i++) {
      if (array173->data[i] == 38) { 
         return array173;
      }
   }
   return array173;
}

