#include "program_cpp_vector.hpp" 
Array* func22(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array35;
   if (pCounter > 0) {
      array35 = vars->data.at(--pCounter);
      array35->refC++;
      DEBUG_COPY(array35->id);
   } else {
      array35 = new Array();
      array35->size = 567;
      array35->refC = 1;
      array35->id = 35;
      array35->data = std::vector<unsigned int>(array35->size, 0);
      DEBUG_NEW(array35->id);
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (50)/4 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(PATH0 & 1) {
         Array* array36;
         if (pCounter > 0) {
            array36 = vars->data.at(--pCounter);
            array36->refC++;
            DEBUG_COPY(array36->id);
         } else {
            array36 = new Array();
            array36->size = 856;
            array36->refC = 1;
            array36->id = 36;
            array36->data = std::vector<unsigned int>(array36->size, 0);
            DEBUG_NEW(array36->id);
         }
         unsigned int loop13 = 0;
         unsigned int loopLimit13 = (50)/5 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            for (int i = 0; i < array36->size; i++) {
                array36->data.at(i)--;
            }
            for (int i = 0; i < array36->size; i++) {
                if (array36->data.at(i) == 86) {
                    return array36;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array35;
         params0.data.at(1) = array36;
         Array* array37 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array37->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array37->refC--;
         if(array37->refC == 0) {
            array37->data.clear();
            delete array37;
            DEBUG_FREE(array37->id);
         }
         array36->refC--;
         if(array36->refC == 0) {
            array36->data.clear();
            delete array36;
            DEBUG_FREE(array36->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array35;
         Array* array38 = func34(&params0, loopsFactor);
         DEBUG_RETURN(array38->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array38->refC--;
         if(array38->refC == 0) {
            array38->data.clear();
            delete array38;
            DEBUG_FREE(array38->id);
         }
      }
      Array* array39;
      if (pCounter > 0) {
         array39 = vars->data.at(--pCounter);
         array39->refC++;
         DEBUG_COPY(array39->id);
      } else {
         array39 = new Array();
         array39->size = 624;
         array39->refC = 1;
         array39->id = 39;
         array39->data = std::vector<unsigned int>(array39->size, 0);
         DEBUG_NEW(array39->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array35;
      params0.data.at(1) = array39;
      Array* array40 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array40->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array41;
         if (pCounter > 0) {
            array41 = vars->data.at(--pCounter);
            array41->refC++;
            DEBUG_COPY(array41->id);
         } else {
            array41 = new Array();
            array41->size = 732;
            array41->refC = 1;
            array41->id = 41;
            array41->data = std::vector<unsigned int>(array41->size, 0);
            DEBUG_NEW(array41->id);
         }
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (50)/5 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            for (int i = 0; i < array39->size; i++) {
                array39->data.at(i)--;
            }
            for (int i = 0; i < array41->size; i++) {
                if (array41->data.at(i) == 19) {
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
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array35;
         params1.data.at(1) = array39;
         params1.data.at(2) = array40;
         Array* array42 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array42->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array42->refC--;
         if(array42->refC == 0) {
            array42->data.clear();
            delete array42;
            DEBUG_FREE(array42->id);
         }
      }
      for (int i = 0; i < array39->size; i++) {
          if (array39->data.at(i) == 15) {
              return array39;
          }
      }
      array40->refC--;
      if(array40->refC == 0) {
         array40->data.clear();
         delete array40;
         DEBUG_FREE(array40->id);
      }
      array39->refC--;
      if(array39->refC == 0) {
         array39->data.clear();
         delete array39;
         DEBUG_FREE(array39->id);
      }
   }
   for (int i = 0; i < array35->size; i++) {
       array35->data.at(i)--;
   }
   for (int i = 0; i < array35->size; i++) {
       if (array35->data.at(i) == 96) {
           return array35;
       }
   }
   return array35;
}

