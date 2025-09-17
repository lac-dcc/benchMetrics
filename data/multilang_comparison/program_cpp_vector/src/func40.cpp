#include "program_vector_cpp.hpp" 
Array* func40(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17->refC++;
      DEBUG_COPY(array17->id);
   } else {
      array17 = new Array();
      array17->size = 84;
      array17->refC = 1;
      array17->id = 17;
      array17->data = new unsigned int[array17->size]();
      DEBUG_NEW(array17->id);
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (50)/5 + 1;
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

