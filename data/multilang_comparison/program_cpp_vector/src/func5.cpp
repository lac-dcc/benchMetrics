#include "program_vector_cpp.hpp" 
Array* func5(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array153;
   if (pCounter > 0) {
      array153 = vars->data[--pCounter];
      array153->refC++;
      DEBUG_COPY(array153->id);
   } else {
      array153 = new Array();
      array153->size = 829;
      array153->refC = 1;
      array153->id = 153;
      array153->data = new unsigned int[array153->size]();
      DEBUG_NEW(array153->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array153;
   Array* array154 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array154->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (50)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      for (int i = 0; i < array153->size; i++) {
         array153->data[i]++;
      }
   }
   for (int i = 0; i < array154->size; i++) {
       if (array154->data[i] == 69) {
           return array154;
       }
   }
   array154->refC--;
   if(array154->refC == 0) {
      delete[] array154->data;
      array154->data = nullptr;
      DEBUG_FREE(array154->id);
      delete array154;
   }
   return array153;
}

