#include "program_vector_cpp.hpp" 
Array* func19(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (50)/3 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         Array* array158;
         if (pCounter > 0) {
            array158 = vars->data[--pCounter];
            array158->refC++;
            DEBUG_COPY(array158->id);
         } else {
            array158 = new Array();
            array158->size = 367;
            array158->refC = 1;
            array158->id = 158;
            array158->data = new unsigned int[array158->size]();
            DEBUG_NEW(array158->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (50)/4 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array158->size; i++) {
                array158->data[i]--;
            }
            for (int i = 0; i < array158->size; i++) {
                if (array158->data[i] == 90) {
                    return array158;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array158;
         Array* array159 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array159->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array159->refC--;
         if(array159->refC == 0) {
            delete[] array159->data;
            array159->data = nullptr;
            DEBUG_FREE(array159->id);
            delete array159;
         }
         array158->refC--;
         if(array158->refC == 0) {
            delete[] array158->data;
            array158->data = nullptr;
            DEBUG_FREE(array158->id);
            delete array158;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array160 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array160->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array160->refC--;
         if(array160->refC == 0) {
            delete[] array160->data;
            array160->data = nullptr;
            DEBUG_FREE(array160->id);
            delete array160;
         }
      }
      Array* array161;
      if (pCounter > 0) {
         array161 = vars->data[--pCounter];
         array161->refC++;
         DEBUG_COPY(array161->id);
      } else {
         array161 = new Array();
         array161->size = 168;
         array161->refC = 1;
         array161->id = 161;
         array161->data = new unsigned int[array161->size]();
         DEBUG_NEW(array161->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array161;
      Array* array162 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array162->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
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
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (50)/4 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array162->size; i++) {
                array162->data[i]--;
            }
            for (int i = 0; i < array162->size; i++) {
                if (array162->data[i] == 46) {
                    return array162;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array161;
         params1.data[1] = array162;
         params1.data[2] = array163;
         Array* array164 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array164->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
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
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array161;
         params1.data[1] = array162;
         Array* array165 = func34(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array165->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array165->refC--;
         if(array165->refC == 0) {
            delete[] array165->data;
            array165->data = nullptr;
            DEBUG_FREE(array165->id);
            delete array165;
         }
      }
      for (int i = 0; i < array161->size; i++) {
          if (array161->data[i] == 29) {
              return array161;
          }
      }
      array162->refC--;
      if(array162->refC == 0) {
         delete[] array162->data;
         array162->data = nullptr;
         DEBUG_FREE(array162->id);
         delete array162;
      }
      array161->refC--;
      if(array161->refC == 0) {
         delete[] array161->data;
         array161->data = nullptr;
         DEBUG_FREE(array161->id);
         delete array161;
      }
   }
   Array* array166;
   if (pCounter > 0) {
      array166 = vars->data[--pCounter];
      array166->refC++;
      DEBUG_COPY(array166->id);
   } else {
      array166 = new Array();
      array166->size = 946;
      array166->refC = 1;
      array166->id = 166;
      array166->data = new unsigned int[array166->size]();
      DEBUG_NEW(array166->id);
   }
   return array166;
}

