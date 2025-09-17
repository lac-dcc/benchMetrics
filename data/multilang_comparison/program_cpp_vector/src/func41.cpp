#include "program_vector_cpp.hpp" 
Array* func41(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20->refC++;
      DEBUG_COPY(array20->id);
   } else {
      array20 = new Array();
      array20->size = 814;
      array20->refC = 1;
      array20->id = 20;
      array20->data = new unsigned int[array20->size]();
      DEBUG_NEW(array20->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array20;
   Array* array21 = func46(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array21->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (50)/5 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array20->size; i++) {
         array20->data[i]++;
      }
   }
   for (int i = 0; i < array21->size; i++) {
       if (array21->data[i] == 50) {
           return array21;
       }
   }
   array20->refC--;
   if(array20->refC == 0) {
      delete[] array20->data;
      array20->data = nullptr;
      DEBUG_FREE(array20->id);
      delete array20;
   }
   return array21;
}

