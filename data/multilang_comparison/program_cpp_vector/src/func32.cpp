#include "program_vector_cpp.hpp" 
Array* func32(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array87;
   if (pCounter > 0) {
      array87 = vars->data[--pCounter];
      array87->refC++;
      DEBUG_COPY(array87->id);
   } else {
      array87 = new Array();
      array87->size = 813;
      array87->refC = 1;
      array87->id = 87;
      array87->data = new unsigned int[array87->size]();
      DEBUG_NEW(array87->id);
   }
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (50)/4 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      if(PATH0 & 1) {
         Array* array88;
         if (pCounter > 0) {
            array88 = vars->data[--pCounter];
            array88->refC++;
            DEBUG_COPY(array88->id);
         } else {
            array88 = new Array();
            array88->size = 668;
            array88->refC = 1;
            array88->id = 88;
            array88->data = new unsigned int[array88->size]();
            DEBUG_NEW(array88->id);
         }
         unsigned int loop28 = 0;
         unsigned int loopLimit28 = (50)/5 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            for (int i = 0; i < array87->size; i++) {
                array87->data[i]--;
            }
            for (int i = 0; i < array88->size; i++) {
                if (array88->data[i] == 26) {
                    return array88;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array87;
         params0.data[1] = array88;
         Array* array89 = func46(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array89->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array89->refC--;
         if(array89->refC == 0) {
            delete[] array89->data;
            array89->data = nullptr;
            DEBUG_FREE(array89->id);
            delete array89;
         }
         array88->refC--;
         if(array88->refC == 0) {
            delete[] array88->data;
            array88->data = nullptr;
            DEBUG_FREE(array88->id);
            delete array88;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array87;
         Array* array90 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array90->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array90->refC--;
         if(array90->refC == 0) {
            delete[] array90->data;
            array90->data = nullptr;
            DEBUG_FREE(array90->id);
            delete array90;
         }
      }
      Array* array91;
      if (pCounter > 0) {
         array91 = vars->data[--pCounter];
         array91->refC++;
         DEBUG_COPY(array91->id);
      } else {
         array91 = new Array();
         array91->size = 684;
         array91->refC = 1;
         array91->id = 91;
         array91->data = new unsigned int[array91->size]();
         DEBUG_NEW(array91->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array87;
      params0.data[1] = array91;
      Array* array92 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array92->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array93;
         if (pCounter > 0) {
            array93 = vars->data[--pCounter];
            array93->refC++;
            DEBUG_COPY(array93->id);
         } else {
            array93 = new Array();
            array93->size = 936;
            array93->refC = 1;
            array93->id = 93;
            array93->data = new unsigned int[array93->size]();
            DEBUG_NEW(array93->id);
         }
         unsigned int loop29 = 0;
         unsigned int loopLimit29 = (50)/5 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            for (int i = 0; i < array93->size; i++) {
                array93->data[i]--;
            }
            for (int i = 0; i < array91->size; i++) {
                if (array91->data[i] == 56) {
                    return array91;
                }
            }
         }
         array93->refC--;
         if(array93->refC == 0) {
            delete[] array93->data;
            array93->data = nullptr;
            DEBUG_FREE(array93->id);
            delete array93;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array87;
         params1.data[1] = array91;
         params1.data[2] = array92;
         Array* array94 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array94->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array94->refC--;
         if(array94->refC == 0) {
            delete[] array94->data;
            array94->data = nullptr;
            DEBUG_FREE(array94->id);
            delete array94;
         }
      }
      for (int i = 0; i < array92->size; i++) {
          if (array92->data[i] == 12) {
              return array92;
          }
      }
      array92->refC--;
      if(array92->refC == 0) {
         delete[] array92->data;
         array92->data = nullptr;
         DEBUG_FREE(array92->id);
         delete array92;
      }
      array91->refC--;
      if(array91->refC == 0) {
         delete[] array91->data;
         array91->data = nullptr;
         DEBUG_FREE(array91->id);
         delete array91;
      }
   }
   for (int i = 0; i < array87->size; i++) {
       array87->data[i]--;
   }
   for (int i = 0; i < array87->size; i++) {
       if (array87->data[i] == 59) {
           return array87;
       }
   }
   return array87;
}

