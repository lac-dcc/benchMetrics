#include "program_vector_cpp.hpp" 
Array* func50(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array24;
   if (pCounter > 0) {
      array24 = vars->data[--pCounter];
      array24->refC++;
      DEBUG_COPY(array24->id);
   } else {
      array24 = new Array();
      array24->size = 399;
      array24->refC = 1;
      array24->id = 24;
      array24->data = new unsigned int[array24->size]();
      DEBUG_NEW(array24->id);
   }
   for (int i = 0; i < array24->size; i++) {
       array24->data[i]--;
   }
   for (int i = 0; i < array24->size; i++) {
       if (array24->data[i] == 76) {
           return array24;
       }
   }
   return array24;
}

