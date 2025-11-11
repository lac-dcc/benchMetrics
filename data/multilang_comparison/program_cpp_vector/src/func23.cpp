#include "program_cpp_vector.hpp" 
Array* func23(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array45;
   if (pCounter > 0) {
      array45 = vars->data.at(--pCounter);
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = new Array();
      array45->size = 555;
      array45->refC = 1;
      array45->id = 45;
      array45->data = std::vector<unsigned int>(array45->size, 0);
      DEBUG_NEW(array45->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array45;
   Array* array46 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array46->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (50)/4 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array45->size; i++) {
         array45->data.at(i)++;
      }
   }
   for (int i = 0; i < array45->size; i++) {
       if (array45->data.at(i) == 41) {
           return array45;
       }
   }
   array46->refC--;
   if(array46->refC == 0) {
      array46->data.clear();
      delete array46;
      DEBUG_FREE(array46->id);
   }
   return array45;
}

