#include "program_cpp_vector.hpp" 
Array* func46(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array10 = func47(&params0, loopsFactor);
      DEBUG_RETURN(array10->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array10->refC--;
      if(array10->refC == 0) {
         array10->data.clear();
         delete array10;
         DEBUG_FREE(array10->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array12 = func48(&params0, loopsFactor);
      DEBUG_RETURN(array12->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array12->refC--;
      if(array12->refC == 0) {
         array12->data.clear();
         delete array12;
         DEBUG_FREE(array12->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array14 = func49(&params0, loopsFactor);
   DEBUG_RETURN(array14->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array14;
}

