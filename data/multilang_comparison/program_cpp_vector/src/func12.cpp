#include "program_cpp_vector.hpp" 
Array* func12(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array97;
      if (pCounter > 0) {
         array97 = vars->data.at(--pCounter);
         array97->refC++;
         DEBUG_COPY(array97->id);
      } else {
         array97 = new Array();
         array97->size = 321;
         array97->refC = 1;
         array97->id = 97;
         array97->data = std::vector<unsigned int>(array97->size, 0);
         DEBUG_NEW(array97->id);
      }
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (50)/3 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array97->size; i++) {
             array97->data.at(i)--;
         }
         for (int i = 0; i < array97->size; i++) {
             if (array97->data.at(i) == 99) {
                 return array97;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array97;
      Array* array98 = func24(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array98->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array98->refC--;
      if(array98->refC == 0) {
         array98->data.clear();
         delete array98;
         DEBUG_FREE(array98->id);
      }
      array97->refC--;
      if(array97->refC == 0) {
         array97->data.clear();
         delete array97;
         DEBUG_FREE(array97->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array122 = func16(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array122->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      array122->refC--;
      if(array122->refC == 0) {
         array122->data.clear();
         delete array122;
         DEBUG_FREE(array122->id);
      }
   }
   Array* array132;
   if (pCounter > 0) {
      array132 = vars->data.at(--pCounter);
      array132->refC++;
      DEBUG_COPY(array132->id);
   } else {
      array132 = new Array();
      array132->size = 497;
      array132->refC = 1;
      array132->id = 132;
      array132->data = std::vector<unsigned int>(array132->size, 0);
      DEBUG_NEW(array132->id);
   }
   return array132;
}

