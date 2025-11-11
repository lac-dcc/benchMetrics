#include "program_cpp_vector.hpp" 
Array* func38(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array52;
      if (pCounter > 0) {
         array52 = vars->data.at(--pCounter);
         array52->refC++;
         DEBUG_COPY(array52->id);
      } else {
         array52 = new Array();
         array52->size = 275;
         array52->refC = 1;
         array52->id = 52;
         array52->data = std::vector<unsigned int>(array52->size, 0);
         DEBUG_NEW(array52->id);
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (50)/4 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         for (int i = 0; i < array52->size; i++) {
             array52->data.at(i)--;
         }
         for (int i = 0; i < array52->size; i++) {
             if (array52->data.at(i) == 21) {
                 return array52;
             }
         }
      }
      array52->refC--;
      if(array52->refC == 0) {
         array52->data.clear();
         delete array52;
         DEBUG_FREE(array52->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array53 = func40(&params0, loopsFactor);
      DEBUG_RETURN(array53->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array53->refC--;
      if(array53->refC == 0) {
         array53->data.clear();
         delete array53;
         DEBUG_FREE(array53->id);
      }
   }
   Array* array54;
   if (pCounter > 0) {
      array54 = vars->data.at(--pCounter);
      array54->refC++;
      DEBUG_COPY(array54->id);
   } else {
      array54 = new Array();
      array54->size = 29;
      array54->refC = 1;
      array54->id = 54;
      array54->data = std::vector<unsigned int>(array54->size, 0);
      DEBUG_NEW(array54->id);
   }
   return array54;
}

