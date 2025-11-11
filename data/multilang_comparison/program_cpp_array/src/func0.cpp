#include "program_cpp_array.hpp" 
Array* func0(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = new Array();
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = new unsigned int[array1->size]();
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (50)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array* array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = new Array();
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = new unsigned int[array2->size]();
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (50)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
                array2->data[i]--;
            }
            for (int i = 0; i < array2->size; i++) {
                if (array2->data[i] == 62) {
                    return array2;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array1;
         params0.data[1] = array2;
         Array* array3 = func10(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array3->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array3->refC--;
         if(array3->refC == 0) {
            delete[] array3->data;
            array3->data = nullptr;
            DEBUG_FREE(array3->id);
            delete array3;
         }
         array2->refC--;
         if(array2->refC == 0) {
            delete[] array2->data;
            array2->data = nullptr;
            DEBUG_FREE(array2->id);
            delete array2;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array1;
         Array* array109 = func4(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array109->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array109->refC--;
         if(array109->refC == 0) {
            delete[] array109->data;
            array109->data = nullptr;
            DEBUG_FREE(array109->id);
            delete array109;
         }
      }
      Array* array119;
      if (pCounter > 0) {
         array119 = vars->data[--pCounter];
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = new Array();
         array119->size = 326;
         array119->refC = 1;
         array119->id = 119;
         array119->data = new unsigned int[array119->size]();
         DEBUG_NEW(array119->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array1;
      params0.data[1] = array119;
      Array* array120 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array120->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array123;
         if (pCounter > 0) {
            array123 = vars->data[--pCounter];
            array123->refC++;
            DEBUG_COPY(array123->id);
         } else {
            array123 = new Array();
            array123->size = 872;
            array123->refC = 1;
            array123->id = 123;
            array123->data = new unsigned int[array123->size]();
            DEBUG_NEW(array123->id);
         }
         unsigned int loop37 = 0;
         unsigned int loopLimit37 = (50)/3 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            for (int i = 0; i < array1->size; i++) {
                array1->data[i]--;
            }
            for (int i = 0; i < array120->size; i++) {
                if (array120->data[i] == 98) {
                    return array120;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array1;
         params1.data[1] = array119;
         params1.data[2] = array120;
         params1.data[3] = array123;
         Array* array124 = func18(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array124->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array124->refC--;
         if(array124->refC == 0) {
            delete[] array124->data;
            array124->data = nullptr;
            DEBUG_FREE(array124->id);
            delete array124;
         }
         array123->refC--;
         if(array123->refC == 0) {
            delete[] array123->data;
            array123->data = nullptr;
            DEBUG_FREE(array123->id);
            delete array123;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array1;
         params1.data[1] = array119;
         params1.data[2] = array120;
         Array* array146 = func14(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array146->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array146->refC--;
         if(array146->refC == 0) {
            delete[] array146->data;
            array146->data = nullptr;
            DEBUG_FREE(array146->id);
            delete array146;
         }
      }
      for (int i = 0; i < array120->size; i++) {
          if (array120->data[i] == 32) {
              return array120;
          }
      }
      array120->refC--;
      if(array120->refC == 0) {
         delete[] array120->data;
         array120->data = nullptr;
         DEBUG_FREE(array120->id);
         delete array120;
      }
      array119->refC--;
      if(array119->refC == 0) {
         delete[] array119->data;
         array119->data = nullptr;
         DEBUG_FREE(array119->id);
         delete array119;
      }
   }
   return array1;
}

