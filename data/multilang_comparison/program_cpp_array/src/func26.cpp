#include "program_cpp_array.hpp" 
Array* func26(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array78;
      if (pCounter > 0) {
         array78 = vars->data[--pCounter];
         array78->refC++;
         DEBUG_COPY(array78->id);
      } else {
         array78 = new Array();
         array78->size = 924;
         array78->refC = 1;
         array78->id = 78;
         array78->data = new unsigned int[array78->size]();
         DEBUG_NEW(array78->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (50)/3 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array78->size; i++) {
             array78->data[i]--;
         }
         for (int i = 0; i < array78->size; i++) {
             if (array78->data[i] == 24) {
                 return array78;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array78;
      Array* array79 = func36(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array79->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array79->refC--;
      if(array79->refC == 0) {
         delete[] array79->data;
         array79->data = nullptr;
         DEBUG_FREE(array79->id);
         delete array79;
      }
      array78->refC--;
      if(array78->refC == 0) {
         delete[] array78->data;
         array78->data = nullptr;
         DEBUG_FREE(array78->id);
         delete array78;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array80 = func32(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array80->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array80->refC--;
      if(array80->refC == 0) {
         delete[] array80->data;
         array80->data = nullptr;
         DEBUG_FREE(array80->id);
         delete array80;
      }
   }
   Array* array81;
   if (pCounter > 0) {
      array81 = vars->data[--pCounter];
      array81->refC++;
      DEBUG_COPY(array81->id);
   } else {
      array81 = new Array();
      array81->size = 379;
      array81->refC = 1;
      array81->id = 81;
      array81->data = new unsigned int[array81->size]();
      DEBUG_NEW(array81->id);
   }
   return array81;
}

