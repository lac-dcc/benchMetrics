#include "program_cpp_vector.hpp" 
Array* func31(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array47;
   if (pCounter > 0) {
      array47 = vars->data.at(--pCounter);
      array47->refC++;
      DEBUG_COPY(array47->id);
   } else {
      array47 = new Array();
      array47->size = 124;
      array47->refC = 1;
      array47->id = 47;
      array47->data = std::vector<unsigned int>(array47->size, 0);
      DEBUG_NEW(array47->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array47;
   Array* array48 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array48->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array51;
      if (pCounter > 0) {
         array51 = vars->data.at(--pCounter);
         array51->refC++;
         DEBUG_COPY(array51->id);
      } else {
         array51 = new Array();
         array51->size = 437;
         array51->refC = 1;
         array51->id = 51;
         array51->data = std::vector<unsigned int>(array51->size, 0);
         DEBUG_NEW(array51->id);
      }
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (50)/4 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array48->size; i++) {
             array48->data.at(i)--;
         }
         for (int i = 0; i < array51->size; i++) {
             if (array51->data.at(i) == 7) {
                 return array51;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array47;
      params1.data.at(1) = array48;
      params1.data.at(2) = array51;
      Array* array52 = func46(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array52->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array52->refC--;
      if(array52->refC == 0) {
         array52->data.clear();
         delete array52;
         DEBUG_FREE(array52->id);
      }
      array51->refC--;
      if(array51->refC == 0) {
         array51->data.clear();
         delete array51;
         DEBUG_FREE(array51->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array47;
      params1.data.at(1) = array48;
      Array* array53 = func40(&params1, loopsFactor);
      DEBUG_RETURN(array53->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array53->refC--;
      if(array53->refC == 0) {
         array53->data.clear();
         delete array53;
         DEBUG_FREE(array53->id);
      }
   }
   array47->refC--;
   if(array47->refC == 0) {
      array47->data.clear();
      delete array47;
      DEBUG_FREE(array47->id);
   }
   return array48;
}

