#include "program_cpp_vector.hpp" 
Array* func23(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array66;
   if (pCounter > 0) {
      array66 = vars->data.at(--pCounter);
      array66->refC++;
      DEBUG_COPY(array66->id);
   } else {
      array66 = new Array();
      array66->size = 139;
      array66->refC = 1;
      array66->id = 66;
      array66->data = std::vector<unsigned int>(array66->size, 0);
      DEBUG_NEW(array66->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array66;
   Array* array67 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array67->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (50)/4 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array67->size; i++) {
         array67->data.at(i)++;
      }
   }
   for (int i = 0; i < array66->size; i++) {
       if (array66->data.at(i) == 42) {
           return array66;
       }
   }
   array67->refC--;
   if(array67->refC == 0) {
      array67->data.clear();
      delete array67;
      DEBUG_FREE(array67->id);
   }
   return array66;
}

