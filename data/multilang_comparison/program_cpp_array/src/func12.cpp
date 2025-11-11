#include "program_cpp_array.hpp" 
Array* func12(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array66;
      if (pCounter > 0) {
         array66 = vars->data[--pCounter];
         array66->refC++;
         DEBUG_COPY(array66->id);
      } else {
         array66 = new Array();
         array66->size = 786;
         array66->refC = 1;
         array66->id = 66;
         array66->data = new unsigned int[array66->size]();
         DEBUG_NEW(array66->id);
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (50)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array66->size; i++) {
             array66->data[i]--;
         }
         for (int i = 0; i < array66->size; i++) {
             if (array66->data[i] == 42) {
                 return array66;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array66;
      Array* array67 = func24(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array67->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array67->refC--;
      if(array67->refC == 0) {
         delete[] array67->data;
         array67->data = nullptr;
         DEBUG_FREE(array67->id);
         delete array67;
      }
      array66->refC--;
      if(array66->refC == 0) {
         delete[] array66->data;
         array66->data = nullptr;
         DEBUG_FREE(array66->id);
         delete array66;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array90 = func16(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array90->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array90->refC--;
      if(array90->refC == 0) {
         delete[] array90->data;
         array90->data = nullptr;
         DEBUG_FREE(array90->id);
         delete array90;
      }
   }
   Array* array100;
   if (pCounter > 0) {
      array100 = vars->data[--pCounter];
      array100->refC++;
      DEBUG_COPY(array100->id);
   } else {
      array100 = new Array();
      array100->size = 940;
      array100->refC = 1;
      array100->id = 100;
      array100->data = new unsigned int[array100->size]();
      DEBUG_NEW(array100->id);
   }
   return array100;
}

