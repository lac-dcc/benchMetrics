#include "fourth_example.h" 
array_t* func28(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array39;
   if (pCounter > 0) {
      array39 = vars->data[--pCounter];
      array39->refC++;
      DEBUG_COPY(array39->id);
   } else {
      array39 = (array_t*)malloc(sizeof(array_t));
      array39->size = 219;
      array39->refC = 1;
      array39->id = 39;
      array39->data = (unsigned int*)malloc(array39->size*sizeof(unsigned int));
      memset(array39->data, 0, array39->size*sizeof(unsigned int));
      DEBUG_NEW(array39->id);
   }
   for (int i = 0; i < array39->size; i++) {
      array39->data[i]++;
   }
   for (int i = 0; i < array39->size; i++) {
      if (array39->data[i] == 71) { 
         return array39;
      }
   }
   for (int i = 0; i < array39->size; i++) {
      array39->data[i]--;
   }
   return array39;
}

