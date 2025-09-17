#include "program_cpp_vector.hpp" 
Array* func21(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array173;
   if (pCounter > 0) {
      array173 = vars->data.at(--pCounter);
      array173->refC++;
      DEBUG_COPY(array173->id);
   } else {
      array173 = new Array();
      array173->size = 189;
      array173->refC = 1;
      array173->id = 173;
      array173->data = std::vector<unsigned int>(array173->size, 0);
      DEBUG_NEW(array173->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array173;
   Array* array174 = func23(&params0, loopsFactor);
   DEBUG_RETURN(array174->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array175;
      if (pCounter > 0) {
         array175 = vars->data.at(--pCounter);
         array175->refC++;
         DEBUG_COPY(array175->id);
      } else {
         array175 = new Array();
         array175->size = 641;
         array175->refC = 1;
         array175->id = 175;
         array175->data = std::vector<unsigned int>(array175->size, 0);
         DEBUG_NEW(array175->id);
      }
      unsigned int loop51 = 0;
      unsigned int loopLimit51 = (50)/3 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         for (int i = 0; i < array175->size; i++) {
             array175->data.at(i)--;
         }
         for (int i = 0; i < array173->size; i++) {
             if (array173->data.at(i) == 87) {
                 return array173;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array173;
      params1.data.at(1) = array174;
      params1.data.at(2) = array175;
      Array* array176 = func36(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array176->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array176->refC--;
      if(array176->refC == 0) {
         array176->data.clear();
         delete array176;
         DEBUG_FREE(array176->id);
      }
      array175->refC--;
      if(array175->refC == 0) {
         array175->data.clear();
         delete array175;
         DEBUG_FREE(array175->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array173;
      params1.data.at(1) = array174;
      Array* array177 = func32(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array177->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array177->refC--;
      if(array177->refC == 0) {
         array177->data.clear();
         delete array177;
         DEBUG_FREE(array177->id);
      }
   }
   array174->refC--;
   if(array174->refC == 0) {
      array174->data.clear();
      delete array174;
      DEBUG_FREE(array174->id);
   }
   return array173;
}

