#include "program_cpp_array.hpp" 
Array* func35(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30->refC++;
      DEBUG_COPY(array30->id);
   } else {
      array30 = new Array();
      array30->size = 756;
      array30->refC = 1;
      array30->id = 30;
      array30->data = new unsigned int[array30->size]();
      DEBUG_NEW(array30->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array30;
   Array* array31 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array31->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (50)/4 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array30->size; i++) {
         array30->data[i]++;
      }
   }
   for (int i = 0; i < array31->size; i++) {
       if (array31->data[i] == 65) {
           return array31;
       }
   }
   array30->refC--;
   if(array30->refC == 0) {
      delete[] array30->data;
      array30->data = nullptr;
      DEBUG_FREE(array30->id);
      delete array30;
   }
   return array31;
}

