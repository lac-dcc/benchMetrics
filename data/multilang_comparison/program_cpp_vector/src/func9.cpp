#include "program_cpp_vector.hpp" 
Array* func9(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array207;
   if (pCounter > 0) {
      array207 = vars->data.at(--pCounter);
      array207->refC++;
      DEBUG_COPY(array207->id);
   } else {
      array207 = new Array();
      array207->size = 176;
      array207->refC = 1;
      array207->id = 207;
      array207->data = std::vector<unsigned int>(array207->size, 0);
      DEBUG_NEW(array207->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array207;
   Array* array208 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array208->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array211;
      if (pCounter > 0) {
         array211 = vars->data.at(--pCounter);
         array211->refC++;
         DEBUG_COPY(array211->id);
      } else {
         array211 = new Array();
         array211->size = 818;
         array211->refC = 1;
         array211->id = 211;
         array211->data = std::vector<unsigned int>(array211->size, 0);
         DEBUG_NEW(array211->id);
      }
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (50)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         for (int i = 0; i < array211->size; i++) {
             array211->data.at(i)--;
         }
         for (int i = 0; i < array207->size; i++) {
             if (array207->data.at(i) == 49) {
                 return array207;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array207;
      params1.data.at(1) = array208;
      params1.data.at(2) = array211;
      Array* array212 = func24(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array212->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array212->refC--;
      if(array212->refC == 0) {
         array212->data.clear();
         delete array212;
         DEBUG_FREE(array212->id);
      }
      array211->refC--;
      if(array211->refC == 0) {
         array211->data.clear();
         delete array211;
         DEBUG_FREE(array211->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array207;
      params1.data.at(1) = array208;
      Array* array213 = func16(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array213->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array213->refC--;
      if(array213->refC == 0) {
         array213->data.clear();
         delete array213;
         DEBUG_FREE(array213->id);
      }
   }
   array207->refC--;
   if(array207->refC == 0) {
      array207->data.clear();
      delete array207;
      DEBUG_FREE(array207->id);
   }
   return array208;
}

