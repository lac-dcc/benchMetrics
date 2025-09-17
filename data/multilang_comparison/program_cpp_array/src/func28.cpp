#include "program_cpp_array.hpp" 
Array* func28(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array7 = func29(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array7->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array7->refC--;
      if(array7->refC == 0) {
         delete[] array7->data;
         array7->data = nullptr;
         DEBUG_FREE(array7->id);
         delete array7;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array26 = func30(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array26->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array26->refC--;
      if(array26->refC == 0) {
         delete[] array26->data;
         array26->data = nullptr;
         DEBUG_FREE(array26->id);
         delete array26;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array46 = func31(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array46->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array46;
}

