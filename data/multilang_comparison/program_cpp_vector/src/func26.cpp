#include "program_cpp_vector.hpp" 
Array* func26(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array110;
      if (pCounter > 0) {
         array110 = vars->data.at(--pCounter);
         array110->refC++;
         DEBUG_COPY(array110->id);
      } else {
         array110 = new Array();
         array110->size = 590;
         array110->refC = 1;
         array110->id = 110;
         array110->data = std::vector<unsigned int>(array110->size, 0);
         DEBUG_NEW(array110->id);
      }
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (50)/3 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         for (int i = 0; i < array110->size; i++) {
             array110->data.at(i)--;
         }
         for (int i = 0; i < array110->size; i++) {
             if (array110->data.at(i) == 19) {
                 return array110;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array110;
      Array* array111 = func36(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array111->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array111->refC--;
      if(array111->refC == 0) {
         array111->data.clear();
         delete array111;
         DEBUG_FREE(array111->id);
      }
      array110->refC--;
      if(array110->refC == 0) {
         array110->data.clear();
         delete array110;
         DEBUG_FREE(array110->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array112 = func32(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array112->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array112->refC--;
      if(array112->refC == 0) {
         array112->data.clear();
         delete array112;
         DEBUG_FREE(array112->id);
      }
   }
   Array* array113;
   if (pCounter > 0) {
      array113 = vars->data.at(--pCounter);
      array113->refC++;
      DEBUG_COPY(array113->id);
   } else {
      array113 = new Array();
      array113->size = 4;
      array113->refC = 1;
      array113->id = 113;
      array113->data = std::vector<unsigned int>(array113->size, 0);
      DEBUG_NEW(array113->id);
   }
   return array113;
}

