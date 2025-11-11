#include "program_cpp_array.hpp" 
Array* func29(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (50)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      if(PATH0 & 1) {
         Array* array8;
         if (pCounter > 0) {
            array8 = vars->data[--pCounter];
            array8->refC++;
            DEBUG_COPY(array8->id);
         } else {
            array8 = new Array();
            array8->size = 802;
            array8->refC = 1;
            array8->id = 8;
            array8->data = new unsigned int[array8->size]();
            DEBUG_NEW(array8->id);
         }
         unsigned int loop6 = 0;
         unsigned int loopLimit6 = (50)/5 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            for (int i = 0; i < array8->size; i++) {
                array8->data[i]--;
            }
            for (int i = 0; i < array8->size; i++) {
                if (array8->data[i] == 69) {
                    return array8;
                }
            }
         }
         array8->refC--;
         if(array8->refC == 0) {
            delete[] array8->data;
            array8->data = nullptr;
            DEBUG_FREE(array8->id);
            delete array8;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array9 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array9->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array9->refC--;
         if(array9->refC == 0) {
            delete[] array9->data;
            array9->data = nullptr;
            DEBUG_FREE(array9->id);
            delete array9;
         }
      }
      Array* array11;
      if (pCounter > 0) {
         array11 = vars->data[--pCounter];
         array11->refC++;
         DEBUG_COPY(array11->id);
      } else {
         array11 = new Array();
         array11->size = 784;
         array11->refC = 1;
         array11->id = 11;
         array11->data = new unsigned int[array11->size]();
         DEBUG_NEW(array11->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array11;
      Array* array12 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array12->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      for (int i = 0; i < array11->size; i++) {
          if (array11->data[i] == 73) {
              return array11;
          }
      }
      array12->refC--;
      if(array12->refC == 0) {
         delete[] array12->data;
         array12->data = nullptr;
         DEBUG_FREE(array12->id);
         delete array12;
      }
      array11->refC--;
      if(array11->refC == 0) {
         delete[] array11->data;
         array11->data = nullptr;
         DEBUG_FREE(array11->id);
         delete array11;
      }
   }
   Array* array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14->refC++;
      DEBUG_COPY(array14->id);
   } else {
      array14 = new Array();
      array14->size = 862;
      array14->refC = 1;
      array14->id = 14;
      array14->data = new unsigned int[array14->size]();
      DEBUG_NEW(array14->id);
   }
   return array14;
}

