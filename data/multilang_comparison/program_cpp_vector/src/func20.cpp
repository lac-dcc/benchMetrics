#include "program_cpp_vector.hpp" 
Array* func20(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array168;
      if (pCounter > 0) {
         array168 = vars->data.at(--pCounter);
         array168->refC++;
         DEBUG_COPY(array168->id);
      } else {
         array168 = new Array();
         array168->size = 631;
         array168->refC = 1;
         array168->id = 168;
         array168->data = std::vector<unsigned int>(array168->size, 0);
         DEBUG_NEW(array168->id);
      }
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (50)/3 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array168->size; i++) {
             array168->data.at(i)--;
         }
         for (int i = 0; i < array168->size; i++) {
             if (array168->data.at(i) == 27) {
                 return array168;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array168;
      Array* array169 = func28(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array169->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array169->refC--;
      if(array169->refC == 0) {
         array169->data.clear();
         delete array169;
         DEBUG_FREE(array169->id);
      }
      array168->refC--;
      if(array168->refC == 0) {
         array168->data.clear();
         delete array168;
         DEBUG_FREE(array168->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array170 = func22(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array170->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array170->refC--;
      if(array170->refC == 0) {
         array170->data.clear();
         delete array170;
         DEBUG_FREE(array170->id);
      }
   }
   Array* array171;
   if (pCounter > 0) {
      array171 = vars->data.at(--pCounter);
      array171->refC++;
      DEBUG_COPY(array171->id);
   } else {
      array171 = new Array();
      array171->size = 512;
      array171->refC = 1;
      array171->id = 171;
      array171->data = std::vector<unsigned int>(array171->size, 0);
      DEBUG_NEW(array171->id);
   }
   return array171;
}

