#include "program_cpp_vector.hpp" 
Array* func18(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array157 = func19(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array157->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array157->refC--;
      if(array157->refC == 0) {
         array157->data.clear();
         delete array157;
         DEBUG_FREE(array157->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array167 = func20(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array167->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array167->refC--;
      if(array167->refC == 0) {
         array167->data.clear();
         delete array167;
         DEBUG_FREE(array167->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array172 = func21(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array172->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array172;
}

