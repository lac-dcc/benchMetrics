#include "program_cpp_array.hpp" 
Array* func25(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (50)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(PATH0 & 1) {
         Array* array100;
         if (pCounter > 0) {
            array100 = vars->data[--pCounter];
            array100->refC++;
            DEBUG_COPY(array100->id);
         } else {
            array100 = new Array();
            array100->size = 127;
            array100->refC = 1;
            array100->id = 100;
            array100->data = new unsigned int[array100->size]();
            DEBUG_NEW(array100->id);
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (50)/4 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            for (int i = 0; i < array100->size; i++) {
                array100->data[i]--;
            }
            for (int i = 0; i < array100->size; i++) {
                if (array100->data[i] == 58) {
                    return array100;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array100;
         Array* array101 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array101->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array101->refC--;
         if(array101->refC == 0) {
            delete[] array101->data;
            array101->data = nullptr;
            DEBUG_FREE(array101->id);
            delete array101;
         }
         array100->refC--;
         if(array100->refC == 0) {
            delete[] array100->data;
            array100->data = nullptr;
            DEBUG_FREE(array100->id);
            delete array100;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array102 = func34(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array102->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array102->refC--;
         if(array102->refC == 0) {
            delete[] array102->data;
            array102->data = nullptr;
            DEBUG_FREE(array102->id);
            delete array102;
         }
      }
      Array* array103;
      if (pCounter > 0) {
         array103 = vars->data[--pCounter];
         array103->refC++;
         DEBUG_COPY(array103->id);
      } else {
         array103 = new Array();
         array103->size = 396;
         array103->refC = 1;
         array103->id = 103;
         array103->data = new unsigned int[array103->size]();
         DEBUG_NEW(array103->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array103;
      Array* array104 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array104->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array105;
         if (pCounter > 0) {
            array105 = vars->data[--pCounter];
            array105->refC++;
            DEBUG_COPY(array105->id);
         } else {
            array105 = new Array();
            array105->size = 84;
            array105->refC = 1;
            array105->id = 105;
            array105->data = new unsigned int[array105->size]();
            DEBUG_NEW(array105->id);
         }
         unsigned int loop33 = 0;
         unsigned int loopLimit33 = (50)/4 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            for (int i = 0; i < array104->size; i++) {
                array104->data[i]--;
            }
            for (int i = 0; i < array103->size; i++) {
                if (array103->data[i] == 72) {
                    return array103;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array103;
         params1.data[1] = array104;
         params1.data[2] = array105;
         Array* array106 = func46(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array106->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array106->refC--;
         if(array106->refC == 0) {
            delete[] array106->data;
            array106->data = nullptr;
            DEBUG_FREE(array106->id);
            delete array106;
         }
         array105->refC--;
         if(array105->refC == 0) {
            delete[] array105->data;
            array105->data = nullptr;
            DEBUG_FREE(array105->id);
            delete array105;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array103;
         params1.data[1] = array104;
         Array* array107 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array107->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array107->refC--;
         if(array107->refC == 0) {
            delete[] array107->data;
            array107->data = nullptr;
            DEBUG_FREE(array107->id);
            delete array107;
         }
      }
      for (int i = 0; i < array104->size; i++) {
          if (array104->data[i] == 40) {
              return array104;
          }
      }
      array104->refC--;
      if(array104->refC == 0) {
         delete[] array104->data;
         array104->data = nullptr;
         DEBUG_FREE(array104->id);
         delete array104;
      }
      array103->refC--;
      if(array103->refC == 0) {
         delete[] array103->data;
         array103->data = nullptr;
         DEBUG_FREE(array103->id);
         delete array103;
      }
   }
   Array* array108;
   if (pCounter > 0) {
      array108 = vars->data[--pCounter];
      array108->refC++;
      DEBUG_COPY(array108->id);
   } else {
      array108 = new Array();
      array108->size = 42;
      array108->refC = 1;
      array108->id = 108;
      array108->data = new unsigned int[array108->size]();
      DEBUG_NEW(array108->id);
   }
   return array108;
}

