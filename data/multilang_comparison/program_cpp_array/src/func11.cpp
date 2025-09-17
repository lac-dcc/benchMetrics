#include "program_cpp_array.hpp" 
Array* func11(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (50)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
         Array* array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
            array5->refC++;
            DEBUG_COPY(array5->id);
         } else {
            array5 = new Array();
            array5->size = 736;
            array5->refC = 1;
            array5->id = 5;
            array5->data = new unsigned int[array5->size]();
            DEBUG_NEW(array5->id);
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (50)/4 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5->size; i++) {
                array5->data[i]--;
            }
            for (int i = 0; i < array5->size; i++) {
                if (array5->data[i] == 67) {
                    return array5;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array5;
         Array* array6 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array6->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array6->refC--;
         if(array6->refC == 0) {
            delete[] array6->data;
            array6->data = nullptr;
            DEBUG_FREE(array6->id);
            delete array6;
         }
         array5->refC--;
         if(array5->refC == 0) {
            delete[] array5->data;
            array5->data = nullptr;
            DEBUG_FREE(array5->id);
            delete array5;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array54 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array54->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array54->refC--;
         if(array54->refC == 0) {
            delete[] array54->data;
            array54->data = nullptr;
            DEBUG_FREE(array54->id);
            delete array54;
         }
      }
      Array* array64;
      if (pCounter > 0) {
         array64 = vars->data[--pCounter];
         array64->refC++;
         DEBUG_COPY(array64->id);
      } else {
         array64 = new Array();
         array64->size = 772;
         array64->refC = 1;
         array64->id = 64;
         array64->data = new unsigned int[array64->size]();
         DEBUG_NEW(array64->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array64;
      Array* array65 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array65->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array68;
         if (pCounter > 0) {
            array68 = vars->data[--pCounter];
            array68->refC++;
            DEBUG_COPY(array68->id);
         } else {
            array68 = new Array();
            array68->size = 197;
            array68->refC = 1;
            array68->id = 68;
            array68->data = new unsigned int[array68->size]();
            DEBUG_NEW(array68->id);
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (50)/4 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array64->size; i++) {
                array64->data[i]--;
            }
            for (int i = 0; i < array64->size; i++) {
                if (array64->data[i] == 4) {
                    return array64;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array64;
         params1.data[1] = array65;
         params1.data[2] = array68;
         Array* array69 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array69->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array69->refC--;
         if(array69->refC == 0) {
            delete[] array69->data;
            array69->data = nullptr;
            DEBUG_FREE(array69->id);
            delete array69;
         }
         array68->refC--;
         if(array68->refC == 0) {
            delete[] array68->data;
            array68->data = nullptr;
            DEBUG_FREE(array68->id);
            delete array68;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array64;
         params1.data[1] = array65;
         Array* array86 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array86->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array86->refC--;
         if(array86->refC == 0) {
            delete[] array86->data;
            array86->data = nullptr;
            DEBUG_FREE(array86->id);
            delete array86;
         }
      }
      for (int i = 0; i < array64->size; i++) {
          if (array64->data[i] == 10) {
              return array64;
          }
      }
      array65->refC--;
      if(array65->refC == 0) {
         delete[] array65->data;
         array65->data = nullptr;
         DEBUG_FREE(array65->id);
         delete array65;
      }
      array64->refC--;
      if(array64->refC == 0) {
         delete[] array64->data;
         array64->data = nullptr;
         DEBUG_FREE(array64->id);
         delete array64;
      }
   }
   Array* array95;
   if (pCounter > 0) {
      array95 = vars->data[--pCounter];
      array95->refC++;
      DEBUG_COPY(array95->id);
   } else {
      array95 = new Array();
      array95->size = 342;
      array95->refC = 1;
      array95->id = 95;
      array95->data = new unsigned int[array95->size]();
      DEBUG_NEW(array95->id);
   }
   return array95;
}

