#include "program_cpp_vector.hpp" 
Array* func50(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array24;
   if (pCounter > 0) {
      array24 = vars->data.at(--pCounter);
      array24->refC++;
      DEBUG_COPY(array24->id);
   } else {
      array24 = new Array();
      array24->size = 399;
      array24->refC = 1;
      array24->id = 24;
      array24->data = std::vector<unsigned int>(array24->size, 0);
      DEBUG_NEW(array24->id);
   }
   for (int i = 0; i < array24->size; i++) {
       array24->data.at(i)--;
   }
   for (int i = 0; i < array24->size; i++) {
       if (array24->data.at(i) == 76) {
           return array24;
       }
   }
   return array24;
}

