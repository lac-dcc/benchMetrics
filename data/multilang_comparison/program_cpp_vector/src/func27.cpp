#include "program_cpp_vector.hpp" 
Array* func27(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array83;
   if (pCounter > 0) {
      array83 = vars->data.at(--pCounter);
      array83->refC++;
      DEBUG_COPY(array83->id);
   } else {
      array83 = new Array();
      array83->size = 881;
      array83->refC = 1;
      array83->id = 83;
      array83->data = std::vector<unsigned int>(array83->size, 0);
      DEBUG_NEW(array83->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array83;
   Array* array84 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array84->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array87;
      if (pCounter > 0) {
         array87 = vars->data.at(--pCounter);
         array87->refC++;
         DEBUG_COPY(array87->id);
      } else {
         array87 = new Array();
         array87->size = 813;
         array87->refC = 1;
         array87->id = 87;
         array87->data = std::vector<unsigned int>(array87->size, 0);
         DEBUG_NEW(array87->id);
      }
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (50)/3 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         for (int i = 0; i < array83->size; i++) {
             array83->data.at(i)--;
         }
         for (int i = 0; i < array87->size; i++) {
             if (array87->data.at(i) == 95) {
                 return array87;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array83;
      params1.data.at(1) = array84;
      params1.data.at(2) = array87;
      Array* array88 = func42(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array88->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array88->refC--;
      if(array88->refC == 0) {
         array88->data.clear();
         delete array88;
         DEBUG_FREE(array88->id);
      }
      array87->refC--;
      if(array87->refC == 0) {
         array87->data.clear();
         delete array87;
         DEBUG_FREE(array87->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array83;
      params1.data.at(1) = array84;
      Array* array89 = func34(&params1, loopsFactor);
      DEBUG_RETURN(array89->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array89->refC--;
      if(array89->refC == 0) {
         array89->data.clear();
         delete array89;
         DEBUG_FREE(array89->id);
      }
   }
   array84->refC--;
   if(array84->refC == 0) {
      array84->data.clear();
      delete array84;
      DEBUG_FREE(array84->id);
   }
   return array83;
}

