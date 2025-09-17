#include "program_cpp_array.hpp" 
Array* func38(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array77;
      if (pCounter > 0) {
         array77 = vars->data[--pCounter];
         array77->refC++;
         DEBUG_COPY(array77->id);
      } else {
         array77 = new Array();
         array77->size = 416;
         array77->refC = 1;
         array77->id = 77;
         array77->data = new unsigned int[array77->size]();
         DEBUG_NEW(array77->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (50)/4 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array77->size; i++) {
             array77->data[i]--;
         }
         for (int i = 0; i < array77->size; i++) {
             if (array77->data[i] == 24) {
                 return array77;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array77;
      Array* array78 = func46(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array78->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array78->refC--;
      if(array78->refC == 0) {
         delete[] array78->data;
         array78->data = nullptr;
         DEBUG_FREE(array78->id);
         delete array78;
      }
      array77->refC--;
      if(array77->refC == 0) {
         delete[] array77->data;
         array77->data = nullptr;
         DEBUG_FREE(array77->id);
         delete array77;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array79 = func40(&params0, loopsFactor);
      DEBUG_RETURN(array79->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array79->refC--;
      if(array79->refC == 0) {
         delete[] array79->data;
         array79->data = nullptr;
         DEBUG_FREE(array79->id);
         delete array79;
      }
   }
   Array* array80;
   if (pCounter > 0) {
      array80 = vars->data[--pCounter];
      array80->refC++;
      DEBUG_COPY(array80->id);
   } else {
      array80 = new Array();
      array80->size = 36;
      array80->refC = 1;
      array80->id = 80;
      array80->data = new unsigned int[array80->size]();
      DEBUG_NEW(array80->id);
   }
   return array80;
}

