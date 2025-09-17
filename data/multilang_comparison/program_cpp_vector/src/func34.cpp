#include "program_cpp_vector.hpp" 
Array* func34(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array40;
   if (pCounter > 0) {
      array40 = vars->data.at(--pCounter);
      array40->refC++;
      DEBUG_COPY(array40->id);
   } else {
      array40 = new Array();
      array40->size = 708;
      array40->refC = 1;
      array40->id = 40;
      array40->data = std::vector<unsigned int>(array40->size, 0);
      DEBUG_NEW(array40->id);
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (50)/4 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      if(PATH0 & 1) {
         Array* array41;
         if (pCounter > 0) {
            array41 = vars->data.at(--pCounter);
            array41->refC++;
            DEBUG_COPY(array41->id);
         } else {
            array41 = new Array();
            array41->size = 715;
            array41->refC = 1;
            array41->id = 41;
            array41->data = std::vector<unsigned int>(array41->size, 0);
            DEBUG_NEW(array41->id);
         }
         unsigned int loop15 = 0;
         unsigned int loopLimit15 = (50)/5 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            for (int i = 0; i < array40->size; i++) {
                array40->data.at(i)--;
            }
            for (int i = 0; i < array41->size; i++) {
                if (array41->data.at(i) == 96) {
                    return array41;
                }
            }
         }
         array41->refC--;
         if(array41->refC == 0) {
            array41->data.clear();
            delete array41;
            DEBUG_FREE(array41->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array40;
         Array* array42 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array42->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array42->refC--;
         if(array42->refC == 0) {
            array42->data.clear();
            delete array42;
            DEBUG_FREE(array42->id);
         }
      }
      Array* array43;
      if (pCounter > 0) {
         array43 = vars->data.at(--pCounter);
         array43->refC++;
         DEBUG_COPY(array43->id);
      } else {
         array43 = new Array();
         array43->size = 245;
         array43->refC = 1;
         array43->id = 43;
         array43->data = std::vector<unsigned int>(array43->size, 0);
         DEBUG_NEW(array43->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array40;
      params0.data.at(1) = array43;
      Array* array44 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array44->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      for (int i = 0; i < array43->size; i++) {
          if (array43->data.at(i) == 55) {
              return array43;
          }
      }
      array44->refC--;
      if(array44->refC == 0) {
         array44->data.clear();
         delete array44;
         DEBUG_FREE(array44->id);
      }
      array43->refC--;
      if(array43->refC == 0) {
         array43->data.clear();
         delete array43;
         DEBUG_FREE(array43->id);
      }
   }
   for (int i = 0; i < array40->size; i++) {
       array40->data.at(i)--;
   }
   for (int i = 0; i < array40->size; i++) {
       if (array40->data.at(i) == 64) {
           return array40;
       }
   }
   return array40;
}

