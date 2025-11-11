#include "program_cpp_vector.hpp" 
Array* func7(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (50)/2 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         Array* array160;
         if (pCounter > 0) {
            array160 = vars->data.at(--pCounter);
            array160->refC++;
            DEBUG_COPY(array160->id);
         } else {
            array160 = new Array();
            array160->size = 690;
            array160->refC = 1;
            array160->id = 160;
            array160->data = std::vector<unsigned int>(array160->size, 0);
            DEBUG_NEW(array160->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (50)/3 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array160->size; i++) {
                array160->data.at(i)--;
            }
            for (int i = 0; i < array160->size; i++) {
                if (array160->data.at(i) == 57) {
                    return array160;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array160;
         Array* array161 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array161->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array161->refC--;
         if(array161->refC == 0) {
            array161->data.clear();
            delete array161;
            DEBUG_FREE(array161->id);
         }
         array160->refC--;
         if(array160->refC == 0) {
            array160->data.clear();
            delete array160;
            DEBUG_FREE(array160->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         std::vector<Array*> data_params0(0);
         params0.data = data_params0;
         Array* array162 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array162->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array162->refC--;
         if(array162->refC == 0) {
            array162->data.clear();
            delete array162;
            DEBUG_FREE(array162->id);
         }
      }
      Array* array163;
      if (pCounter > 0) {
         array163 = vars->data.at(--pCounter);
         array163->refC++;
         DEBUG_COPY(array163->id);
      } else {
         array163 = new Array();
         array163->size = 312;
         array163->refC = 1;
         array163->id = 163;
         array163->data = std::vector<unsigned int>(array163->size, 0);
         DEBUG_NEW(array163->id);
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array163;
      Array* array164 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array164->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array165;
         if (pCounter > 0) {
            array165 = vars->data.at(--pCounter);
            array165->refC++;
            DEBUG_COPY(array165->id);
         } else {
            array165 = new Array();
            array165->size = 346;
            array165->refC = 1;
            array165->id = 165;
            array165->data = std::vector<unsigned int>(array165->size, 0);
            DEBUG_NEW(array165->id);
         }
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (50)/3 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array163->size; i++) {
                array163->data.at(i)--;
            }
            for (int i = 0; i < array163->size; i++) {
                if (array163->data.at(i) == 16) {
                    return array163;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array163;
         params1.data.at(1) = array164;
         params1.data.at(2) = array165;
         Array* array166 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array166->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array166->refC--;
         if(array166->refC == 0) {
            array166->data.clear();
            delete array166;
            DEBUG_FREE(array166->id);
         }
         array165->refC--;
         if(array165->refC == 0) {
            array165->data.clear();
            delete array165;
            DEBUG_FREE(array165->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         std::vector<Array*> data_params1(2);
         params1.data = data_params1;
         params1.data.at(0) = array163;
         params1.data.at(1) = array164;
         Array* array167 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array167->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array167->refC--;
         if(array167->refC == 0) {
            array167->data.clear();
            delete array167;
            DEBUG_FREE(array167->id);
         }
      }
      for (int i = 0; i < array163->size; i++) {
          if (array163->data.at(i) == 47) {
              return array163;
          }
      }
      array164->refC--;
      if(array164->refC == 0) {
         array164->data.clear();
         delete array164;
         DEBUG_FREE(array164->id);
      }
      array163->refC--;
      if(array163->refC == 0) {
         array163->data.clear();
         delete array163;
         DEBUG_FREE(array163->id);
      }
   }
   Array* array168;
   if (pCounter > 0) {
      array168 = vars->data.at(--pCounter);
      array168->refC++;
      DEBUG_COPY(array168->id);
   } else {
      array168 = new Array();
      array168->size = 970;
      array168->refC = 1;
      array168->id = 168;
      array168->data = std::vector<unsigned int>(array168->size, 0);
      DEBUG_NEW(array168->id);
   }
   return array168;
}

