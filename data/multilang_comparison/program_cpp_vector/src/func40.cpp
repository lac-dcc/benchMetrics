#include "program_cpp_vector.hpp" 
Array* func40(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array10;
   if (pCounter > 0) {
      array10 = vars->data.at(--pCounter);
      array10->refC++;
      DEBUG_COPY(array10->id);
   } else {
      array10 = new Array();
      array10->size = 42;
      array10->refC = 1;
      array10->id = 10;
      array10->data = std::vector<unsigned int>(array10->size, 0);
      DEBUG_NEW(array10->id);
   }
   for (int i = 0; i < array10->size; i++) {
       array10->data.at(i)--;
   }
   for (int i = 0; i < array10->size; i++) {
       if (array10->data.at(i) == 21) {
           return array10;
       }
   }
   return array10;
}

