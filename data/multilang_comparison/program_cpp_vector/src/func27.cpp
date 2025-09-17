#include "program_cpp_vector.hpp" 
Array* func27(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array115;
   if (pCounter > 0) {
      array115 = vars->data.at(--pCounter);
      array115->refC++;
      DEBUG_COPY(array115->id);
   } else {
      array115 = new Array();
      array115->size = 255;
      array115->refC = 1;
      array115->id = 115;
      array115->data = std::vector<unsigned int>(array115->size, 0);
      DEBUG_NEW(array115->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array115;
   Array* array116 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array116->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array119;
      if (pCounter > 0) {
         array119 = vars->data.at(--pCounter);
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = new Array();
         array119->size = 754;
         array119->refC = 1;
         array119->id = 119;
         array119->data = std::vector<unsigned int>(array119->size, 0);
         DEBUG_NEW(array119->id);
      }
      unsigned int loop36 = 0;
      unsigned int loopLimit36 = (50)/3 + 1;
      for(; loop36 < loopLimit36; loop36++) {
         for (int i = 0; i < array115->size; i++) {
             array115->data.at(i)--;
         }
         for (int i = 0; i < array115->size; i++) {
             if (array115->data.at(i) == 44) {
                 return array115;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array115;
      params1.data.at(1) = array116;
      params1.data.at(2) = array119;
      Array* array120 = func42(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array120->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array120->refC--;
      if(array120->refC == 0) {
         array120->data.clear();
         delete array120;
         DEBUG_FREE(array120->id);
      }
      array119->refC--;
      if(array119->refC == 0) {
         array119->data.clear();
         delete array119;
         DEBUG_FREE(array119->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array115;
      params1.data.at(1) = array116;
      Array* array121 = func34(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array121->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array121->refC--;
      if(array121->refC == 0) {
         array121->data.clear();
         delete array121;
         DEBUG_FREE(array121->id);
      }
   }
   array115->refC--;
   if(array115->refC == 0) {
      array115->data.clear();
      delete array115;
      DEBUG_FREE(array115->id);
   }
   return array116;
}

