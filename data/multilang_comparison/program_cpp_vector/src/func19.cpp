#include "program_cpp_vector.hpp" 
Array* func19(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (50)/3 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         Array* array158;
         if (pCounter > 0) {
            array158 = vars->data.at(--pCounter);
            array158->refC++;
            DEBUG_COPY(array158->id);
         } else {
            array158 = new Array();
            array158->size = 367;
            array158->refC = 1;
            array158->id = 158;
            array158->data = std::vector<unsigned int>(array158->size, 0);
            DEBUG_NEW(array158->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (50)/4 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array158->size; i++) {
                array158->data.at(i)--;
            }
            for (int i = 0; i < array158->size; i++) {
                if (array158->data.at(i) == 90) {
                    return array158;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array158;
         Array* array159 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array159->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array159->refC--;
         if(array159->refC == 0) {
            array159->data.clear();
            delete array159;
            DEBUG_FREE(array159->id);
         }
         array158->refC--;
         if(array158->refC == 0) {
            array158->data.clear();
            delete array158;
            DEBUG_FREE(array158->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         std::vector<Array*> data_params0(0);
         params0.data = data_params0;
         Array* array160 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array160->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array160->refC--;
         if(array160->refC == 0) {
            array160->data.clear();
            delete array160;
            DEBUG_FREE(array160->id);
         }
      }
      Array* array161;
      if (pCounter > 0) {
         array161 = vars->data.at(--pCounter);
         array161->refC++;
         DEBUG_COPY(array161->id);
      } else {
         array161 = new Array();
         array161->size = 168;
         array161->refC = 1;
         array161->id = 161;
         array161->data = std::vector<unsigned int>(array161->size, 0);
         DEBUG_NEW(array161->id);
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array161;
      Array* array162 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array162->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
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
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (50)/4 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array162->size; i++) {
                array162->data.at(i)--;
            }
            for (int i = 0; i < array162->size; i++) {
                if (array162->data.at(i) == 46) {
                    return array162;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array161;
         params1.data.at(1) = array162;
         params1.data.at(2) = array163;
         Array* array164 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array164->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
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
      else {
         Array_param params1;
         params1.size = 2;
         std::vector<Array*> data_params1(2);
         params1.data = data_params1;
         params1.data.at(0) = array161;
         params1.data.at(1) = array162;
         Array* array165 = func34(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array165->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array165->refC--;
         if(array165->refC == 0) {
            array165->data.clear();
            delete array165;
            DEBUG_FREE(array165->id);
         }
      }
      for (int i = 0; i < array161->size; i++) {
          if (array161->data.at(i) == 29) {
              return array161;
          }
      }
      array162->refC--;
      if(array162->refC == 0) {
         array162->data.clear();
         delete array162;
         DEBUG_FREE(array162->id);
      }
      array161->refC--;
      if(array161->refC == 0) {
         array161->data.clear();
         delete array161;
         DEBUG_FREE(array161->id);
      }
   }
   Array* array166;
   if (pCounter > 0) {
      array166 = vars->data.at(--pCounter);
      array166->refC++;
      DEBUG_COPY(array166->id);
   } else {
      array166 = new Array();
      array166->size = 946;
      array166->refC = 1;
      array166->id = 166;
      array166->data = std::vector<unsigned int>(array166->size, 0);
      DEBUG_NEW(array166->id);
   }
   return array166;
}

