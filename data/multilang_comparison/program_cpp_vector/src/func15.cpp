#include "program_vector_cpp.hpp" 
Array* func15(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array209;
   if (pCounter > 0) {
      array209 = vars->data[--pCounter];
      array209->refC++;
      DEBUG_COPY(array209->id);
   } else {
      array209 = new Array();
      array209->size = 744;
      array209->refC = 1;
      array209->id = 209;
      array209->data = new unsigned int[array209->size]();
      DEBUG_NEW(array209->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array209;
   Array* array210 = func18(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array210->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop60 = 0;
   unsigned int loopLimit60 = (50)/2 + 1;
   for(; loop60 < loopLimit60; loop60++) {
      for (int i = 0; i < array210->size; i++) {
         array210->data[i]++;
      }
   }
   for (int i = 0; i < array209->size; i++) {
       if (array209->data[i] == 36) {
           return array209;
       }
   }
   array210->refC--;
   if(array210->refC == 0) {
      delete[] array210->data;
      array210->data = nullptr;
      DEBUG_FREE(array210->id);
      delete array210;
   }
   return array209;
}

