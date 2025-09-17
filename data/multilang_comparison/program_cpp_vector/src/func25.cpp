#include "program_cpp_vector.hpp" 
Array* func25(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (50)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(PATH0 & 1) {
         Array* array100;
         if (pCounter > 0) {
            array100 = vars->data.at(--pCounter);
            array100->refC++;
            DEBUG_COPY(array100->id);
         } else {
            array100 = new Array();
            array100->size = 127;
            array100->refC = 1;
            array100->id = 100;
            array100->data = std::vector<unsigned int>(array100->size, 0);
            DEBUG_NEW(array100->id);
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (50)/4 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            for (int i = 0; i < array100->size; i++) {
                array100->data.at(i)--;
            }
            for (int i = 0; i < array100->size; i++) {
                if (array100->data.at(i) == 58) {
                    return array100;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array100;
         Array* array101 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array101->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array101->refC--;
         if(array101->refC == 0) {
            array101->data.clear();
            delete array101;
            DEBUG_FREE(array101->id);
         }
         array100->refC--;
         if(array100->refC == 0) {
            array100->data.clear();
            delete array100;
            DEBUG_FREE(array100->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         std::vector<Array*> data_params0(0);
         params0.data = data_params0;
         Array* array102 = func34(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array102->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array102->refC--;
         if(array102->refC == 0) {
            array102->data.clear();
            delete array102;
            DEBUG_FREE(array102->id);
         }
      }
      Array* array103;
      if (pCounter > 0) {
         array103 = vars->data.at(--pCounter);
         array103->refC++;
         DEBUG_COPY(array103->id);
      } else {
         array103 = new Array();
         array103->size = 396;
         array103->refC = 1;
         array103->id = 103;
         array103->data = std::vector<unsigned int>(array103->size, 0);
         DEBUG_NEW(array103->id);
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array103;
      Array* array104 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array104->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array105;
         if (pCounter > 0) {
            array105 = vars->data.at(--pCounter);
            array105->refC++;
            DEBUG_COPY(array105->id);
         } else {
            array105 = new Array();
            array105->size = 84;
            array105->refC = 1;
            array105->id = 105;
            array105->data = std::vector<unsigned int>(array105->size, 0);
            DEBUG_NEW(array105->id);
         }
         unsigned int loop33 = 0;
         unsigned int loopLimit33 = (50)/4 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            for (int i = 0; i < array104->size; i++) {
                array104->data.at(i)--;
            }
            for (int i = 0; i < array103->size; i++) {
                if (array103->data.at(i) == 72) {
                    return array103;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array103;
         params1.data.at(1) = array104;
         params1.data.at(2) = array105;
         Array* array106 = func46(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array106->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array106->refC--;
         if(array106->refC == 0) {
            array106->data.clear();
            delete array106;
            DEBUG_FREE(array106->id);
         }
         array105->refC--;
         if(array105->refC == 0) {
            array105->data.clear();
            delete array105;
            DEBUG_FREE(array105->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         std::vector<Array*> data_params1(2);
         params1.data = data_params1;
         params1.data.at(0) = array103;
         params1.data.at(1) = array104;
         Array* array107 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array107->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array107->refC--;
         if(array107->refC == 0) {
            array107->data.clear();
            delete array107;
            DEBUG_FREE(array107->id);
         }
      }
      for (int i = 0; i < array104->size; i++) {
          if (array104->data.at(i) == 40) {
              return array104;
          }
      }
      array104->refC--;
      if(array104->refC == 0) {
         array104->data.clear();
         delete array104;
         DEBUG_FREE(array104->id);
      }
      array103->refC--;
      if(array103->refC == 0) {
         array103->data.clear();
         delete array103;
         DEBUG_FREE(array103->id);
      }
   }
   Array* array108;
   if (pCounter > 0) {
      array108 = vars->data.at(--pCounter);
      array108->refC++;
      DEBUG_COPY(array108->id);
   } else {
      array108 = new Array();
      array108->size = 42;
      array108->refC = 1;
      array108->id = 108;
      array108->data = std::vector<unsigned int>(array108->size, 0);
      DEBUG_NEW(array108->id);
   }
   return array108;
}

