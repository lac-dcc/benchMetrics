#include "program_cpp_vector.hpp" 
Array* func43(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array19;
   if (pCounter > 0) {
      array19 = vars->data.at(--pCounter);
      array19->refC++;
      DEBUG_COPY(array19->id);
   } else {
      array19 = new Array();
      array19->size = 814;
      array19->refC = 1;
      array19->id = 19;
      array19->data = std::vector<unsigned int>(array19->size, 0);
      DEBUG_NEW(array19->id);
   }
   return array19;
}

