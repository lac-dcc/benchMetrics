#include "program_cpp_array.hpp" 
Array* func0(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = new Array();
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = new unsigned int[array1->size]();
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (50)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array* array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = new Array();
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = new unsigned int[array2->size]();
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (50)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
                array2->data[i]--;
            }
            for (int i = 0; i < array2->size; i++) {
                if (array2->data[i] == 62) {
                    return array2;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array1;
         params0.data[1] = array2;
         Array* array3 = func10(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array3->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array3->refC--;
         if(array3->refC == 0) {
            delete[] array3->data;
            array3->data = nullptr;
            DEBUG_FREE(array3->id);
            delete array3;
         }
         array2->refC--;
         if(array2->refC == 0) {
            delete[] array2->data;
            array2->data = nullptr;
            DEBUG_FREE(array2->id);
            delete array2;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array1;
         Array* array141 = func4(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array141->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array141->refC--;
         if(array141->refC == 0) {
            delete[] array141->data;
            array141->data = nullptr;
            DEBUG_FREE(array141->id);
            delete array141;
         }
      }
      Array* array151;
      if (pCounter > 0) {
         array151 = vars->data[--pCounter];
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = new Array();
         array151->size = 988;
         array151->refC = 1;
         array151->id = 151;
         array151->data = new unsigned int[array151->size]();
         DEBUG_NEW(array151->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array1;
      params0.data[1] = array151;
      Array* array152 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array155;
         if (pCounter > 0) {
            array155 = vars->data[--pCounter];
            array155->refC++;
            DEBUG_COPY(array155->id);
         } else {
            array155 = new Array();
            array155->size = 232;
            array155->refC = 1;
            array155->id = 155;
            array155->data = new unsigned int[array155->size]();
            DEBUG_NEW(array155->id);
         }
         unsigned int loop46 = 0;
         unsigned int loopLimit46 = (50)/3 + 1;
         for(; loop46 < loopLimit46; loop46++) {
            for (int i = 0; i < array151->size; i++) {
                array151->data[i]--;
            }
            for (int i = 0; i < array152->size; i++) {
                if (array152->data[i] == 60) {
                    return array152;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array1;
         params1.data[1] = array151;
         params1.data[2] = array152;
         params1.data[3] = array155;
         Array* array156 = func18(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array156->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array156->refC--;
         if(array156->refC == 0) {
            delete[] array156->data;
            array156->data = nullptr;
            DEBUG_FREE(array156->id);
            delete array156;
         }
         array155->refC--;
         if(array155->refC == 0) {
            delete[] array155->data;
            array155->data = nullptr;
            DEBUG_FREE(array155->id);
            delete array155;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array1;
         params1.data[1] = array151;
         params1.data[2] = array152;
         Array* array178 = func14(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array178->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array178->refC--;
         if(array178->refC == 0) {
            delete[] array178->data;
            array178->data = nullptr;
            DEBUG_FREE(array178->id);
            delete array178;
         }
      }
      for (int i = 0; i < array152->size; i++) {
          if (array152->data[i] == 57) {
              return array152;
          }
      }
      array152->refC--;
      if(array152->refC == 0) {
         delete[] array152->data;
         array152->data = nullptr;
         DEBUG_FREE(array152->id);
         delete array152;
      }
      array151->refC--;
      if(array151->refC == 0) {
         delete[] array151->data;
         array151->data = nullptr;
         DEBUG_FREE(array151->id);
         delete array151;
      }
   }
   return array1;
}

