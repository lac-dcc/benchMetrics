#include "program_cpp_vector.hpp" 
Array* func47(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array11;
   if (pCounter > 0) {
      array11 = vars->data.at(--pCounter);
      array11->refC++;
      DEBUG_COPY(array11->id);
   } else {
      array11 = new Array();
      array11->size = 919;
      array11->refC = 1;
      array11->id = 11;
      array11->data = std::vector<unsigned int>(array11->size, 0);
      DEBUG_NEW(array11->id);
   }
   return array11;
}

