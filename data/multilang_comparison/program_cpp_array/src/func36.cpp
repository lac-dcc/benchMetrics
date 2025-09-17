#include "program_cpp_array.hpp" 
Array* func36(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array70 = func37(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array70->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array70->refC--;
      if(array70->refC == 0) {
         delete[] array70->data;
         array70->data = nullptr;
         DEBUG_FREE(array70->id);
         delete array70;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array76 = func38(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array76->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array76->refC--;
      if(array76->refC == 0) {
         delete[] array76->data;
         array76->data = nullptr;
         DEBUG_FREE(array76->id);
         delete array76;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array81 = func39(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array81->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array81;
}

