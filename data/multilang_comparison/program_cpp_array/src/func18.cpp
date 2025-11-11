#include "program_cpp_array.hpp" 
Array* func18(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array125 = func19(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array125->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array125->refC--;
      if(array125->refC == 0) {
         delete[] array125->data;
         array125->data = nullptr;
         DEBUG_FREE(array125->id);
         delete array125;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array135 = func20(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array135->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array135->refC--;
      if(array135->refC == 0) {
         delete[] array135->data;
         array135->data = nullptr;
         DEBUG_FREE(array135->id);
         delete array135;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array140 = func21(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array140->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array140;
}

