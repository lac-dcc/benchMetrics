#include "program_cpp_array.hpp" 
Array* func13(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array102;
   if (pCounter > 0) {
      array102 = vars->data[--pCounter];
      array102->refC++;
      DEBUG_COPY(array102->id);
   } else {
      array102 = new Array();
      array102->size = 984;
      array102->refC = 1;
      array102->id = 102;
      array102->data = new unsigned int[array102->size]();
      DEBUG_NEW(array102->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array102;
   Array* array103 = func17(&params0, loopsFactor);
   DEBUG_RETURN(array103->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array106;
      if (pCounter > 0) {
         array106 = vars->data[--pCounter];
         array106->refC++;
         DEBUG_COPY(array106->id);
      } else {
         array106 = new Array();
         array106->size = 672;
         array106->refC = 1;
         array106->id = 106;
         array106->data = new unsigned int[array106->size]();
         DEBUG_NEW(array106->id);
      }
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (50)/3 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         for (int i = 0; i < array106->size; i++) {
             array106->data[i]--;
         }
         for (int i = 0; i < array103->size; i++) {
             if (array103->data[i] == 85) {
                 return array103;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array102;
      params1.data[1] = array103;
      params1.data[2] = array106;
      Array* array107 = func28(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array107->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array107->refC--;
      if(array107->refC == 0) {
         delete[] array107->data;
         array107->data = nullptr;
         DEBUG_FREE(array107->id);
         delete array107;
      }
      array106->refC--;
      if(array106->refC == 0) {
         delete[] array106->data;
         array106->data = nullptr;
         DEBUG_FREE(array106->id);
         delete array106;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array102;
      params1.data[1] = array103;
      Array* array108 = func22(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array108->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array108->refC--;
      if(array108->refC == 0) {
         delete[] array108->data;
         array108->data = nullptr;
         DEBUG_FREE(array108->id);
         delete array108;
      }
   }
   array103->refC--;
   if(array103->refC == 0) {
      delete[] array103->data;
      array103->data = nullptr;
      DEBUG_FREE(array103->id);
      delete array103;
   }
   return array102;
}

