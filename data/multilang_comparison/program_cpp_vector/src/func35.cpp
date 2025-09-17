#include "program_vector_cpp.hpp" 
Array* func35(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array49;
   if (pCounter > 0) {
      array49 = vars->data[--pCounter];
      array49->refC++;
      DEBUG_COPY(array49->id);
   } else {
      array49 = new Array();
      array49->size = 491;
      array49->refC = 1;
      array49->id = 49;
      array49->data = new unsigned int[array49->size]();
      DEBUG_NEW(array49->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array49;
   Array* array50 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array50->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (50)/4 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array50->size; i++) {
         array50->data[i]++;
      }
   }
   for (int i = 0; i < array49->size; i++) {
       if (array49->data[i] == 32) {
           return array49;
       }
   }
   array49->refC--;
   if(array49->refC == 0) {
      delete[] array49->data;
      array49->data = nullptr;
      DEBUG_FREE(array49->id);
      delete array49;
   }
   return array50;
}

