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
      if(params0.size > 0) {
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
      Array* array65 = func12(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array65->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array65->refC--;
      if(array65->refC == 0) {
         array65->data.clear();
         delete array65;
         DEBUG_FREE(array65->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array101 = func13(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array101->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array101;
}

