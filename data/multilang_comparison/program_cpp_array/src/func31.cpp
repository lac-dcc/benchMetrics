#include "program_cpp_array.hpp" 
Array* func31(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47->refC++;
      DEBUG_COPY(array47->id);
   } else {
      array47 = new Array();
      array47->size = 124;
      array47->refC = 1;
      array47->id = 47;
      array47->data = new unsigned int[array47->size]();
      DEBUG_NEW(array47->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array47;
   Array* array48 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array48->id);
   if(params0.size > 0) {
   	params0.data = nullptr;
   }
   if(PATH0 & 1) {
      Array* array51;
      if (pCounter > 0) {
         array51 = vars->data[--pCounter];
         array51->refC++;
         DEBUG_COPY(array51->id);
      } else {
         array51 = new Array();
         array51->size = 437;
         array51->refC = 1;
         array51->id = 51;
         array51->data = new unsigned int[array51->size]();
         DEBUG_NEW(array51->id);
      }
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (50)/4 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array48->size; i++) {
             array48->data[i]--;
         }
         for (int i = 0; i < array51->size; i++) {
             if (array51->data[i] == 7) {
                 return array51;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array47;
      params1.data[1] = array48;
      params1.data[2] = array51;
      Array* array52 = func46(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array52->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array52->refC--;
      if(array52->refC == 0) {
         delete[] array52->data;
         array52->data = nullptr;
         DEBUG_FREE(array52->id);
         delete array52;
      }
      array51->refC--;
      if(array51->refC == 0) {
         delete[] array51->data;
         array51->data = nullptr;
         DEBUG_FREE(array51->id);
         delete array51;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array47;
      params1.data[1] = array48;
      Array* array53 = func40(&params1, loopsFactor);
      DEBUG_RETURN(array53->id);
      if(params1.size > 0) {
      	params1.data = nullptr;
      }
      array53->refC--;
      if(array53->refC == 0) {
         delete[] array53->data;
         array53->data = nullptr;
         DEBUG_FREE(array53->id);
         delete array53;
      }
   }
   array47->refC--;
   if(array47->refC == 0) {
      delete[] array47->data;
      array47->data = nullptr;
      DEBUG_FREE(array47->id);
      delete array47;
   }
   return array48;
}

