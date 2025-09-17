#include "program_cpp_array.hpp" 
Array* func46(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array10 = func47(&params0, loopsFactor);
      DEBUG_RETURN(array10->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array10->refC--;
      if(array10->refC == 0) {
         delete[] array10->data;
         array10->data = nullptr;
         DEBUG_FREE(array10->id);
         delete array10;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array12 = func48(&params0, loopsFactor);
      DEBUG_RETURN(array12->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array12->refC--;
      if(array12->refC == 0) {
         delete[] array12->data;
         array12->data = nullptr;
         DEBUG_FREE(array12->id);
         delete array12;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array14 = func49(&params0, loopsFactor);
   DEBUG_RETURN(array14->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array14;
}

