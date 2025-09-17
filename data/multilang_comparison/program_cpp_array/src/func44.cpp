#include "program_cpp_array.hpp" 
Array* func44(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32->refC++;
         DEBUG_COPY(array32->id);
      } else {
         array32 = new Array();
         array32->size = 440;
         array32->refC = 1;
         array32->id = 32;
         array32->data = new unsigned int[array32->size]();
         DEBUG_NEW(array32->id);
      }
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (50)/4 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         for (int i = 0; i < array32->size; i++) {
             array32->data[i]--;
         }
         for (int i = 0; i < array32->size; i++) {
             if (array32->data[i] == 17) {
                 return array32;
             }
         }
      }
      array32->refC--;
      if(array32->refC == 0) {
         delete[] array32->data;
         array32->data = nullptr;
         DEBUG_FREE(array32->id);
         delete array32;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array33 = func50(&params0, loopsFactor);
      DEBUG_RETURN(array33->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array33->refC--;
      if(array33->refC == 0) {
         delete[] array33->data;
         array33->data = nullptr;
         DEBUG_FREE(array33->id);
         delete array33;
      }
   }
   Array* array34;
   if (pCounter > 0) {
      array34 = vars->data[--pCounter];
      array34->refC++;
      DEBUG_COPY(array34->id);
   } else {
      array34 = new Array();
      array34->size = 481;
      array34->refC = 1;
      array34->id = 34;
      array34->data = new unsigned int[array34->size]();
      DEBUG_NEW(array34->id);
   }
   return array34;
}

