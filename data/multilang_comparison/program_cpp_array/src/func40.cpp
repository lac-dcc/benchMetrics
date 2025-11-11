#include "program_cpp_array.hpp" 
Array* func40(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10->refC++;
      DEBUG_COPY(array10->id);
   } else {
      array10 = new Array();
      array10->size = 42;
      array10->refC = 1;
      array10->id = 10;
      array10->data = new unsigned int[array10->size]();
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

