#include "program_cpp_vector.hpp" 
Array* func38(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array77;
      if (pCounter > 0) {
         array77 = vars->data.at(--pCounter);
         array77->refC++;
         DEBUG_COPY(array77->id);
      } else {
         array77 = new Array();
         array77->size = 416;
         array77->refC = 1;
         array77->id = 77;
         array77->data = std::vector<unsigned int>(array77->size, 0);
         DEBUG_NEW(array77->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (50)/4 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array77->size; i++) {
             array77->data.at(i)--;
         }
         for (int i = 0; i < array77->size; i++) {
             if (array77->data.at(i) == 24) {
                 return array77;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array77;
      Array* array78 = func46(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array78->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array78->refC--;
      if(array78->refC == 0) {
         array78->data.clear();
         delete array78;
         DEBUG_FREE(array78->id);
      }
      array77->refC--;
      if(array77->refC == 0) {
         array77->data.clear();
         delete array77;
         DEBUG_FREE(array77->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array79 = func40(&params0, loopsFactor);
      DEBUG_RETURN(array79->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array79->refC--;
      if(array79->refC == 0) {
         array79->data.clear();
         delete array79;
         DEBUG_FREE(array79->id);
      }
   }
   Array* array80;
   if (pCounter > 0) {
      array80 = vars->data.at(--pCounter);
      array80->refC++;
      DEBUG_COPY(array80->id);
   } else {
      array80 = new Array();
      array80->size = 36;
      array80->refC = 1;
      array80->id = 80;
      array80->data = std::vector<unsigned int>(array80->size, 0);
      DEBUG_NEW(array80->id);
   }
   return array80;
}

