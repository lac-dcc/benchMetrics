#include "program_cpp_vector.hpp" 
Array* func30(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array27;
      if (pCounter > 0) {
         array27 = vars->data.at(--pCounter);
         array27->refC++;
         DEBUG_COPY(array27->id);
      } else {
         array27 = new Array();
         array27->size = 434;
         array27->refC = 1;
         array27->id = 27;
         array27->data = std::vector<unsigned int>(array27->size, 0);
         DEBUG_NEW(array27->id);
      }
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (50)/4 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         for (int i = 0; i < array27->size; i++) {
             array27->data.at(i)--;
         }
         for (int i = 0; i < array27->size; i++) {
             if (array27->data.at(i) == 1) {
                 return array27;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array27;
      Array* array28 = func42(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array28->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array28->refC--;
      if(array28->refC == 0) {
         array28->data.clear();
         delete array28;
         DEBUG_FREE(array28->id);
      }
      array27->refC--;
      if(array27->refC == 0) {
         array27->data.clear();
         delete array27;
         DEBUG_FREE(array27->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array39 = func34(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array39->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array39->refC--;
      if(array39->refC == 0) {
         array39->data.clear();
         delete array39;
         DEBUG_FREE(array39->id);
      }
   }
   Array* array45;
   if (pCounter > 0) {
      array45 = vars->data.at(--pCounter);
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = new Array();
      array45->size = 841;
      array45->refC = 1;
      array45->id = 45;
      array45->data = std::vector<unsigned int>(array45->size, 0);
      DEBUG_NEW(array45->id);
   }
   return array45;
}

