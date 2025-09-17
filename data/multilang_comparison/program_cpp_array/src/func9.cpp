#include "program_cpp_array.hpp" 
Array* func9(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array207;
   if (pCounter > 0) {
      array207 = vars->data[--pCounter];
      array207->refC++;
      DEBUG_COPY(array207->id);
   } else {
      array207 = new Array();
      array207->size = 176;
      array207->refC = 1;
      array207->id = 207;
      array207->data = new unsigned int[array207->size]();
      DEBUG_NEW(array207->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array207;
   Array* array208 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array208->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   if(PATH0 & 1) {
      Array* array211;
      if (pCounter > 0) {
         array211 = vars->data[--pCounter];
         array211->refC++;
         DEBUG_COPY(array211->id);
      } else {
         array211 = new Array();
         array211->size = 818;
         array211->refC = 1;
         array211->id = 211;
         array211->data = new unsigned int[array211->size]();
         DEBUG_NEW(array211->id);
      }
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (50)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         for (int i = 0; i < array211->size; i++) {
             array211->data[i]--;
         }
         for (int i = 0; i < array207->size; i++) {
             if (array207->data[i] == 49) {
                 return array207;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array207;
      params1.data[1] = array208;
      params1.data[2] = array211;
      Array* array212 = func24(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array212->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array212->refC--;
      if(array212->refC == 0) {
         delete[] array212->data;
         array212->data = nullptr;
         DEBUG_FREE(array212->id);
         delete array212;
      }
      array211->refC--;
      if(array211->refC == 0) {
         delete[] array211->data;
         array211->data = nullptr;
         DEBUG_FREE(array211->id);
         delete array211;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array207;
      params1.data[1] = array208;
      Array* array213 = func16(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array213->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array213->refC--;
      if(array213->refC == 0) {
         delete[] array213->data;
         array213->data = nullptr;
         DEBUG_FREE(array213->id);
         delete array213;
      }
   }
   array207->refC--;
   if(array207->refC == 0) {
      delete[] array207->data;
      array207->data = nullptr;
      DEBUG_FREE(array207->id);
      delete array207;
   }
   return array208;
}

