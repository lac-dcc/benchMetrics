#include "program_vector_cpp.hpp" 
Array* func26(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array110;
      if (pCounter > 0) {
         array110 = vars->data[--pCounter];
         array110->refC++;
         DEBUG_COPY(array110->id);
      } else {
         array110 = new Array();
         array110->size = 590;
         array110->refC = 1;
         array110->id = 110;
         array110->data = new unsigned int[array110->size]();
         DEBUG_NEW(array110->id);
      }
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (50)/3 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         for (int i = 0; i < array110->size; i++) {
             array110->data[i]--;
         }
         for (int i = 0; i < array110->size; i++) {
             if (array110->data[i] == 19) {
                 return array110;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array110;
      Array* array111 = func36(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array111->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array111->refC--;
      if(array111->refC == 0) {
         delete[] array111->data;
         array111->data = nullptr;
         DEBUG_FREE(array111->id);
         delete array111;
      }
      array110->refC--;
      if(array110->refC == 0) {
         delete[] array110->data;
         array110->data = nullptr;
         DEBUG_FREE(array110->id);
         delete array110;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array112 = func32(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array112->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      array112->refC--;
      if(array112->refC == 0) {
         delete[] array112->data;
         array112->data = nullptr;
         DEBUG_FREE(array112->id);
         delete array112;
      }
   }
   Array* array113;
   if (pCounter > 0) {
      array113 = vars->data[--pCounter];
      array113->refC++;
      DEBUG_COPY(array113->id);
   } else {
      array113 = new Array();
      array113->size = 4;
      array113->refC = 1;
      array113->id = 113;
      array113->data = new unsigned int[array113->size]();
      DEBUG_NEW(array113->id);
   }
   return array113;
}

