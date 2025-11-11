#include "program_cpp_array.hpp" 
Array* func39(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array56;
   if (pCounter > 0) {
      array56 = vars->data[--pCounter];
      array56->refC++;
      DEBUG_COPY(array56->id);
   } else {
      array56 = new Array();
      array56->size = 143;
      array56->refC = 1;
      array56->id = 56;
      array56->data = new unsigned int[array56->size]();
      DEBUG_NEW(array56->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array56;
   Array* array57 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array57->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   array56->refC--;
   if(array56->refC == 0) {
      delete[] array56->data;
      array56->data = nullptr;
      DEBUG_FREE(array56->id);
      delete array56;
   }
   return array57;
}

