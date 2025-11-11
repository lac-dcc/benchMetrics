#include "program_cpp_array.hpp" 
Array* func17(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array104;
   if (pCounter > 0) {
      array104 = vars->data[--pCounter];
      array104->refC++;
      DEBUG_COPY(array104->id);
   } else {
      array104 = new Array();
      array104->size = 269;
      array104->refC = 1;
      array104->id = 104;
      array104->data = new unsigned int[array104->size]();
      DEBUG_NEW(array104->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array104;
   Array* array105 = func24(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array105->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (50)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      for (int i = 0; i < array104->size; i++) {
         array104->data[i]++;
      }
   }
   for (int i = 0; i < array104->size; i++) {
       if (array104->data[i] == 92) {
           return array104;
       }
   }
   array105->refC--;
   if(array105->refC == 0) {
      delete[] array105->data;
      array105->data = nullptr;
      DEBUG_FREE(array105->id);
      delete array105;
   }
   return array104;
}

