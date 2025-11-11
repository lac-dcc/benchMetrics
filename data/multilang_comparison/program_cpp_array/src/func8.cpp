#include "program_cpp_array.hpp" 
Array* func8(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array170;
      if (pCounter > 0) {
         array170 = vars->data[--pCounter];
         array170->refC++;
         DEBUG_COPY(array170->id);
      } else {
         array170 = new Array();
         array170->size = 627;
         array170->refC = 1;
         array170->id = 170;
         array170->data = new unsigned int[array170->size]();
         DEBUG_NEW(array170->id);
      }
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (50)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array170->size; i++) {
             array170->data[i]--;
         }
         for (int i = 0; i < array170->size; i++) {
             if (array170->data[i] == 14) {
                 return array170;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array170;
      Array* array171 = func18(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array171->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array171->refC--;
      if(array171->refC == 0) {
         delete[] array171->data;
         array171->data = nullptr;
         DEBUG_FREE(array171->id);
         delete array171;
      }
      array170->refC--;
      if(array170->refC == 0) {
         delete[] array170->data;
         array170->data = nullptr;
         DEBUG_FREE(array170->id);
         delete array170;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array172 = func14(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array172->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array172->refC--;
      if(array172->refC == 0) {
         delete[] array172->data;
         array172->data = nullptr;
         DEBUG_FREE(array172->id);
         delete array172;
      }
   }
   Array* array173;
   if (pCounter > 0) {
      array173 = vars->data[--pCounter];
      array173->refC++;
      DEBUG_COPY(array173->id);
   } else {
      array173 = new Array();
      array173->size = 479;
      array173->refC = 1;
      array173->id = 173;
      array173->data = new unsigned int[array173->size]();
      DEBUG_NEW(array173->id);
   }
   return array173;
}

