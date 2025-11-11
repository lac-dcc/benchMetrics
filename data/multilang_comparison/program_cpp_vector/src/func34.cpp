#include "program_cpp_vector.hpp" 
Array* func34(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array25;
   if (pCounter > 0) {
      array25 = vars->data.at(--pCounter);
      array25->refC++;
      DEBUG_COPY(array25->id);
   } else {
      array25 = new Array();
      array25->size = 368;
      array25->refC = 1;
      array25->id = 25;
      array25->data = std::vector<unsigned int>(array25->size, 0);
      DEBUG_NEW(array25->id);
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (50)/4 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array25->size; i++) {
          if (array25->data.at(i) == 12) {
              return array25;
          }
      }
   }
   for (int i = 0; i < array25->size; i++) {
       array25->data.at(i)--;
   }
   for (int i = 0; i < array25->size; i++) {
       if (array25->data.at(i) == 94) {
           return array25;
       }
   }
   return array25;
}

