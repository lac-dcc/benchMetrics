#include "program_vector_cpp.hpp" 
Array* func14(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array179;
   if (pCounter > 0) {
      array179 = vars->data[--pCounter];
      array179->refC++;
      DEBUG_COPY(array179->id);
   } else {
      array179 = new Array();
      array179->size = 237;
      array179->refC = 1;
      array179->id = 179;
      array179->data = new unsigned int[array179->size]();
      DEBUG_NEW(array179->id);
   }
   unsigned int loop52 = 0;
   unsigned int loopLimit52 = (50)/3 + 1;
   for(; loop52 < loopLimit52; loop52++) {
      if(PATH0 & 1) {
         Array* array180;
         if (pCounter > 0) {
            array180 = vars->data[--pCounter];
            array180->refC++;
            DEBUG_COPY(array180->id);
         } else {
            array180 = new Array();
            array180->size = 205;
            array180->refC = 1;
            array180->id = 180;
            array180->data = new unsigned int[array180->size]();
            DEBUG_NEW(array180->id);
         }
         unsigned int loop53 = 0;
         unsigned int loopLimit53 = (50)/4 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            for (int i = 0; i < array180->size; i++) {
                array180->data[i]--;
            }
            for (int i = 0; i < array180->size; i++) {
                if (array180->data[i] == 18) {
                    return array180;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array179;
         params0.data[1] = array180;
         Array* array181 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array181->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array181->refC--;
         if(array181->refC == 0) {
            delete[] array181->data;
            array181->data = nullptr;
            DEBUG_FREE(array181->id);
            delete array181;
         }
         array180->refC--;
         if(array180->refC == 0) {
            delete[] array180->data;
            array180->data = nullptr;
            DEBUG_FREE(array180->id);
            delete array180;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array179;
         Array* array182 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array182->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array182->refC--;
         if(array182->refC == 0) {
            delete[] array182->data;
            array182->data = nullptr;
            DEBUG_FREE(array182->id);
            delete array182;
         }
      }
      Array* array183;
      if (pCounter > 0) {
         array183 = vars->data[--pCounter];
         array183->refC++;
         DEBUG_COPY(array183->id);
      } else {
         array183 = new Array();
         array183->size = 873;
         array183->refC = 1;
         array183->id = 183;
         array183->data = new unsigned int[array183->size]();
         DEBUG_NEW(array183->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array179;
      params0.data[1] = array183;
      Array* array184 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array184->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array185;
         if (pCounter > 0) {
            array185 = vars->data[--pCounter];
            array185->refC++;
            DEBUG_COPY(array185->id);
         } else {
            array185 = new Array();
            array185->size = 483;
            array185->refC = 1;
            array185->id = 185;
            array185->data = new unsigned int[array185->size]();
            DEBUG_NEW(array185->id);
         }
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (50)/4 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            for (int i = 0; i < array185->size; i++) {
                array185->data[i]--;
            }
            for (int i = 0; i < array184->size; i++) {
                if (array184->data[i] == 57) {
                    return array184;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array179;
         params1.data[1] = array183;
         params1.data[2] = array184;
         params1.data[3] = array185;
         Array* array186 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array186->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array186->refC--;
         if(array186->refC == 0) {
            delete[] array186->data;
            array186->data = nullptr;
            DEBUG_FREE(array186->id);
            delete array186;
         }
         array185->refC--;
         if(array185->refC == 0) {
            delete[] array185->data;
            array185->data = nullptr;
            DEBUG_FREE(array185->id);
            delete array185;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array179;
         params1.data[1] = array183;
         params1.data[2] = array184;
         Array* array187 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array187->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array187->refC--;
         if(array187->refC == 0) {
            delete[] array187->data;
            array187->data = nullptr;
            DEBUG_FREE(array187->id);
            delete array187;
         }
      }
      for (int i = 0; i < array183->size; i++) {
          if (array183->data[i] == 18) {
              return array183;
          }
      }
      array184->refC--;
      if(array184->refC == 0) {
         delete[] array184->data;
         array184->data = nullptr;
         DEBUG_FREE(array184->id);
         delete array184;
      }
      array183->refC--;
      if(array183->refC == 0) {
         delete[] array183->data;
         array183->data = nullptr;
         DEBUG_FREE(array183->id);
         delete array183;
      }
   }
   for (int i = 0; i < array179->size; i++) {
       array179->data[i]--;
   }
   for (int i = 0; i < array179->size; i++) {
       if (array179->data[i] == 88) {
           return array179;
       }
   }
   return array179;
}

