#include "program_cpp_array.hpp" 
Array* func3(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array227;
   if (pCounter > 0) {
      array227 = vars->data[--pCounter];
      array227->refC++;
      DEBUG_COPY(array227->id);
   } else {
      array227 = new Array();
      array227->size = 328;
      array227->refC = 1;
      array227->id = 227;
      array227->data = new unsigned int[array227->size]();
      DEBUG_NEW(array227->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array227;
   Array* array228 = func6(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array228->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (50)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      for (int i = 0; i < array227->size; i++) {
         array227->data[i]++;
      }
   }
   for (int i = 0; i < array227->size; i++) {
       if (array227->data[i] == 17) {
           return array227;
       }
   }
   array228->refC--;
   if(array228->refC == 0) {
      delete[] array228->data;
      array228->data = nullptr;
      DEBUG_FREE(array228->id);
      delete array228;
   }
   return array227;
}

