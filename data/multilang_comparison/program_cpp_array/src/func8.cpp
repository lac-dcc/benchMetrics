#include "program_cpp_array.hpp" 
Array* func8(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array202;
      if (pCounter > 0) {
         array202 = vars->data[--pCounter];
         array202->refC++;
         DEBUG_COPY(array202->id);
      } else {
         array202 = new Array();
         array202->size = 796;
         array202->refC = 1;
         array202->id = 202;
         array202->data = new unsigned int[array202->size]();
         DEBUG_NEW(array202->id);
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (50)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         for (int i = 0; i < array202->size; i++) {
             array202->data[i]--;
         }
         for (int i = 0; i < array202->size; i++) {
             if (array202->data[i] == 80) {
                 return array202;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array202;
      Array* array203 = func18(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array203->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array203->refC--;
      if(array203->refC == 0) {
         delete[] array203->data;
         array203->data = nullptr;
         DEBUG_FREE(array203->id);
         delete array203;
      }
      array202->refC--;
      if(array202->refC == 0) {
         delete[] array202->data;
         array202->data = nullptr;
         DEBUG_FREE(array202->id);
         delete array202;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array204 = func14(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array204->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array204->refC--;
      if(array204->refC == 0) {
         delete[] array204->data;
         array204->data = nullptr;
         DEBUG_FREE(array204->id);
         delete array204;
      }
   }
   Array* array205;
   if (pCounter > 0) {
      array205 = vars->data[--pCounter];
      array205->refC++;
      DEBUG_COPY(array205->id);
   } else {
      array205 = new Array();
      array205->size = 812;
      array205->refC = 1;
      array205->id = 205;
      array205->data = new unsigned int[array205->size]();
      DEBUG_NEW(array205->id);
   }
   return array205;
}

