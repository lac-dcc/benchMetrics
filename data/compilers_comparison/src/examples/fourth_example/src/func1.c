#include "fourth_example.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array227;
   if (pCounter > 0) {
      array227 = vars->data[--pCounter];
      array227->refC++;
      DEBUG_COPY(array227->id);
   } else {
      array227 = (array_t*)malloc(sizeof(array_t));
      array227->size = 90;
      array227->refC = 1;
      array227->id = 227;
      array227->data = (unsigned int*)malloc(array227->size*sizeof(unsigned int));
      memset(array227->data, 0, array227->size*sizeof(unsigned int));
      DEBUG_NEW(array227->id);
   }
   for (int i = 0; i < array227->size; i++) {
      if (array227->data[i] == 30) { 
         return array227;
      }
   }
   return array227;
}

