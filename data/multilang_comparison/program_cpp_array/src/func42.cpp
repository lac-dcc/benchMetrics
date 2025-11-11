#include "program_cpp_array.hpp" 
Array* func42(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array18 = func43(&params0, loopsFactor);
      DEBUG_RETURN(array18->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array18->refC--;
      if(array18->refC == 0) {
         delete[] array18->data;
         array18->data = nullptr;
         DEBUG_FREE(array18->id);
         delete array18;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array20 = func44(&params0, loopsFactor);
      DEBUG_RETURN(array20->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array20->refC--;
      if(array20->refC == 0) {
         delete[] array20->data;
         array20->data = nullptr;
         DEBUG_FREE(array20->id);
         delete array20;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array22 = func45(&params0, loopsFactor);
   DEBUG_RETURN(array22->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array22;
}

