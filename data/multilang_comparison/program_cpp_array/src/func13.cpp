#include "program_cpp_array.hpp" 
Array* func13(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array134;
   if (pCounter > 0) {
      array134 = vars->data[--pCounter];
      array134->refC++;
      DEBUG_COPY(array134->id);
   } else {
      array134 = new Array();
      array134->size = 996;
      array134->refC = 1;
      array134->id = 134;
      array134->data = new unsigned int[array134->size]();
      DEBUG_NEW(array134->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array134;
   Array* array135 = func17(&params0, loopsFactor);
   DEBUG_RETURN(array135->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   if(PATH0 & 1) {
      Array* array138;
      if (pCounter > 0) {
         array138 = vars->data[--pCounter];
         array138->refC++;
         DEBUG_COPY(array138->id);
      } else {
         array138 = new Array();
         array138->size = 27;
         array138->refC = 1;
         array138->id = 138;
         array138->data = new unsigned int[array138->size]();
         DEBUG_NEW(array138->id);
      }
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (50)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         for (int i = 0; i < array138->size; i++) {
             array138->data[i]--;
         }
         for (int i = 0; i < array138->size; i++) {
             if (array138->data[i] == 56) {
                 return array138;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array134;
      params1.data[1] = array135;
      params1.data[2] = array138;
      Array* array139 = func28(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array139->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array139->refC--;
      if(array139->refC == 0) {
         delete[] array139->data;
         array139->data = nullptr;
         DEBUG_FREE(array139->id);
         delete array139;
      }
      array138->refC--;
      if(array138->refC == 0) {
         delete[] array138->data;
         array138->data = nullptr;
         DEBUG_FREE(array138->id);
         delete array138;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array134;
      params1.data[1] = array135;
      Array* array140 = func22(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array140->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array140->refC--;
      if(array140->refC == 0) {
         delete[] array140->data;
         array140->data = nullptr;
         DEBUG_FREE(array140->id);
         delete array140;
      }
   }
   array134->refC--;
   if(array134->refC == 0) {
      delete[] array134->data;
      array134->data = nullptr;
      DEBUG_FREE(array134->id);
      delete array134;
   }
   return array135;
}

