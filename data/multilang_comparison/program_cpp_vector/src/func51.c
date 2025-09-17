#include "program_cpp_vector.h" 
array_t* func51(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array38;
   if (pCounter > 0) {
      array38 = vars->data[--pCounter];
      array38->refC++;
      DEBUG_COPY(array38->id);
   } else {
      array38 = (array_t*)malloc(sizeof(array_t));
      array38->size = 683;
      array38->refC = 1;
      array38->id = 38;
      array38->data = (unsigned int*)malloc(array38->size*sizeof(unsigned int));
      memset(array38->data, 0, array38->size*sizeof(unsigned int));
      DEBUG_NEW(array38->id);
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/4 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]++;
      }
   }
   for (int i = 0; i < array38->size; i++) {
      if (array38->data[i] == 28) { 
         return array38;
      }
   }
   return array38;
}

