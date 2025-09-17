#include "program_cpp_array.hpp" 
Array* func43(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (50)/4 + 1;
   for(; loop11 < loopLimit11; loop11++) {
   }
   Array* array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30->refC++;
      DEBUG_COPY(array30->id);
   } else {
      array30 = new Array();
      array30->size = 286;
      array30->refC = 1;
      array30->id = 30;
      array30->data = new unsigned int[array30->size]();
      DEBUG_NEW(array30->id);
   }
   return array30;
}

