#include "program_cpp_array.hpp" 
Array* func32(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array59;
   if (pCounter > 0) {
      array59 = vars->data[--pCounter];
      array59->refC++;
      DEBUG_COPY(array59->id);
   } else {
      array59 = new Array();
      array59->size = 538;
      array59->refC = 1;
      array59->id = 59;
      array59->data = new unsigned int[array59->size]();
      DEBUG_NEW(array59->id);
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (50)/4 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      if(PATH0 & 1) {
         Array* array60;
         if (pCounter > 0) {
            array60 = vars->data[--pCounter];
            array60->refC++;
            DEBUG_COPY(array60->id);
         } else {
            array60 = new Array();
            array60->size = 606;
            array60->refC = 1;
            array60->id = 60;
            array60->data = new unsigned int[array60->size]();
            DEBUG_NEW(array60->id);
         }
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (50)/5 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            for (int i = 0; i < array59->size; i++) {
                array59->data[i]--;
            }
            for (int i = 0; i < array59->size; i++) {
                if (array59->data[i] == 18) {
                    return array59;
                }
            }
         }
         array60->refC--;
         if(array60->refC == 0) {
            delete[] array60->data;
            array60->data = nullptr;
            DEBUG_FREE(array60->id);
            delete array60;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array59;
         Array* array61 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array61->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array61->refC--;
         if(array61->refC == 0) {
            delete[] array61->data;
            array61->data = nullptr;
            DEBUG_FREE(array61->id);
            delete array61;
         }
      }
      Array* array62;
      if (pCounter > 0) {
         array62 = vars->data[--pCounter];
         array62->refC++;
         DEBUG_COPY(array62->id);
      } else {
         array62 = new Array();
         array62->size = 369;
         array62->refC = 1;
         array62->id = 62;
         array62->data = new unsigned int[array62->size]();
         DEBUG_NEW(array62->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array59;
      params0.data[1] = array62;
      Array* array63 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array63->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      for (int i = 0; i < array59->size; i++) {
          if (array59->data[i] == 24) {
              return array59;
          }
      }
      array63->refC--;
      if(array63->refC == 0) {
         delete[] array63->data;
         array63->data = nullptr;
         DEBUG_FREE(array63->id);
         delete array63;
      }
      array62->refC--;
      if(array62->refC == 0) {
         delete[] array62->data;
         array62->data = nullptr;
         DEBUG_FREE(array62->id);
         delete array62;
      }
   }
   for (int i = 0; i < array59->size; i++) {
       array59->data[i]--;
   }
   for (int i = 0; i < array59->size; i++) {
       if (array59->data[i] == 83) {
           return array59;
       }
   }
   return array59;
}

