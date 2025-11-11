#include "program_cpp_array.hpp" 
Array* func3(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array195;
   if (pCounter > 0) {
      array195 = vars->data[--pCounter];
      array195->refC++;
      DEBUG_COPY(array195->id);
   } else {
      array195 = new Array();
      array195->size = 57;
      array195->refC = 1;
      array195->id = 195;
      array195->data = new unsigned int[array195->size]();
      DEBUG_NEW(array195->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array195;
   Array* array196 = func6(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array196->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (50)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      for (int i = 0; i < array196->size; i++) {
         array196->data[i]++;
      }
   }
   for (int i = 0; i < array195->size; i++) {
       if (array195->data[i] == 91) {
           return array195;
       }
   }
   array195->refC--;
   if(array195->refC == 0) {
      delete[] array195->data;
      array195->data = nullptr;
      DEBUG_FREE(array195->id);
      delete array195;
   }
   return array196;
}

