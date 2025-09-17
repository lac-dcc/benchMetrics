#include "program_cpp_vector.hpp" 
Array* func8(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array202;
      if (pCounter > 0) {
         array202 = vars->data.at(--pCounter);
         array202->refC++;
         DEBUG_COPY(array202->id);
      } else {
         array202 = new Array();
         array202->size = 796;
         array202->refC = 1;
         array202->id = 202;
         array202->data = std::vector<unsigned int>(array202->size, 0);
         DEBUG_NEW(array202->id);
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (50)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         for (int i = 0; i < array202->size; i++) {
             array202->data.at(i)--;
         }
         for (int i = 0; i < array202->size; i++) {
             if (array202->data.at(i) == 80) {
                 return array202;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array202;
      Array* array203 = func18(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array203->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array203->refC--;
      if(array203->refC == 0) {
         array203->data.clear();
         delete array203;
         DEBUG_FREE(array203->id);
      }
      array202->refC--;
      if(array202->refC == 0) {
         array202->data.clear();
         delete array202;
         DEBUG_FREE(array202->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array204 = func14(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array204->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array204->refC--;
      if(array204->refC == 0) {
         array204->data.clear();
         delete array204;
         DEBUG_FREE(array204->id);
      }
   }
   Array* array205;
   if (pCounter > 0) {
      array205 = vars->data.at(--pCounter);
      array205->refC++;
      DEBUG_COPY(array205->id);
   } else {
      array205 = new Array();
      array205->size = 812;
      array205->refC = 1;
      array205->id = 205;
      array205->data = std::vector<unsigned int>(array205->size, 0);
      DEBUG_NEW(array205->id);
   }
   return array205;
}

