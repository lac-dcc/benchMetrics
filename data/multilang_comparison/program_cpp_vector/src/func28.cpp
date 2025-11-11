#include "program_cpp_vector.hpp" 
Array* func28(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array7 = func29(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array7->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array7->refC--;
      if(array7->refC == 0) {
         array7->data.clear();
         delete array7;
         DEBUG_FREE(array7->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array15 = func30(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array15->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array15->refC--;
      if(array15->refC == 0) {
         array15->data.clear();
         delete array15;
         DEBUG_FREE(array15->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array27 = func31(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array27->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array27;
}

