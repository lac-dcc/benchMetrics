#include "program_cpp_array.hpp" 
Array* func44(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array21;
   if (pCounter > 0) {
      array21 = vars->data[--pCounter];
      array21->refC++;
      DEBUG_COPY(array21->id);
   } else {
      array21 = new Array();
      array21->size = 87;
      array21->refC = 1;
      array21->id = 21;
      array21->data = new unsigned int[array21->size]();
      DEBUG_NEW(array21->id);
   }
   return array21;
}

