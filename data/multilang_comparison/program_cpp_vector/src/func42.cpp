#include "program_cpp_vector.hpp" 
Array* func42(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array29 = func43(&params0, loopsFactor);
      DEBUG_RETURN(array29->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array29->refC--;
      if(array29->refC == 0) {
         array29->data.clear();
         delete array29;
         DEBUG_FREE(array29->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array31 = func44(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array31->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array31->refC--;
      if(array31->refC == 0) {
         array31->data.clear();
         delete array31;
         DEBUG_FREE(array31->id);
      }
   }
   Array_param params0;
   params0.size = 0;
   std::vector<Array*> data_params0(0);
   params0.data = data_params0;
   Array* array35 = func45(&params0, loopsFactor);
   DEBUG_RETURN(array35->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   return array35;
}

