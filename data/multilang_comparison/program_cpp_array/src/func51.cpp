#include "program_cpp_array.hpp" 
Array* func51(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array38;
   if (pCounter > 0) {
      array38 = vars->data[--pCounter];
      array38->refC++;
      DEBUG_COPY(array38->id);
   } else {
      array38 = new Array();
      array38->size = 683;
      array38->refC = 1;
      array38->id = 38;
      array38->data = new unsigned int[array38->size]();
      DEBUG_NEW(array38->id);
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (50)/4 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]++;
      }
   }
   for (int i = 0; i < array38->size; i++) {
       if (array38->data[i] == 28) {
           return array38;
       }
   }
   return array38;
}

