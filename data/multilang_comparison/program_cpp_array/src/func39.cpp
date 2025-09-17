#include "program_cpp_array.hpp" 
Array* func39(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array82;
   if (pCounter > 0) {
      array82 = vars->data[--pCounter];
      array82->refC++;
      DEBUG_COPY(array82->id);
   } else {
      array82 = new Array();
      array82->size = 71;
      array82->refC = 1;
      array82->id = 82;
      array82->data = new unsigned int[array82->size]();
      DEBUG_NEW(array82->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array82;
   Array* array83 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array83->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   if(PATH0 & 1) {
      Array* array84;
      if (pCounter > 0) {
         array84 = vars->data[--pCounter];
         array84->refC++;
         DEBUG_COPY(array84->id);
      } else {
         array84 = new Array();
         array84->size = 881;
         array84->refC = 1;
         array84->id = 84;
         array84->data = new unsigned int[array84->size]();
         DEBUG_NEW(array84->id);
      }
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (50)/4 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         for (int i = 0; i < array83->size; i++) {
             array83->data[i]--;
         }
         for (int i = 0; i < array83->size; i++) {
             if (array83->data[i] == 94) {
                 return array83;
             }
         }
      }
      array84->refC--;
      if(array84->refC == 0) {
         delete[] array84->data;
         array84->data = nullptr;
         DEBUG_FREE(array84->id);
         delete array84;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array82;
      params1.data[1] = array83;
      Array* array85 = func50(&params1, loopsFactor);
      DEBUG_RETURN(array85->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array85->refC--;
      if(array85->refC == 0) {
         delete[] array85->data;
         array85->data = nullptr;
         DEBUG_FREE(array85->id);
         delete array85;
      }
   }
   array82->refC--;
   if(array82->refC == 0) {
      delete[] array82->data;
      array82->data = nullptr;
      DEBUG_FREE(array82->id);
      delete array82;
   }
   return array83;
}

