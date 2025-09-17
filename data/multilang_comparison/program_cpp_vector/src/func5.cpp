#include "program_cpp_vector.hpp" 
Array* func5(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array153;
   if (pCounter > 0) {
      array153 = vars->data.at(--pCounter);
      array153->refC++;
      DEBUG_COPY(array153->id);
   } else {
      array153 = new Array();
      array153->size = 829;
      array153->refC = 1;
      array153->id = 153;
      array153->data = std::vector<unsigned int>(array153->size, 0);
      DEBUG_NEW(array153->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array153;
   Array* array154 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array154->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (50)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      for (int i = 0; i < array153->size; i++) {
         array153->data.at(i)++;
      }
   }
   for (int i = 0; i < array154->size; i++) {
       if (array154->data.at(i) == 69) {
           return array154;
       }
   }
   array154->refC--;
   if(array154->refC == 0) {
      array154->data.clear();
      delete array154;
      DEBUG_FREE(array154->id);
   }
   return array153;
}

