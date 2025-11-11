#include "program_cpp_array.hpp" 
Array* func31(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array28;
   if (pCounter > 0) {
      array28 = vars->data[--pCounter];
      array28->refC++;
      DEBUG_COPY(array28->id);
   } else {
      array28 = new Array();
      array28->size = 97;
      array28->refC = 1;
      array28->id = 28;
      array28->data = new unsigned int[array28->size]();
      DEBUG_NEW(array28->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array28;
   Array* array29 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array29->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32->refC++;
         DEBUG_COPY(array32->id);
      } else {
         array32 = new Array();
         array32->size = 444;
         array32->refC = 1;
         array32->id = 32;
         array32->data = new unsigned int[array32->size]();
         DEBUG_NEW(array32->id);
      }
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (50)/4 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         for (int i = 0; i < array32->size; i++) {
             array32->data[i]--;
         }
         for (int i = 0; i < array29->size; i++) {
             if (array29->data[i] == 29) {
                 return array29;
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
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array28;
      params1.data[1] = array29;
      Array* array33 = func40(&params1, loopsFactor);
      DEBUG_RETURN(array33->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array33->refC--;
      if(array33->refC == 0) {
         delete[] array33->data;
         array33->data = nullptr;
         DEBUG_FREE(array33->id);
         delete array33;
      }
   }
   array28->refC--;
   if(array28->refC == 0) {
      delete[] array28->data;
      array28->data = nullptr;
      DEBUG_FREE(array28->id);
      delete array28;
   }
   return array29;
}

