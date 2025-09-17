#include "program_cpp_array.hpp" 
Array* func10(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array4 = func11(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array4->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array4->refC--;
      if(array4->refC == 0) {
         delete[] array4->data;
         array4->data = nullptr;
         DEBUG_FREE(array4->id);
         delete array4;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array96 = func12(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array96->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array96->refC--;
      if(array96->refC == 0) {
         delete[] array96->data;
         array96->data = nullptr;
         DEBUG_FREE(array96->id);
         delete array96;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array133 = func13(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array133->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array133;
}

