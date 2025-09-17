#include "program_cpp_vector.hpp" 
Array* func14(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array179;
   if (pCounter > 0) {
      array179 = vars->data.at(--pCounter);
      array179->refC++;
      DEBUG_COPY(array179->id);
   } else {
      array179 = new Array();
      array179->size = 237;
      array179->refC = 1;
      array179->id = 179;
      array179->data = std::vector<unsigned int>(array179->size, 0);
      DEBUG_NEW(array179->id);
   }
   unsigned int loop52 = 0;
   unsigned int loopLimit52 = (50)/3 + 1;
   for(; loop52 < loopLimit52; loop52++) {
      if(PATH0 & 1) {
         Array* array180;
         if (pCounter > 0) {
            array180 = vars->data.at(--pCounter);
            array180->refC++;
            DEBUG_COPY(array180->id);
         } else {
            array180 = new Array();
            array180->size = 205;
            array180->refC = 1;
            array180->id = 180;
            array180->data = std::vector<unsigned int>(array180->size, 0);
            DEBUG_NEW(array180->id);
         }
         unsigned int loop53 = 0;
         unsigned int loopLimit53 = (50)/4 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            for (int i = 0; i < array180->size; i++) {
                array180->data.at(i)--;
            }
            for (int i = 0; i < array180->size; i++) {
                if (array180->data.at(i) == 18) {
                    return array180;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array179;
         params0.data.at(1) = array180;
         Array* array181 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array181->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array181->refC--;
         if(array181->refC == 0) {
            array181->data.clear();
            delete array181;
            DEBUG_FREE(array181->id);
         }
         array180->refC--;
         if(array180->refC == 0) {
            array180->data.clear();
            delete array180;
            DEBUG_FREE(array180->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array179;
         Array* array182 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array182->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array182->refC--;
         if(array182->refC == 0) {
            array182->data.clear();
            delete array182;
            DEBUG_FREE(array182->id);
         }
      }
      Array* array183;
      if (pCounter > 0) {
         array183 = vars->data.at(--pCounter);
         array183->refC++;
         DEBUG_COPY(array183->id);
      } else {
         array183 = new Array();
         array183->size = 873;
         array183->refC = 1;
         array183->id = 183;
         array183->data = std::vector<unsigned int>(array183->size, 0);
         DEBUG_NEW(array183->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array179;
      params0.data.at(1) = array183;
      Array* array184 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array184->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array185;
         if (pCounter > 0) {
            array185 = vars->data.at(--pCounter);
            array185->refC++;
            DEBUG_COPY(array185->id);
         } else {
            array185 = new Array();
            array185->size = 483;
            array185->refC = 1;
            array185->id = 185;
            array185->data = std::vector<unsigned int>(array185->size, 0);
            DEBUG_NEW(array185->id);
         }
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (50)/4 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            for (int i = 0; i < array185->size; i++) {
                array185->data.at(i)--;
            }
            for (int i = 0; i < array184->size; i++) {
                if (array184->data.at(i) == 57) {
                    return array184;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array179;
         params1.data.at(1) = array183;
         params1.data.at(2) = array184;
         params1.data.at(3) = array185;
         Array* array186 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array186->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array186->refC--;
         if(array186->refC == 0) {
            array186->data.clear();
            delete array186;
            DEBUG_FREE(array186->id);
         }
         array185->refC--;
         if(array185->refC == 0) {
            array185->data.clear();
            delete array185;
            DEBUG_FREE(array185->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array179;
         params1.data.at(1) = array183;
         params1.data.at(2) = array184;
         Array* array187 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array187->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array187->refC--;
         if(array187->refC == 0) {
            array187->data.clear();
            delete array187;
            DEBUG_FREE(array187->id);
         }
      }
      for (int i = 0; i < array183->size; i++) {
          if (array183->data.at(i) == 18) {
              return array183;
          }
      }
      array184->refC--;
      if(array184->refC == 0) {
         array184->data.clear();
         delete array184;
         DEBUG_FREE(array184->id);
      }
      array183->refC--;
      if(array183->refC == 0) {
         array183->data.clear();
         delete array183;
         DEBUG_FREE(array183->id);
      }
   }
   for (int i = 0; i < array179->size; i++) {
       array179->data.at(i)--;
   }
   for (int i = 0; i < array179->size; i++) {
       if (array179->data.at(i) == 88) {
           return array179;
       }
   }
   return array179;
}

