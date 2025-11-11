#include "program_cpp_array.hpp" 
Array* func41(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13->refC++;
      DEBUG_COPY(array13->id);
   } else {
      array13 = new Array();
      array13->size = 370;
      array13->refC = 1;
      array13->id = 13;
      array13->data = new unsigned int[array13->size]();
      DEBUG_NEW(array13->id);
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (50)/5 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]++;
      }
   }
   for (int i = 0; i < array13->size; i++) {
       if (array13->data[i] == 91) {
           return array13;
       }
   }
   return array13;
}

