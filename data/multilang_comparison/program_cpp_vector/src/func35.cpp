#include "program_cpp_vector.hpp" 
Array* func35(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array30;
   if (pCounter > 0) {
      array30 = vars->data.at(--pCounter);
      array30->refC++;
      DEBUG_COPY(array30->id);
   } else {
      array30 = new Array();
      array30->size = 756;
      array30->refC = 1;
      array30->id = 30;
      array30->data = std::vector<unsigned int>(array30->size, 0);
      DEBUG_NEW(array30->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array30;
   Array* array31 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array31->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (50)/4 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array30->size; i++) {
         array30->data.at(i)++;
      }
   }
   for (int i = 0; i < array31->size; i++) {
       if (array31->data.at(i) == 65) {
           return array31;
       }
   }
   array30->refC--;
   if(array30->refC == 0) {
      array30->data.clear();
      delete array30;
      DEBUG_FREE(array30->id);
   }
   return array31;
}

