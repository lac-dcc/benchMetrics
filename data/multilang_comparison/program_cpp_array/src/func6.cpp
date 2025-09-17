#include "program_cpp_array.hpp" 
Array* func6(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array191 = func7(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array191->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array191->refC--;
      if(array191->refC == 0) {
         delete[] array191->data;
         array191->data = nullptr;
         DEBUG_FREE(array191->id);
         delete array191;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array201 = func8(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array201->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array201->refC--;
      if(array201->refC == 0) {
         delete[] array201->data;
         array201->data = nullptr;
         DEBUG_FREE(array201->id);
         delete array201;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array206 = func9(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array206->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array206;
}

