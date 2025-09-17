#include "program_cpp_vector.hpp" 
Array* func45(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array36;
   if (pCounter > 0) {
      array36 = vars->data.at(--pCounter);
      array36->refC++;
      DEBUG_COPY(array36->id);
   } else {
      array36 = new Array();
      array36->size = 497;
      array36->refC = 1;
      array36->id = 36;
      array36->data = std::vector<unsigned int>(array36->size, 0);
      DEBUG_NEW(array36->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array36;
   Array* array37 = func51(&params0, loopsFactor);
   DEBUG_RETURN(array37->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   array37->refC--;
   if(array37->refC == 0) {
      array37->data.clear();
      delete array37;
      DEBUG_FREE(array37->id);
   }
   return array36;
}

