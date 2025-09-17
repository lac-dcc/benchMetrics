#include "program_vector_cpp.hpp" 
Array* func22(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array55;
   if (pCounter > 0) {
      array55 = vars->data[--pCounter];
      array55->refC++;
      DEBUG_COPY(array55->id);
   } else {
      array55 = new Array();
      array55->size = 143;
      array55->refC = 1;
      array55->id = 55;
      array55->data = new unsigned int[array55->size]();
      DEBUG_NEW(array55->id);
   }
   unsigned int loop18 = 0;
   unsigned int loopLimit18 = (50)/4 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      if(PATH0 & 1) {
         Array* array56;
         if (pCounter > 0) {
            array56 = vars->data[--pCounter];
            array56->refC++;
            DEBUG_COPY(array56->id);
         } else {
            array56 = new Array();
            array56->size = 11;
            array56->refC = 1;
            array56->id = 56;
            array56->data = new unsigned int[array56->size]();
            DEBUG_NEW(array56->id);
         }
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (50)/5 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            for (int i = 0; i < array55->size; i++) {
                array55->data[i]--;
            }
            for (int i = 0; i < array56->size; i++) {
                if (array56->data[i] == 76) {
                    return array56;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array55;
         params0.data[1] = array56;
         Array* array57 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array57->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array57->refC--;
         if(array57->refC == 0) {
            delete[] array57->data;
            array57->data = nullptr;
            DEBUG_FREE(array57->id);
            delete array57;
         }
         array56->refC--;
         if(array56->refC == 0) {
            delete[] array56->data;
            array56->data = nullptr;
            DEBUG_FREE(array56->id);
            delete array56;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array55;
         Array* array58 = func34(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array58->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array58->refC--;
         if(array58->refC == 0) {
            delete[] array58->data;
            array58->data = nullptr;
            DEBUG_FREE(array58->id);
            delete array58;
         }
      }
      Array* array59;
      if (pCounter > 0) {
         array59 = vars->data[--pCounter];
         array59->refC++;
         DEBUG_COPY(array59->id);
      } else {
         array59 = new Array();
         array59->size = 538;
         array59->refC = 1;
         array59->id = 59;
         array59->data = new unsigned int[array59->size]();
         DEBUG_NEW(array59->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array55;
      params0.data[1] = array59;
      Array* array60 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array60->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array61;
         if (pCounter > 0) {
            array61 = vars->data[--pCounter];
            array61->refC++;
            DEBUG_COPY(array61->id);
         } else {
            array61 = new Array();
            array61->size = 904;
            array61->refC = 1;
            array61->id = 61;
            array61->data = new unsigned int[array61->size]();
            DEBUG_NEW(array61->id);
         }
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (50)/5 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            for (int i = 0; i < array60->size; i++) {
                array60->data[i]--;
            }
            for (int i = 0; i < array55->size; i++) {
                if (array55->data[i] == 88) {
                    return array55;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array55;
         params1.data[1] = array59;
         params1.data[2] = array60;
         params1.data[3] = array61;
         Array* array62 = func46(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array62->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array62->refC--;
         if(array62->refC == 0) {
            delete[] array62->data;
            array62->data = nullptr;
            DEBUG_FREE(array62->id);
            delete array62;
         }
         array61->refC--;
         if(array61->refC == 0) {
            delete[] array61->data;
            array61->data = nullptr;
            DEBUG_FREE(array61->id);
            delete array61;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array55;
         params1.data[1] = array59;
         params1.data[2] = array60;
         Array* array63 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array63->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array63->refC--;
         if(array63->refC == 0) {
            delete[] array63->data;
            array63->data = nullptr;
            DEBUG_FREE(array63->id);
            delete array63;
         }
      }
      for (int i = 0; i < array60->size; i++) {
          if (array60->data[i] == 43) {
              return array60;
          }
      }
      array60->refC--;
      if(array60->refC == 0) {
         delete[] array60->data;
         array60->data = nullptr;
         DEBUG_FREE(array60->id);
         delete array60;
      }
      array59->refC--;
      if(array59->refC == 0) {
         delete[] array59->data;
         array59->data = nullptr;
         DEBUG_FREE(array59->id);
         delete array59;
      }
   }
   for (int i = 0; i < array55->size; i++) {
       array55->data[i]--;
   }
   for (int i = 0; i < array55->size; i++) {
       if (array55->data[i] == 90) {
           return array55;
       }
   }
   return array55;
}

