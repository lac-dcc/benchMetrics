#include "program_cpp_vector.hpp" 
Array* func48(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array13;
   if (pCounter > 0) {
      array13 = vars->data.at(--pCounter);
      array13->refC++;
      DEBUG_COPY(array13->id);
   } else {
      array13 = new Array();
      array13->size = 370;
      array13->refC = 1;
      array13->id = 13;
      array13->data = std::vector<unsigned int>(array13->size, 0);
      DEBUG_NEW(array13->id);
   }
   return array13;
}

