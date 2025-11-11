#include "program_cpp_vector.hpp" 
Array* func18(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array125 = func19(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array125->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array125->refC--;
      if(array125->refC == 0) {
         array125->data.clear();
         delete array125;
         DEBUG_FREE(array125->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array135 = func20(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array135->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array135->refC--;
      if(array135->refC == 0) {
         array135->data.clear();
         delete array135;
         DEBUG_FREE(array135->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array140 = func21(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array140->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array140;
}

