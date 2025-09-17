#include "program_cpp_vector.hpp" 
Array* func10(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array4 = func11(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array4->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array4->refC--;
      if(array4->refC == 0) {
         array4->data.clear();
         delete array4;
         DEBUG_FREE(array4->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array96 = func12(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array96->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array96->refC--;
      if(array96->refC == 0) {
         array96->data.clear();
         delete array96;
         DEBUG_FREE(array96->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array133 = func13(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array133->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array133;
}

