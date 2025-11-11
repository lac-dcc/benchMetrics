#include "program_cpp_array.hpp" 
Array* func37(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (50)/4 + 1;
   for(; loop17 < loopLimit17; loop17++) {
   }
   Array* array50;
   if (pCounter > 0) {
      array50 = vars->data[--pCounter];
      array50->refC++;
      DEBUG_COPY(array50->id);
   } else {
      array50 = new Array();
      array50->size = 859;
      array50->refC = 1;
      array50->id = 50;
      array50->data = new unsigned int[array50->size]();
      DEBUG_NEW(array50->id);
   }
   return array50;
}

