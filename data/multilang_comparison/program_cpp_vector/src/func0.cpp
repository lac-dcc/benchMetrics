#include "program_cpp_vector.hpp" 
Array* func0(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array1;
   if (pCounter > 0) {
      array1 = vars->data.at(--pCounter);
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = new Array();
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = std::vector<unsigned int>(array1->size, 0);
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (50)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array* array2;
         if (pCounter > 0) {
            array2 = vars->data.at(--pCounter);
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = new Array();
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = std::vector<unsigned int>(array2->size, 0);
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (50)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
                array2->data.at(i)--;
            }
            for (int i = 0; i < array2->size; i++) {
                if (array2->data.at(i) == 62) {
                    return array2;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array1;
         params0.data.at(1) = array2;
         Array* array3 = func10(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array3->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array3->refC--;
         if(array3->refC == 0) {
            array3->data.clear();
            delete array3;
            DEBUG_FREE(array3->id);
         }
         array2->refC--;
         if(array2->refC == 0) {
            array2->data.clear();
            delete array2;
            DEBUG_FREE(array2->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array1;
         Array* array141 = func4(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array141->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array141->refC--;
         if(array141->refC == 0) {
            array141->data.clear();
            delete array141;
            DEBUG_FREE(array141->id);
         }
      }
      Array* array151;
      if (pCounter > 0) {
         array151 = vars->data.at(--pCounter);
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = new Array();
         array151->size = 988;
         array151->refC = 1;
         array151->id = 151;
         array151->data = std::vector<unsigned int>(array151->size, 0);
         DEBUG_NEW(array151->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array1;
      params0.data.at(1) = array151;
      Array* array152 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array155;
         if (pCounter > 0) {
            array155 = vars->data.at(--pCounter);
            array155->refC++;
            DEBUG_COPY(array155->id);
         } else {
            array155 = new Array();
            array155->size = 232;
            array155->refC = 1;
            array155->id = 155;
            array155->data = std::vector<unsigned int>(array155->size, 0);
            DEBUG_NEW(array155->id);
         }
         unsigned int loop46 = 0;
         unsigned int loopLimit46 = (50)/3 + 1;
         for(; loop46 < loopLimit46; loop46++) {
            for (int i = 0; i < array151->size; i++) {
                array151->data.at(i)--;
            }
            for (int i = 0; i < array152->size; i++) {
                if (array152->data.at(i) == 60) {
                    return array152;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array1;
         params1.data.at(1) = array151;
         params1.data.at(2) = array152;
         params1.data.at(3) = array155;
         Array* array156 = func18(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array156->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array156->refC--;
         if(array156->refC == 0) {
            array156->data.clear();
            delete array156;
            DEBUG_FREE(array156->id);
         }
         array155->refC--;
         if(array155->refC == 0) {
            array155->data.clear();
            delete array155;
            DEBUG_FREE(array155->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array1;
         params1.data.at(1) = array151;
         params1.data.at(2) = array152;
         Array* array178 = func14(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array178->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array178->refC--;
         if(array178->refC == 0) {
            array178->data.clear();
            delete array178;
            DEBUG_FREE(array178->id);
         }
      }
      for (int i = 0; i < array152->size; i++) {
          if (array152->data.at(i) == 57) {
              return array152;
          }
      }
      array152->refC--;
      if(array152->refC == 0) {
         array152->data.clear();
         delete array152;
         DEBUG_FREE(array152->id);
      }
      array151->refC--;
      if(array151->refC == 0) {
         array151->data.clear();
         delete array151;
         DEBUG_FREE(array151->id);
      }
   }
   return array1;
}

