#include "program_cpp_vector.hpp" 
Array* func37(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (50)/4 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      if(PATH0 & 1) {
         Array* array71;
         if (pCounter > 0) {
            array71 = vars->data.at(--pCounter);
            array71->refC++;
            DEBUG_COPY(array71->id);
         } else {
            array71 = new Array();
            array71->size = 340;
            array71->refC = 1;
            array71->id = 71;
            array71->data = std::vector<unsigned int>(array71->size, 0);
            DEBUG_NEW(array71->id);
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (50)/5 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            for (int i = 0; i < array71->size; i++) {
                array71->data.at(i)--;
            }
            for (int i = 0; i < array71->size; i++) {
                if (array71->data.at(i) == 10) {
                    return array71;
                }
            }
         }
         array71->refC--;
         if(array71->refC == 0) {
            array71->data.clear();
            delete array71;
            DEBUG_FREE(array71->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         std::vector<Array*> data_params0(0);
         params0.data = data_params0;
         Array* array72 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array72->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array72->refC--;
         if(array72->refC == 0) {
            array72->data.clear();
            delete array72;
            DEBUG_FREE(array72->id);
         }
      }
      Array* array73;
      if (pCounter > 0) {
         array73 = vars->data.at(--pCounter);
         array73->refC++;
         DEBUG_COPY(array73->id);
      } else {
         array73 = new Array();
         array73->size = 661;
         array73->refC = 1;
         array73->id = 73;
         array73->data = std::vector<unsigned int>(array73->size, 0);
         DEBUG_NEW(array73->id);
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array73;
      Array* array74 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array74->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      for (int i = 0; i < array74->size; i++) {
          if (array74->data.at(i) == 20) {
              return array74;
          }
      }
      array74->refC--;
      if(array74->refC == 0) {
         array74->data.clear();
         delete array74;
         DEBUG_FREE(array74->id);
      }
      array73->refC--;
      if(array73->refC == 0) {
         array73->data.clear();
         delete array73;
         DEBUG_FREE(array73->id);
      }
   }
   Array* array75;
   if (pCounter > 0) {
      array75 = vars->data.at(--pCounter);
      array75->refC++;
      DEBUG_COPY(array75->id);
   } else {
      array75 = new Array();
      array75->size = 736;
      array75->refC = 1;
      array75->id = 75;
      array75->data = std::vector<unsigned int>(array75->size, 0);
      DEBUG_NEW(array75->id);
   }
   return array75;
}

