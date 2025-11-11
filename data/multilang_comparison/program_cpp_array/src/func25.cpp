#include "program_cpp_array.hpp" 
Array* func25(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop22 = 0;
   unsigned int loopLimit22 = (50)/3 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      if(PATH0 & 1) {
         Array* array69;
         if (pCounter > 0) {
            array69 = vars->data[--pCounter];
            array69->refC++;
            DEBUG_COPY(array69->id);
         } else {
            array69 = new Array();
            array69->size = 828;
            array69->refC = 1;
            array69->id = 69;
            array69->data = new unsigned int[array69->size]();
            DEBUG_NEW(array69->id);
         }
         unsigned int loop23 = 0;
         unsigned int loopLimit23 = (50)/4 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            for (int i = 0; i < array69->size; i++) {
                array69->data[i]--;
            }
            for (int i = 0; i < array69->size; i++) {
                if (array69->data[i] == 46) {
                    return array69;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array69;
         Array* array70 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array70->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array70->refC--;
         if(array70->refC == 0) {
            delete[] array70->data;
            array70->data = nullptr;
            DEBUG_FREE(array70->id);
            delete array70;
         }
         array69->refC--;
         if(array69->refC == 0) {
            delete[] array69->data;
            array69->data = nullptr;
            DEBUG_FREE(array69->id);
            delete array69;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array71 = func34(&params0, loopsFactor);
         DEBUG_RETURN(array71->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array71->refC--;
         if(array71->refC == 0) {
            delete[] array71->data;
            array71->data = nullptr;
            DEBUG_FREE(array71->id);
            delete array71;
         }
      }
      Array* array72;
      if (pCounter > 0) {
         array72 = vars->data[--pCounter];
         array72->refC++;
         DEBUG_COPY(array72->id);
      } else {
         array72 = new Array();
         array72->size = 810;
         array72->refC = 1;
         array72->id = 72;
         array72->data = new unsigned int[array72->size]();
         DEBUG_NEW(array72->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array72;
      Array* array73 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array73->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array74;
         if (pCounter > 0) {
            array74 = vars->data[--pCounter];
            array74->refC++;
            DEBUG_COPY(array74->id);
         } else {
            array74 = new Array();
            array74->size = 661;
            array74->refC = 1;
            array74->id = 74;
            array74->data = new unsigned int[array74->size]();
            DEBUG_NEW(array74->id);
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (50)/4 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            for (int i = 0; i < array72->size; i++) {
                array72->data[i]--;
            }
            for (int i = 0; i < array73->size; i++) {
                if (array73->data[i] == 5) {
                    return array73;
                }
            }
         }
         array74->refC--;
         if(array74->refC == 0) {
            delete[] array74->data;
            array74->data = nullptr;
            DEBUG_FREE(array74->id);
            delete array74;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array72;
         params1.data[1] = array73;
         Array* array75 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array75->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array75->refC--;
         if(array75->refC == 0) {
            delete[] array75->data;
            array75->data = nullptr;
            DEBUG_FREE(array75->id);
            delete array75;
         }
      }
      for (int i = 0; i < array72->size; i++) {
          if (array72->data[i] == 26) {
              return array72;
          }
      }
      array73->refC--;
      if(array73->refC == 0) {
         delete[] array73->data;
         array73->data = nullptr;
         DEBUG_FREE(array73->id);
         delete array73;
      }
      array72->refC--;
      if(array72->refC == 0) {
         delete[] array72->data;
         array72->data = nullptr;
         DEBUG_FREE(array72->id);
         delete array72;
      }
   }
   Array* array76;
   if (pCounter > 0) {
      array76 = vars->data[--pCounter];
      array76->refC++;
      DEBUG_COPY(array76->id);
   } else {
      array76 = new Array();
      array76->size = 522;
      array76->refC = 1;
      array76->id = 76;
      array76->data = new unsigned int[array76->size]();
      DEBUG_NEW(array76->id);
   }
   return array76;
}

