#include "program_cpp_vector.hpp" 
Array* func6(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array191 = func7(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array191->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array191->refC--;
      if(array191->refC == 0) {
         array191->data.clear();
         delete array191;
         DEBUG_FREE(array191->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array201 = func8(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array201->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array201->refC--;
      if(array201->refC == 0) {
         array201->data.clear();
         delete array201;
         DEBUG_FREE(array201->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array206 = func9(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array206->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array206;
}

