#include "program_cpp_array.hpp" 
Array* func24(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array99 = func25(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array99->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array99->refC--;
      if(array99->refC == 0) {
         delete[] array99->data;
         array99->data = nullptr;
         DEBUG_FREE(array99->id);
         delete array99;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array109 = func26(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array109->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array109->refC--;
      if(array109->refC == 0) {
         delete[] array109->data;
         array109->data = nullptr;
         DEBUG_FREE(array109->id);
         delete array109;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array114 = func27(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array114->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array114;
}

