#include "program_cpp_vector.hpp" 
Array* func3(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array195;
   if (pCounter > 0) {
      array195 = vars->data.at(--pCounter);
      array195->refC++;
      DEBUG_COPY(array195->id);
   } else {
      array195 = new Array();
      array195->size = 57;
      array195->refC = 1;
      array195->id = 195;
      array195->data = std::vector<unsigned int>(array195->size, 0);
      DEBUG_NEW(array195->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array195;
   Array* array196 = func6(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array196->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (50)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      for (int i = 0; i < array196->size; i++) {
         array196->data.at(i)++;
      }
   }
   for (int i = 0; i < array195->size; i++) {
       if (array195->data.at(i) == 91) {
           return array195;
       }
   }
   array195->refC--;
   if(array195->refC == 0) {
      array195->data.clear();
      delete array195;
      DEBUG_FREE(array195->id);
   }
   return array196;
}

