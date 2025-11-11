#include "program_cpp_array.hpp" 
Array* func7(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (50)/2 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         Array* array160;
         if (pCounter > 0) {
            array160 = vars->data[--pCounter];
            array160->refC++;
            DEBUG_COPY(array160->id);
         } else {
            array160 = new Array();
            array160->size = 690;
            array160->refC = 1;
            array160->id = 160;
            array160->data = new unsigned int[array160->size]();
            DEBUG_NEW(array160->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (50)/3 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array160->size; i++) {
                array160->data[i]--;
            }
            for (int i = 0; i < array160->size; i++) {
                if (array160->data[i] == 57) {
                    return array160;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array160;
         Array* array161 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array161->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array161->refC--;
         if(array161->refC == 0) {
            delete[] array161->data;
            array161->data = nullptr;
            DEBUG_FREE(array161->id);
            delete array161;
         }
         array160->refC--;
         if(array160->refC == 0) {
            delete[] array160->data;
            array160->data = nullptr;
            DEBUG_FREE(array160->id);
            delete array160;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array162 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array162->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array162->refC--;
         if(array162->refC == 0) {
            delete[] array162->data;
            array162->data = nullptr;
            DEBUG_FREE(array162->id);
            delete array162;
         }
      }
      Array* array163;
      if (pCounter > 0) {
         array163 = vars->data[--pCounter];
         array163->refC++;
         DEBUG_COPY(array163->id);
      } else {
         array163 = new Array();
         array163->size = 312;
         array163->refC = 1;
         array163->id = 163;
         array163->data = new unsigned int[array163->size]();
         DEBUG_NEW(array163->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array163;
      Array* array164 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array164->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array165;
         if (pCounter > 0) {
            array165 = vars->data[--pCounter];
            array165->refC++;
            DEBUG_COPY(array165->id);
         } else {
            array165 = new Array();
            array165->size = 346;
            array165->refC = 1;
            array165->id = 165;
            array165->data = new unsigned int[array165->size]();
            DEBUG_NEW(array165->id);
         }
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (50)/3 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array163->size; i++) {
                array163->data[i]--;
            }
            for (int i = 0; i < array163->size; i++) {
                if (array163->data[i] == 16) {
                    return array163;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array163;
         params1.data[1] = array164;
         params1.data[2] = array165;
         Array* array166 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array166->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array166->refC--;
         if(array166->refC == 0) {
            delete[] array166->data;
            array166->data = nullptr;
            DEBUG_FREE(array166->id);
            delete array166;
         }
         array165->refC--;
         if(array165->refC == 0) {
            delete[] array165->data;
            array165->data = nullptr;
            DEBUG_FREE(array165->id);
            delete array165;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array163;
         params1.data[1] = array164;
         Array* array167 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array167->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array167->refC--;
         if(array167->refC == 0) {
            delete[] array167->data;
            array167->data = nullptr;
            DEBUG_FREE(array167->id);
            delete array167;
         }
      }
      for (int i = 0; i < array163->size; i++) {
          if (array163->data[i] == 47) {
              return array163;
          }
      }
      array164->refC--;
      if(array164->refC == 0) {
         delete[] array164->data;
         array164->data = nullptr;
         DEBUG_FREE(array164->id);
         delete array164;
      }
      array163->refC--;
      if(array163->refC == 0) {
         delete[] array163->data;
         array163->data = nullptr;
         DEBUG_FREE(array163->id);
         delete array163;
      }
   }
   Array* array168;
   if (pCounter > 0) {
      array168 = vars->data[--pCounter];
      array168->refC++;
      DEBUG_COPY(array168->id);
   } else {
      array168 = new Array();
      array168->size = 970;
      array168->refC = 1;
      array168->id = 168;
      array168->data = new unsigned int[array168->size]();
      DEBUG_NEW(array168->id);
   }
   return array168;
}

