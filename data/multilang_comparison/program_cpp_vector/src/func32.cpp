#include "program_cpp_vector.hpp" 
Array* func32(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array59;
   if (pCounter > 0) {
      array59 = vars->data.at(--pCounter);
      array59->refC++;
      DEBUG_COPY(array59->id);
   } else {
      array59 = new Array();
      array59->size = 538;
      array59->refC = 1;
      array59->id = 59;
      array59->data = std::vector<unsigned int>(array59->size, 0);
      DEBUG_NEW(array59->id);
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (50)/4 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      if(PATH0 & 1) {
         Array* array60;
         if (pCounter > 0) {
            array60 = vars->data.at(--pCounter);
            array60->refC++;
            DEBUG_COPY(array60->id);
         } else {
            array60 = new Array();
            array60->size = 606;
            array60->refC = 1;
            array60->id = 60;
            array60->data = std::vector<unsigned int>(array60->size, 0);
            DEBUG_NEW(array60->id);
         }
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (50)/5 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            for (int i = 0; i < array59->size; i++) {
                array59->data.at(i)--;
            }
            for (int i = 0; i < array59->size; i++) {
                if (array59->data.at(i) == 18) {
                    return array59;
                }
            }
         }
         array60->refC--;
         if(array60->refC == 0) {
            array60->data.clear();
            delete array60;
            DEBUG_FREE(array60->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array59;
         Array* array61 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array61->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array61->refC--;
         if(array61->refC == 0) {
            array61->data.clear();
            delete array61;
            DEBUG_FREE(array61->id);
         }
      }
      Array* array62;
      if (pCounter > 0) {
         array62 = vars->data.at(--pCounter);
         array62->refC++;
         DEBUG_COPY(array62->id);
      } else {
         array62 = new Array();
         array62->size = 369;
         array62->refC = 1;
         array62->id = 62;
         array62->data = std::vector<unsigned int>(array62->size, 0);
         DEBUG_NEW(array62->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array59;
      params0.data.at(1) = array62;
      Array* array63 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array63->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      for (int i = 0; i < array59->size; i++) {
          if (array59->data.at(i) == 24) {
              return array59;
          }
      }
      array63->refC--;
      if(array63->refC == 0) {
         array63->data.clear();
         delete array63;
         DEBUG_FREE(array63->id);
      }
      array62->refC--;
      if(array62->refC == 0) {
         array62->data.clear();
         delete array62;
         DEBUG_FREE(array62->id);
      }
   }
   for (int i = 0; i < array59->size; i++) {
       array59->data.at(i)--;
   }
   for (int i = 0; i < array59->size; i++) {
       if (array59->data.at(i) == 83) {
           return array59;
       }
   }
   return array59;
}

