#include "program_cpp_array.hpp" 
Array* func15(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array177;
   if (pCounter > 0) {
      array177 = vars->data[--pCounter];
      array177->refC++;
      DEBUG_COPY(array177->id);
   } else {
      array177 = new Array();
      array177->size = 338;
      array177->refC = 1;
      array177->id = 177;
      array177->data = new unsigned int[array177->size]();
      DEBUG_NEW(array177->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array177;
   Array* array178 = func18(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array178->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop51 = 0;
   unsigned int loopLimit51 = (50)/2 + 1;
   for(; loop51 < loopLimit51; loop51++) {
      for (int i = 0; i < array177->size; i++) {
         array177->data[i]++;
      }
   }
   for (int i = 0; i < array177->size; i++) {
       if (array177->data[i] == 17) {
           return array177;
       }
   }
   array178->refC--;
   if(array178->refC == 0) {
      delete[] array178->data;
      array178->data = nullptr;
      DEBUG_FREE(array178->id);
      delete array178;
   }
   return array177;
}

