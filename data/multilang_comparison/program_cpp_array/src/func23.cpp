#include "program_cpp_array.hpp" 
Array* func23(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array66;
   if (pCounter > 0) {
      array66 = vars->data[--pCounter];
      array66->refC++;
      DEBUG_COPY(array66->id);
   } else {
      array66 = new Array();
      array66->size = 139;
      array66->refC = 1;
      array66->id = 66;
      array66->data = new unsigned int[array66->size]();
      DEBUG_NEW(array66->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array66;
   Array* array67 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array67->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (50)/4 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array67->size; i++) {
         array67->data[i]++;
      }
   }
   for (int i = 0; i < array66->size; i++) {
       if (array66->data[i] == 42) {
           return array66;
       }
   }
   array67->refC--;
   if(array67->refC == 0) {
      delete[] array67->data;
      array67->data = nullptr;
      DEBUG_FREE(array67->id);
      delete array67;
   }
   return array66;
}

