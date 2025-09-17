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
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array8;
         Array* array9 = func46(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array9->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array9->refC--;
         if(array9->refC == 0) {
            delete[] array9->data;
            array9->data = nullptr;
            DEBUG_FREE(array9->id);
            delete array9;
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
         Array* array16 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array16->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array16->refC--;
         if(array16->refC == 0) {
            delete[] array16->data;
            array16->data = nullptr;
            DEBUG_FREE(array16->id);
            delete array16;
         }
      }
      Array* array18;
      if (pCounter > 0) {
         array18 = vars->data[--pCounter];
         array18->refC++;
         DEBUG_COPY(array18->id);
      } else {
         array18 = new Array();
         array18->size = 857;
         array18->refC = 1;
         array18->id = 18;
         array18->data = new unsigned int[array18->size]();
         DEBUG_NEW(array18->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array18;
      Array* array19 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array19->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array22;
         if (pCounter > 0) {
            array22 = vars->data[--pCounter];
            array22->refC++;
            DEBUG_COPY(array22->id);
         } else {
            array22 = new Array();
            array22->size = 808;
            array22->refC = 1;
            array22->id = 22;
            array22->data = new unsigned int[array22->size]();
            DEBUG_NEW(array22->id);
         }
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (50)/5 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array18->size; i++) {
                array18->data[i]--;
            }
            for (int i = 0; i < array22->size; i++) {
                if (array22->data[i] == 88) {
                    return array22;
                }
            }
         }
         array22->refC--;
         if(array22->refC == 0) {
            delete[] array22->data;
            array22->data = nullptr;
            DEBUG_FREE(array22->id);
            delete array22;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array18;
         params1.data[1] = array19;
         Array* array23 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array23->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array23->refC--;
         if(array23->refC == 0) {
            delete[] array23->data;
            array23->data = nullptr;
            DEBUG_FREE(array23->id);
            delete array23;
         }
      }
      for (int i = 0; i < array19->size; i++) {
          if (array19->data[i] == 12) {
              return array19;
          }
      }
      array19->refC--;
      if(array19->refC == 0) {
         delete[] array19->data;
         array19->data = nullptr;
         DEBUG_FREE(array19->id);
         delete array19;
      }
      array18->refC--;
      if(array18->refC == 0) {
         delete[] array18->data;
         array18->data = nullptr;
         DEBUG_FREE(array18->id);
         delete array18;
      }
   }
   Array* array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25->refC++;
      DEBUG_COPY(array25->id);
   } else {
      array25 = new Array();
      array25->size = 226;
      array25->refC = 1;
      array25->id = 25;
      array25->data = new unsigned int[array25->size]();
      DEBUG_NEW(array25->id);
   }
   return array25;
}

