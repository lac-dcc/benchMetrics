#include "program_cpp_array.hpp" 
Array* func19(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop38 = 0;
   unsigned int loopLimit38 = (50)/3 + 1;
   for(; loop38 < loopLimit38; loop38++) {
      if(PATH0 & 1) {
         Array* array126;
         if (pCounter > 0) {
            array126 = vars->data[--pCounter];
            array126->refC++;
            DEBUG_COPY(array126->id);
         } else {
            array126 = new Array();
            array126->size = 890;
            array126->refC = 1;
            array126->id = 126;
            array126->data = new unsigned int[array126->size]();
            DEBUG_NEW(array126->id);
         }
         unsigned int loop39 = 0;
         unsigned int loopLimit39 = (50)/4 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            for (int i = 0; i < array126->size; i++) {
                array126->data[i]--;
            }
            for (int i = 0; i < array126->size; i++) {
                if (array126->data[i] == 46) {
                    return array126;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array126;
         Array* array127 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array127->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array127->refC--;
         if(array127->refC == 0) {
            delete[] array127->data;
            array127->data = nullptr;
            DEBUG_FREE(array127->id);
            delete array127;
         }
         array126->refC--;
         if(array126->refC == 0) {
            delete[] array126->data;
            array126->data = nullptr;
            DEBUG_FREE(array126->id);
            delete array126;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array128 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array128->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array128->refC--;
         if(array128->refC == 0) {
            delete[] array128->data;
            array128->data = nullptr;
            DEBUG_FREE(array128->id);
            delete array128;
         }
      }
      Array* array129;
      if (pCounter > 0) {
         array129 = vars->data[--pCounter];
         array129->refC++;
         DEBUG_COPY(array129->id);
      } else {
         array129 = new Array();
         array129->size = 788;
         array129->refC = 1;
         array129->id = 129;
         array129->data = new unsigned int[array129->size]();
         DEBUG_NEW(array129->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array129;
      Array* array130 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array130->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array131;
         if (pCounter > 0) {
            array131 = vars->data[--pCounter];
            array131->refC++;
            DEBUG_COPY(array131->id);
         } else {
            array131 = new Array();
            array131->size = 990;
            array131->refC = 1;
            array131->id = 131;
            array131->data = new unsigned int[array131->size]();
            DEBUG_NEW(array131->id);
         }
         unsigned int loop40 = 0;
         unsigned int loopLimit40 = (50)/4 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            for (int i = 0; i < array130->size; i++) {
                array130->data[i]--;
            }
            for (int i = 0; i < array130->size; i++) {
                if (array130->data[i] == 63) {
                    return array130;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array129;
         params1.data[1] = array130;
         params1.data[2] = array131;
         Array* array132 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array132->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array132->refC--;
         if(array132->refC == 0) {
            delete[] array132->data;
            array132->data = nullptr;
            DEBUG_FREE(array132->id);
            delete array132;
         }
         array131->refC--;
         if(array131->refC == 0) {
            delete[] array131->data;
            array131->data = nullptr;
            DEBUG_FREE(array131->id);
            delete array131;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array129;
         params1.data[1] = array130;
         Array* array133 = func34(&params1, loopsFactor);
         DEBUG_RETURN(array133->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array133->refC--;
         if(array133->refC == 0) {
            delete[] array133->data;
            array133->data = nullptr;
            DEBUG_FREE(array133->id);
            delete array133;
         }
      }
      for (int i = 0; i < array130->size; i++) {
          if (array130->data[i] == 52) {
              return array130;
          }
      }
      array130->refC--;
      if(array130->refC == 0) {
         delete[] array130->data;
         array130->data = nullptr;
         DEBUG_FREE(array130->id);
         delete array130;
      }
      array129->refC--;
      if(array129->refC == 0) {
         delete[] array129->data;
         array129->data = nullptr;
         DEBUG_FREE(array129->id);
         delete array129;
      }
   }
   Array* array134;
   if (pCounter > 0) {
      array134 = vars->data[--pCounter];
      array134->refC++;
      DEBUG_COPY(array134->id);
   } else {
      array134 = new Array();
      array134->size = 996;
      array134->refC = 1;
      array134->id = 134;
      array134->data = new unsigned int[array134->size]();
      DEBUG_NEW(array134->id);
   }
   return array134;
}

