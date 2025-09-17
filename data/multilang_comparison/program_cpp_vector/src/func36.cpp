#include "program_cpp_vector.hpp" 
Array* func36(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array70 = func37(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array70->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array70->refC--;
      if(array70->refC == 0) {
         array70->data.clear();
         delete array70;
         DEBUG_FREE(array70->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array76 = func38(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array76->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array76->refC--;
      if(array76->refC == 0) {
         array76->data.clear();
         delete array76;
         DEBUG_FREE(array76->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array81 = func39(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array81->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array81;
}

