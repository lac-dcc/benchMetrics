#include "program_cpp_array.hpp" 
Array* func23(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array45;
   if (pCounter > 0) {
      array45 = vars->data[--pCounter];
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = new Array();
      array45->size = 555;
      array45->refC = 1;
      array45->id = 45;
      array45->data = new unsigned int[array45->size]();
      DEBUG_NEW(array45->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array45;
   Array* array46 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array46->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (50)/4 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array45->size; i++) {
         array45->data[i]++;
      }
   }
   for (int i = 0; i < array45->size; i++) {
       if (array45->data[i] == 41) {
           return array45;
       }
   }
   array46->refC--;
   if(array46->refC == 0) {
      delete[] array46->data;
      array46->data = nullptr;
      DEBUG_FREE(array46->id);
      delete array46;
   }
   return array45;
}

