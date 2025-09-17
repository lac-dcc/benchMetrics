#include "program_cpp_vector.h" 
array_t* func40(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17->refC++;
      DEBUG_COPY(array17->id);
   } else {
      array17 = (array_t*)malloc(sizeof(array_t));
      array17->size = 84;
      array17->refC = 1;
      array17->id = 17;
      array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
      memset(array17->data, 0, array17->size*sizeof(unsigned int));
      DEBUG_NEW(array17->id);
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/5 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array17->size; i++) {
         if (array17->data[i] == 36) { 
            return array17;
         }
      }
   }
   for (int i = 0; i < array17->size; i++) {
      array17->data[i]--;
   }
   for (int i = 0; i < array17->size; i++) {
      if (array17->data[i] == 29) { 
         return array17;
      }
   }
   return array17;
}

