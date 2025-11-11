#include "program_cpp_array.hpp" 
Array* func45(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23->refC++;
      DEBUG_COPY(array23->id);
   } else {
      array23 = new Array();
      array23->size = 403;
      array23->refC = 1;
      array23->id = 23;
      array23->data = new unsigned int[array23->size]();
      DEBUG_NEW(array23->id);
   }
   return array23;
}

