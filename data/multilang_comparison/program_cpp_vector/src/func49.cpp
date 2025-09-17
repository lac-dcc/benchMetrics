#include "program_cpp_vector.hpp" 
Array* func49(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array15;
   if (pCounter > 0) {
      array15 = vars->data.at(--pCounter);
      array15->refC++;
      DEBUG_COPY(array15->id);
   } else {
      array15 = new Array();
      array15->size = 873;
      array15->refC = 1;
      array15->id = 15;
      array15->data = std::vector<unsigned int>(array15->size, 0);
      DEBUG_NEW(array15->id);
   }
   return array15;
}

