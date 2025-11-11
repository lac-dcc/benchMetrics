#include "program_cpp_array.hpp" 
Array* func1(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array193;
   if (pCounter > 0) {
      array193 = vars->data[--pCounter];
      array193->refC++;
      DEBUG_COPY(array193->id);
   } else {
      array193 = new Array();
      array193->size = 462;
      array193->refC = 1;
      array193->id = 193;
      array193->data = new unsigned int[array193->size]();
      DEBUG_NEW(array193->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array193;
   Array* array194 = func3(&params0, loopsFactor);
   DEBUG_RETURN(array194->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array197;
      if (pCounter > 0) {
         array197 = vars->data[--pCounter];
         array197->refC++;
         DEBUG_COPY(array197->id);
      } else {
         array197 = new Array();
         array197->size = 951;
         array197->refC = 1;
         array197->id = 197;
         array197->data = new unsigned int[array197->size]();
         DEBUG_NEW(array197->id);
      }
      unsigned int loop57 = 0;
      unsigned int loopLimit57 = (50)/2 + 1;
      for(; loop57 < loopLimit57; loop57++) {
         for (int i = 0; i < array193->size; i++) {
             array193->data[i]--;
         }
         for (int i = 0; i < array194->size; i++) {
             if (array194->data[i] == 37) {
                 return array194;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array193;
      params1.data[1] = array194;
      params1.data[2] = array197;
      Array* array198 = func10(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array198->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array198->refC--;
      if(array198->refC == 0) {
         delete[] array198->data;
         array198->data = nullptr;
         DEBUG_FREE(array198->id);
         delete array198;
      }
      array197->refC--;
      if(array197->refC == 0) {
         delete[] array197->data;
         array197->data = nullptr;
         DEBUG_FREE(array197->id);
         delete array197;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array193;
      params1.data[1] = array194;
      Array* array199 = func4(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array199->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array199->refC--;
      if(array199->refC == 0) {
         delete[] array199->data;
         array199->data = nullptr;
         DEBUG_FREE(array199->id);
         delete array199;
      }
   }
   array193->refC--;
   if(array193->refC == 0) {
      delete[] array193->data;
      array193->data = nullptr;
      DEBUG_FREE(array193->id);
      delete array193;
   }
   return array194;
}

