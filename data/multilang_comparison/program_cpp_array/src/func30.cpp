#include "program_cpp_array.hpp" 
Array* func30(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array16;
      if (pCounter > 0) {
         array16 = vars->data[--pCounter];
         array16->refC++;
         DEBUG_COPY(array16->id);
      } else {
         array16 = new Array();
         array16->size = 84;
         array16->refC = 1;
         array16->id = 16;
         array16->data = new unsigned int[array16->size]();
         DEBUG_NEW(array16->id);
      }
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (50)/4 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array16->size; i++) {
             array16->data[i]--;
         }
         for (int i = 0; i < array16->size; i++) {
             if (array16->data[i] == 5) {
                 return array16;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array16;
      Array* array17 = func42(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array17->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array17->refC--;
      if(array17->refC == 0) {
         delete[] array17->data;
         array17->data = nullptr;
         DEBUG_FREE(array17->id);
         delete array17;
      }
      array16->refC--;
      if(array16->refC == 0) {
         delete[] array16->data;
         array16->data = nullptr;
         DEBUG_FREE(array16->id);
         delete array16;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array24 = func34(&params0, loopsFactor);
      DEBUG_RETURN(array24->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array24->refC--;
      if(array24->refC == 0) {
         delete[] array24->data;
         array24->data = nullptr;
         DEBUG_FREE(array24->id);
         delete array24;
      }
   }
   Array* array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26->refC++;
      DEBUG_COPY(array26->id);
   } else {
      array26 = new Array();
      array26->size = 795;
      array26->refC = 1;
      array26->id = 26;
      array26->data = new unsigned int[array26->size]();
      DEBUG_NEW(array26->id);
   }
   return array26;
}

