#include "program_cpp_array.hpp" 
Array* func33(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array117;
   if (pCounter > 0) {
      array117 = vars->data[--pCounter];
      array117->refC++;
      DEBUG_COPY(array117->id);
   } else {
      array117 = new Array();
      array117->size = 993;
      array117->refC = 1;
      array117->id = 117;
      array117->data = new unsigned int[array117->size]();
      DEBUG_NEW(array117->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array117;
   Array* array118 = func36(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array118->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop35 = 0;
   unsigned int loopLimit35 = (50)/3 + 1;
   for(; loop35 < loopLimit35; loop35++) {
      for (int i = 0; i < array118->size; i++) {
         array118->data[i]++;
      }
   }
   for (int i = 0; i < array117->size; i++) {
       if (array117->data[i] == 13) {
           return array117;
       }
   }
   array117->refC--;
   if(array117->refC == 0) {
      delete[] array117->data;
      array117->data = nullptr;
      DEBUG_FREE(array117->id);
      delete array117;
   }
   return array118;
}

