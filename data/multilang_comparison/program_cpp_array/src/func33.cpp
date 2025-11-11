#include "program_cpp_array.hpp" 
Array* func33(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array85;
   if (pCounter > 0) {
      array85 = vars->data[--pCounter];
      array85->refC++;
      DEBUG_COPY(array85->id);
   } else {
      array85 = new Array();
      array85->size = 163;
      array85->refC = 1;
      array85->id = 85;
      array85->data = new unsigned int[array85->size]();
      DEBUG_NEW(array85->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array85;
   Array* array86 = func36(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array86->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (50)/3 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      for (int i = 0; i < array86->size; i++) {
         array86->data[i]++;
      }
   }
   for (int i = 0; i < array85->size; i++) {
       if (array85->data[i] == 59) {
           return array85;
       }
   }
   array85->refC--;
   if(array85->refC == 0) {
      delete[] array85->data;
      array85->data = nullptr;
      DEBUG_FREE(array85->id);
      delete array85;
   }
   return array86;
}

