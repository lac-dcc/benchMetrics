#include "program_cpp_array.hpp" 
Array* func21(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array141;
   if (pCounter > 0) {
      array141 = vars->data[--pCounter];
      array141->refC++;
      DEBUG_COPY(array141->id);
   } else {
      array141 = new Array();
      array141->size = 43;
      array141->refC = 1;
      array141->id = 141;
      array141->data = new unsigned int[array141->size]();
      DEBUG_NEW(array141->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array141;
   Array* array142 = func23(&params0, loopsFactor);
   DEBUG_RETURN(array142->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array143;
      if (pCounter > 0) {
         array143 = vars->data[--pCounter];
         array143->refC++;
         DEBUG_COPY(array143->id);
      } else {
         array143 = new Array();
         array143->size = 428;
         array143->refC = 1;
         array143->id = 143;
         array143->data = new unsigned int[array143->size]();
         DEBUG_NEW(array143->id);
      }
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (50)/3 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         for (int i = 0; i < array141->size; i++) {
             array141->data[i]--;
         }
         for (int i = 0; i < array143->size; i++) {
             if (array143->data[i] == 81) {
                 return array143;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array141;
      params1.data[1] = array142;
      params1.data[2] = array143;
      Array* array144 = func36(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array144->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array144->refC--;
      if(array144->refC == 0) {
         delete[] array144->data;
         array144->data = nullptr;
         DEBUG_FREE(array144->id);
         delete array144;
      }
      array143->refC--;
      if(array143->refC == 0) {
         delete[] array143->data;
         array143->data = nullptr;
         DEBUG_FREE(array143->id);
         delete array143;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array141;
      params1.data[1] = array142;
      Array* array145 = func32(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array145->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array145->refC--;
      if(array145->refC == 0) {
         delete[] array145->data;
         array145->data = nullptr;
         DEBUG_FREE(array145->id);
         delete array145;
      }
   }
   array141->refC--;
   if(array141->refC == 0) {
      delete[] array141->data;
      array141->data = nullptr;
      DEBUG_FREE(array141->id);
      delete array141;
   }
   return array142;
}

