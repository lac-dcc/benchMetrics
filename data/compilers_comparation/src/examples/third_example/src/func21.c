#include "third_example.h" 
array_t* func21(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array21;
   if (pCounter > 0) {
      array21 = vars->data[--pCounter];
      array21->refC++;
      DEBUG_COPY(array21->id);
   } else {
      array21 = (array_t*)malloc(sizeof(array_t));
      array21->size = 895;
      array21->refC = 1;
      array21->id = 21;
      array21->data = (unsigned int*)malloc(array21->size*sizeof(unsigned int));
      memset(array21->data, 0, array21->size*sizeof(unsigned int));
      DEBUG_NEW(array21->id);
   }
   for (int i = 0; i < array21->size; i++) {
      array21->data[i]++;
   }
   for (int i = 0; i < array21->size; i++) {
      if (array21->data[i] == 14) { 
         return array21;
      }
   }
   for (int i = 0; i < array21->size; i++) {
      array21->data[i]--;
   }
   return array21;
}

