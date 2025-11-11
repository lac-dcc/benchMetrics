#include "program_cpp_array.hpp" 
Array* func2(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array183;
   if (pCounter > 0) {
      array183 = vars->data[--pCounter];
      array183->refC++;
      DEBUG_COPY(array183->id);
   } else {
      array183 = new Array();
      array183->size = 483;
      array183->refC = 1;
      array183->id = 183;
      array183->data = new unsigned int[array183->size]();
      DEBUG_NEW(array183->id);
   }
   unsigned int loop53 = 0;
   unsigned int loopLimit53 = (50)/2 + 1;
   for(; loop53 < loopLimit53; loop53++) {
      if(PATH0 & 1) {
         Array* array184;
         if (pCounter > 0) {
            array184 = vars->data[--pCounter];
            array184->refC++;
            DEBUG_COPY(array184->id);
         } else {
            array184 = new Array();
            array184->size = 607;
            array184->refC = 1;
            array184->id = 184;
            array184->data = new unsigned int[array184->size]();
            DEBUG_NEW(array184->id);
         }
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (50)/3 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            for (int i = 0; i < array183->size; i++) {
                array183->data[i]--;
            }
            for (int i = 0; i < array184->size; i++) {
                if (array184->data[i] == 14) {
                    return array184;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array183;
         params0.data[1] = array184;
         Array* array185 = func18(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array185->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array185->refC--;
         if(array185->refC == 0) {
            delete[] array185->data;
            array185->data = nullptr;
            DEBUG_FREE(array185->id);
            delete array185;
         }
         array184->refC--;
         if(array184->refC == 0) {
            delete[] array184->data;
            array184->data = nullptr;
            DEBUG_FREE(array184->id);
            delete array184;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array183;
         Array* array186 = func14(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array186->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array186->refC--;
         if(array186->refC == 0) {
            delete[] array186->data;
            array186->data = nullptr;
            DEBUG_FREE(array186->id);
            delete array186;
         }
      }
      Array* array187;
      if (pCounter > 0) {
         array187 = vars->data[--pCounter];
         array187->refC++;
         DEBUG_COPY(array187->id);
      } else {
         array187 = new Array();
         array187->size = 618;
         array187->refC = 1;
         array187->id = 187;
         array187->data = new unsigned int[array187->size]();
         DEBUG_NEW(array187->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array183;
      params0.data[1] = array187;
      Array* array188 = func15(&params0, loopsFactor);
      DEBUG_RETURN(array188->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array189;
         if (pCounter > 0) {
            array189 = vars->data[--pCounter];
            array189->refC++;
            DEBUG_COPY(array189->id);
         } else {
            array189 = new Array();
            array189->size = 388;
            array189->refC = 1;
            array189->id = 189;
            array189->data = new unsigned int[array189->size]();
            DEBUG_NEW(array189->id);
         }
         unsigned int loop55 = 0;
         unsigned int loopLimit55 = (50)/3 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            for (int i = 0; i < array188->size; i++) {
                array188->data[i]--;
            }
            for (int i = 0; i < array187->size; i++) {
                if (array187->data[i] == 57) {
                    return array187;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array183;
         params1.data[1] = array187;
         params1.data[2] = array188;
         params1.data[3] = array189;
         Array* array190 = func24(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array190->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array190->refC--;
         if(array190->refC == 0) {
            delete[] array190->data;
            array190->data = nullptr;
            DEBUG_FREE(array190->id);
            delete array190;
         }
         array189->refC--;
         if(array189->refC == 0) {
            delete[] array189->data;
            array189->data = nullptr;
            DEBUG_FREE(array189->id);
            delete array189;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array183;
         params1.data[1] = array187;
         params1.data[2] = array188;
         Array* array191 = func16(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array191->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array191->refC--;
         if(array191->refC == 0) {
            delete[] array191->data;
            array191->data = nullptr;
            DEBUG_FREE(array191->id);
            delete array191;
         }
      }
      for (int i = 0; i < array187->size; i++) {
          if (array187->data[i] == 17) {
              return array187;
          }
      }
      array188->refC--;
      if(array188->refC == 0) {
         delete[] array188->data;
         array188->data = nullptr;
         DEBUG_FREE(array188->id);
         delete array188;
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
       array183->data[i]--;
   }
   for (int i = 0; i < array183->size; i++) {
       if (array183->data[i] == 63) {
           return array183;
       }
   }
   return array183;
}

