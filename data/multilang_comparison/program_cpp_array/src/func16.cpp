#include "program_cpp_array.hpp" 
Array* func16(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array91;
   if (pCounter > 0) {
      array91 = vars->data[--pCounter];
      array91->refC++;
      DEBUG_COPY(array91->id);
   } else {
      array91 = new Array();
      array91->size = 445;
      array91->refC = 1;
      array91->id = 91;
      array91->data = new unsigned int[array91->size]();
      DEBUG_NEW(array91->id);
   }
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (50)/3 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      if(PATH0 & 1) {
         Array* array92;
         if (pCounter > 0) {
            array92 = vars->data[--pCounter];
            array92->refC++;
            DEBUG_COPY(array92->id);
         } else {
            array92 = new Array();
            array92->size = 756;
            array92->refC = 1;
            array92->id = 92;
            array92->data = new unsigned int[array92->size]();
            DEBUG_NEW(array92->id);
         }
         unsigned int loop29 = 0;
         unsigned int loopLimit29 = (50)/4 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            for (int i = 0; i < array92->size; i++) {
                array92->data[i]--;
            }
            for (int i = 0; i < array91->size; i++) {
                if (array91->data[i] == 87) {
                    return array91;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array91;
         params0.data[1] = array92;
         Array* array93 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array93->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array93->refC--;
         if(array93->refC == 0) {
            delete[] array93->data;
            array93->data = nullptr;
            DEBUG_FREE(array93->id);
            delete array93;
         }
         array92->refC--;
         if(array92->refC == 0) {
            delete[] array92->data;
            array92->data = nullptr;
            DEBUG_FREE(array92->id);
            delete array92;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array91;
         Array* array94 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array94->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array94->refC--;
         if(array94->refC == 0) {
            delete[] array94->data;
            array94->data = nullptr;
            DEBUG_FREE(array94->id);
            delete array94;
         }
      }
      Array* array95;
      if (pCounter > 0) {
         array95 = vars->data[--pCounter];
         array95->refC++;
         DEBUG_COPY(array95->id);
      } else {
         array95 = new Array();
         array95->size = 9;
         array95->refC = 1;
         array95->id = 95;
         array95->data = new unsigned int[array95->size]();
         DEBUG_NEW(array95->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array91;
      params0.data[1] = array95;
      Array* array96 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array96->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array97;
         if (pCounter > 0) {
            array97 = vars->data[--pCounter];
            array97->refC++;
            DEBUG_COPY(array97->id);
         } else {
            array97 = new Array();
            array97->size = 342;
            array97->refC = 1;
            array97->id = 97;
            array97->data = new unsigned int[array97->size]();
            DEBUG_NEW(array97->id);
         }
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (50)/4 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            for (int i = 0; i < array97->size; i++) {
                array97->data[i]--;
            }
            for (int i = 0; i < array96->size; i++) {
                if (array96->data[i] == 1) {
                    return array96;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array91;
         params1.data[1] = array95;
         params1.data[2] = array96;
         params1.data[3] = array97;
         Array* array98 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array98->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array98->refC--;
         if(array98->refC == 0) {
            delete[] array98->data;
            array98->data = nullptr;
            DEBUG_FREE(array98->id);
            delete array98;
         }
         array97->refC--;
         if(array97->refC == 0) {
            delete[] array97->data;
            array97->data = nullptr;
            DEBUG_FREE(array97->id);
            delete array97;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array91;
         params1.data[1] = array95;
         params1.data[2] = array96;
         Array* array99 = func34(&params1, loopsFactor);
         DEBUG_RETURN(array99->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array99->refC--;
         if(array99->refC == 0) {
            delete[] array99->data;
            array99->data = nullptr;
            DEBUG_FREE(array99->id);
            delete array99;
         }
      }
      for (int i = 0; i < array96->size; i++) {
          if (array96->data[i] == 99) {
              return array96;
          }
      }
      array96->refC--;
      if(array96->refC == 0) {
         delete[] array96->data;
         array96->data = nullptr;
         DEBUG_FREE(array96->id);
         delete array96;
      }
      array95->refC--;
      if(array95->refC == 0) {
         delete[] array95->data;
         array95->data = nullptr;
         DEBUG_FREE(array95->id);
         delete array95;
      }
   }
   for (int i = 0; i < array91->size; i++) {
       array91->data[i]--;
   }
   for (int i = 0; i < array91->size; i++) {
       if (array91->data[i] == 39) {
           return array91;
       }
   }
   return array91;
}

