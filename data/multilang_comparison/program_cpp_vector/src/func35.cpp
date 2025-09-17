#include "program_cpp_vector.hpp" 
Array* func35(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array49;
   if (pCounter > 0) {
      array49 = vars->data.at(--pCounter);
      array49->refC++;
      DEBUG_COPY(array49->id);
   } else {
      array49 = new Array();
      array49->size = 491;
      array49->refC = 1;
      array49->id = 49;
      array49->data = std::vector<unsigned int>(array49->size, 0);
      DEBUG_NEW(array49->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array49;
   Array* array50 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array50->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (50)/4 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array50->size; i++) {
         array50->data.at(i)++;
      }
   }
   for (int i = 0; i < array49->size; i++) {
       if (array49->data.at(i) == 32) {
           return array49;
       }
   }
   array49->refC--;
   if(array49->refC == 0) {
      array49->data.clear();
      delete array49;
      DEBUG_FREE(array49->id);
   }
   return array50;
}

