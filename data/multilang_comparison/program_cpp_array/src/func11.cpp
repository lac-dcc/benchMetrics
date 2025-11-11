#include "program_cpp_array.hpp" 
Array* func11(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (50)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
         Array* array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
            array5->refC++;
            DEBUG_COPY(array5->id);
         } else {
            array5 = new Array();
            array5->size = 736;
            array5->refC = 1;
            array5->id = 5;
            array5->data = new unsigned int[array5->size]();
            DEBUG_NEW(array5->id);
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (50)/4 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5->size; i++) {
                array5->data[i]--;
            }
            for (int i = 0; i < array5->size; i++) {
                if (array5->data[i] == 67) {
                    return array5;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array5;
         Array* array6 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array6->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array6->refC--;
         if(array6->refC == 0) {
            delete[] array6->data;
            array6->data = nullptr;
            DEBUG_FREE(array6->id);
            delete array6;
         }
         array5->refC--;
         if(array5->refC == 0) {
            delete[] array5->data;
            array5->data = nullptr;
            DEBUG_FREE(array5->id);
            delete array5;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array34 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array34->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array34->refC--;
         if(array34->refC == 0) {
            delete[] array34->data;
            array34->data = nullptr;
            DEBUG_FREE(array34->id);
            delete array34;
         }
      }
      Array* array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43->refC++;
         DEBUG_COPY(array43->id);
      } else {
         array43 = new Array();
         array43->size = 618;
         array43->refC = 1;
         array43->id = 43;
         array43->data = new unsigned int[array43->size]();
         DEBUG_NEW(array43->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array43;
      Array* array44 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array44->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array47;
         if (pCounter > 0) {
            array47 = vars->data[--pCounter];
            array47->refC++;
            DEBUG_COPY(array47->id);
         } else {
            array47 = new Array();
            array47->size = 193;
            array47->refC = 1;
            array47->id = 47;
            array47->data = new unsigned int[array47->size]();
            DEBUG_NEW(array47->id);
         }
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (50)/4 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            for (int i = 0; i < array44->size; i++) {
                array44->data[i]--;
            }
            for (int i = 0; i < array47->size; i++) {
                if (array47->data[i] == 64) {
                    return array47;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array43;
         params1.data[1] = array44;
         params1.data[2] = array47;
         Array* array48 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array48->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array48->refC--;
         if(array48->refC == 0) {
            delete[] array48->data;
            array48->data = nullptr;
            DEBUG_FREE(array48->id);
            delete array48;
         }
         array47->refC--;
         if(array47->refC == 0) {
            delete[] array47->data;
            array47->data = nullptr;
            DEBUG_FREE(array47->id);
            delete array47;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array43;
         params1.data[1] = array44;
         Array* array58 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array58->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array58->refC--;
         if(array58->refC == 0) {
            delete[] array58->data;
            array58->data = nullptr;
            DEBUG_FREE(array58->id);
            delete array58;
         }
      }
      for (int i = 0; i < array44->size; i++) {
          if (array44->data[i] == 72) {
              return array44;
          }
      }
      array44->refC--;
      if(array44->refC == 0) {
         delete[] array44->data;
         array44->data = nullptr;
         DEBUG_FREE(array44->id);
         delete array44;
      }
      array43->refC--;
      if(array43->refC == 0) {
         delete[] array43->data;
         array43->data = nullptr;
         DEBUG_FREE(array43->id);
         delete array43;
      }
   }
   Array* array64;
   if (pCounter > 0) {
      array64 = vars->data[--pCounter];
      array64->refC++;
      DEBUG_COPY(array64->id);
   } else {
      array64 = new Array();
      array64->size = 725;
      array64->refC = 1;
      array64->id = 64;
      array64->data = new unsigned int[array64->size]();
      DEBUG_NEW(array64->id);
   }
   return array64;
}

