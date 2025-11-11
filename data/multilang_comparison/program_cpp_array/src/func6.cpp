#include "program_cpp_array.hpp" 
Array* func6(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array159 = func7(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array159->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array159->refC--;
      if(array159->refC == 0) {
         delete[] array159->data;
         array159->data = nullptr;
         DEBUG_FREE(array159->id);
         delete array159;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array169 = func8(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array169->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array169->refC--;
      if(array169->refC == 0) {
         delete[] array169->data;
         array169->data = nullptr;
         DEBUG_FREE(array169->id);
         delete array169;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array174 = func9(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array174->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array174;
}

