#include "program_cpp_array.hpp" 
Array* func5(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array121;
   if (pCounter > 0) {
      array121 = vars->data[--pCounter];
      array121->refC++;
      DEBUG_COPY(array121->id);
   } else {
      array121 = new Array();
      array121->size = 506;
      array121->refC = 1;
      array121->id = 121;
      array121->data = new unsigned int[array121->size]();
      DEBUG_NEW(array121->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array121;
   Array* array122 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array122->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop36 = 0;
   unsigned int loopLimit36 = (50)/3 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      for (int i = 0; i < array121->size; i++) {
         array121->data[i]++;
      }
   }
   for (int i = 0; i < array121->size; i++) {
       if (array121->data[i] == 28) {
           return array121;
       }
   }
   array121->refC--;
   if(array121->refC == 0) {
      delete[] array121->data;
      array121->data = nullptr;
      DEBUG_FREE(array121->id);
      delete array121;
   }
   return array122;
}

