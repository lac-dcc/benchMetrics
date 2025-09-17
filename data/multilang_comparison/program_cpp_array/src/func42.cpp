#include "program_cpp_array.hpp" 
Array* func42(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array29 = func43(&params0, loopsFactor);
      DEBUG_RETURN(array29->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array29->refC--;
      if(array29->refC == 0) {
         delete[] array29->data;
         array29->data = nullptr;
         DEBUG_FREE(array29->id);
         delete array29;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array31 = func44(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array31->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array31->refC--;
      if(array31->refC == 0) {
         delete[] array31->data;
         array31->data = nullptr;
         DEBUG_FREE(array31->id);
         delete array31;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array35 = func45(&params0, loopsFactor);
   DEBUG_RETURN(array35->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   return array35;
}

