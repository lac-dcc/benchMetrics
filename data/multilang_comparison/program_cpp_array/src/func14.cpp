#include "program_cpp_array.hpp" 
Array* func14(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array147;
   if (pCounter > 0) {
      array147 = vars->data[--pCounter];
      array147->refC++;
      DEBUG_COPY(array147->id);
   } else {
      array147 = new Array();
      array147->size = 504;
      array147->refC = 1;
      array147->id = 147;
      array147->data = new unsigned int[array147->size]();
      DEBUG_NEW(array147->id);
   }
   unsigned int loop43 = 0;
   unsigned int loopLimit43 = (50)/3 + 1;
   for(; loop43 < loopLimit43; loop43++) {
      if(PATH0 & 1) {
         Array* array148;
         if (pCounter > 0) {
            array148 = vars->data[--pCounter];
            array148->refC++;
            DEBUG_COPY(array148->id);
         } else {
            array148 = new Array();
            array148->size = 629;
            array148->refC = 1;
            array148->id = 148;
            array148->data = new unsigned int[array148->size]();
            DEBUG_NEW(array148->id);
         }
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (50)/4 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            for (int i = 0; i < array148->size; i++) {
                array148->data[i]--;
            }
            for (int i = 0; i < array147->size; i++) {
                if (array147->data[i] == 85) {
                    return array147;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array147;
         params0.data[1] = array148;
         Array* array149 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array149->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array149->refC--;
         if(array149->refC == 0) {
            delete[] array149->data;
            array149->data = nullptr;
            DEBUG_FREE(array149->id);
            delete array149;
         }
         array148->refC--;
         if(array148->refC == 0) {
            delete[] array148->data;
            array148->data = nullptr;
            DEBUG_FREE(array148->id);
            delete array148;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array147;
         Array* array150 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array150->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array150->refC--;
         if(array150->refC == 0) {
            delete[] array150->data;
            array150->data = nullptr;
            DEBUG_FREE(array150->id);
            delete array150;
         }
      }
      Array* array151;
      if (pCounter > 0) {
         array151 = vars->data[--pCounter];
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = new Array();
         array151->size = 900;
         array151->refC = 1;
         array151->id = 151;
         array151->data = new unsigned int[array151->size]();
         DEBUG_NEW(array151->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array147;
      params0.data[1] = array151;
      Array* array152 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array153;
         if (pCounter > 0) {
            array153 = vars->data[--pCounter];
            array153->refC++;
            DEBUG_COPY(array153->id);
         } else {
            array153 = new Array();
            array153->size = 949;
            array153->refC = 1;
            array153->id = 153;
            array153->data = new unsigned int[array153->size]();
            DEBUG_NEW(array153->id);
         }
         unsigned int loop45 = 0;
         unsigned int loopLimit45 = (50)/4 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            for (int i = 0; i < array151->size; i++) {
                array151->data[i]--;
            }
            for (int i = 0; i < array153->size; i++) {
                if (array153->data[i] == 88) {
                    return array153;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array147;
         params1.data[1] = array151;
         params1.data[2] = array152;
         params1.data[3] = array153;
         Array* array154 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array154->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array154->refC--;
         if(array154->refC == 0) {
            delete[] array154->data;
            array154->data = nullptr;
            DEBUG_FREE(array154->id);
            delete array154;
         }
         array153->refC--;
         if(array153->refC == 0) {
            delete[] array153->data;
            array153->data = nullptr;
            DEBUG_FREE(array153->id);
            delete array153;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array147;
         params1.data[1] = array151;
         params1.data[2] = array152;
         Array* array155 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array155->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array155->refC--;
         if(array155->refC == 0) {
            delete[] array155->data;
            array155->data = nullptr;
            DEBUG_FREE(array155->id);
            delete array155;
         }
      }
      for (int i = 0; i < array147->size; i++) {
          if (array147->data[i] == 90) {
              return array147;
          }
      }
      array152->refC--;
      if(array152->refC == 0) {
         delete[] array152->data;
         array152->data = nullptr;
         DEBUG_FREE(array152->id);
         delete array152;
      }
      array151->refC--;
      if(array151->refC == 0) {
         delete[] array151->data;
         array151->data = nullptr;
         DEBUG_FREE(array151->id);
         delete array151;
      }
   }
   for (int i = 0; i < array147->size; i++) {
       array147->data[i]--;
   }
   for (int i = 0; i < array147->size; i++) {
       if (array147->data[i] == 41) {
           return array147;
       }
   }
   return array147;
}

