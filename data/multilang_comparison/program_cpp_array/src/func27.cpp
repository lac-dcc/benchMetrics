#include "program_cpp_array.hpp" 
Array* func27(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array115;
   if (pCounter > 0) {
      array115 = vars->data[--pCounter];
      array115->refC++;
      DEBUG_COPY(array115->id);
   } else {
      array115 = new Array();
      array115->size = 255;
      array115->refC = 1;
      array115->id = 115;
      array115->data = new unsigned int[array115->size]();
      DEBUG_NEW(array115->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array115;
   Array* array116 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array116->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   if(PATH0 & 1) {
      Array* array119;
      if (pCounter > 0) {
         array119 = vars->data[--pCounter];
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = new Array();
         array119->size = 754;
         array119->refC = 1;
         array119->id = 119;
         array119->data = new unsigned int[array119->size]();
         DEBUG_NEW(array119->id);
      }
      unsigned int loop36 = 0;
      unsigned int loopLimit36 = (50)/3 + 1;
      for(; loop36 < loopLimit36; loop36++) {
         for (int i = 0; i < array115->size; i++) {
             array115->data[i]--;
         }
         for (int i = 0; i < array115->size; i++) {
             if (array115->data[i] == 44) {
                 return array115;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array115;
      params1.data[1] = array116;
      params1.data[2] = array119;
      Array* array120 = func42(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array120->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array120->refC--;
      if(array120->refC == 0) {
         delete[] array120->data;
         array120->data = nullptr;
         DEBUG_FREE(array120->id);
         delete array120;
      }
      array119->refC--;
      if(array119->refC == 0) {
         delete[] array119->data;
         array119->data = nullptr;
         DEBUG_FREE(array119->id);
         delete array119;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array115;
      params1.data[1] = array116;
      Array* array121 = func34(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array121->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array121->refC--;
      if(array121->refC == 0) {
         delete[] array121->data;
         array121->data = nullptr;
         DEBUG_FREE(array121->id);
         delete array121;
      }
   }
   array115->refC--;
   if(array115->refC == 0) {
      delete[] array115->data;
      array115->data = nullptr;
      DEBUG_FREE(array115->id);
      delete array115;
   }
   return array116;
}

