#include "program_cpp_vector.hpp" 
Array* func24(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array68 = func25(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array68->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array68->refC--;
      if(array68->refC == 0) {
         array68->data.clear();
         delete array68;
         DEBUG_FREE(array68->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array77 = func26(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array77->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array77->refC--;
      if(array77->refC == 0) {
         array77->data.clear();
         delete array77;
         DEBUG_FREE(array77->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array82 = func27(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array82->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array82;
}

