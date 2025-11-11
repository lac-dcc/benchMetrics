#include "program_cpp_vector.hpp" 
Array* func39(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array56;
   if (pCounter > 0) {
      array56 = vars->data.at(--pCounter);
      array56->refC++;
      DEBUG_COPY(array56->id);
   } else {
      array56 = new Array();
      array56->size = 143;
      array56->refC = 1;
      array56->id = 56;
      array56->data = std::vector<unsigned int>(array56->size, 0);
      DEBUG_NEW(array56->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array56;
   Array* array57 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array57->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   array56->refC--;
   if(array56->refC == 0) {
      array56->data.clear();
      delete array56;
      DEBUG_FREE(array56->id);
   }
   return array57;
}

