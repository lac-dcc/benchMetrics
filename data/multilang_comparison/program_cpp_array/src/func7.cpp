#include "program_cpp_array.hpp" 
Array* func7(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (50)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      if(PATH0 & 1) {
         Array* array192;
         if (pCounter > 0) {
            array192 = vars->data[--pCounter];
            array192->refC++;
            DEBUG_COPY(array192->id);
         } else {
            array192 = new Array();
            array192->size = 462;
            array192->refC = 1;
            array192->id = 192;
            array192->data = new unsigned int[array192->size]();
            DEBUG_NEW(array192->id);
         }
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (50)/3 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            for (int i = 0; i < array192->size; i++) {
                array192->data[i]--;
            }
            for (int i = 0; i < array192->size; i++) {
                if (array192->data[i] == 92) {
                    return array192;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array192;
         Array* array193 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array193->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array193->refC--;
         if(array193->refC == 0) {
            delete[] array193->data;
            array193->data = nullptr;
            DEBUG_FREE(array193->id);
            delete array193;
         }
         array192->refC--;
         if(array192->refC == 0) {
            delete[] array192->data;
            array192->data = nullptr;
            DEBUG_FREE(array192->id);
            delete array192;
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         Array* data_params0[0];
         params0.data = data_params0;
         Array* array194 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array194->id);
         if(params0.size > 0) {
         	params0.data = nullptr;
         }
         array194->refC--;
         if(array194->refC == 0) {
            delete[] array194->data;
            array194->data = nullptr;
            DEBUG_FREE(array194->id);
            delete array194;
         }
      }
      Array* array195;
      if (pCounter > 0) {
         array195 = vars->data[--pCounter];
         array195->refC++;
         DEBUG_COPY(array195->id);
      } else {
         array195 = new Array();
         array195->size = 157;
         array195->refC = 1;
         array195->id = 195;
         array195->data = new unsigned int[array195->size]();
         DEBUG_NEW(array195->id);
      }
      Array_param params0;
      params0.size = 1;
      Array* data_params0[1];
      params0.data = data_params0;
      params0.data[0] = array195;
      Array* array196 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array196->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      if(PATH0 & 2) {
         Array* array197;
         if (pCounter > 0) {
            array197 = vars->data[--pCounter];
            array197->refC++;
            DEBUG_COPY(array197->id);
         } else {
            array197 = new Array();
            array197->size = 947;
            array197->refC = 1;
            array197->id = 197;
            array197->data = new unsigned int[array197->size]();
            DEBUG_NEW(array197->id);
         }
         unsigned int loop58 = 0;
         unsigned int loopLimit58 = (50)/3 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            for (int i = 0; i < array196->size; i++) {
                array196->data[i]--;
            }
            for (int i = 0; i < array195->size; i++) {
                if (array195->data[i] == 21) {
                    return array195;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array195;
         params1.data[1] = array196;
         params1.data[2] = array197;
         Array* array198 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array198->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array198->refC--;
         if(array198->refC == 0) {
            delete[] array198->data;
            array198->data = nullptr;
            DEBUG_FREE(array198->id);
            delete array198;
         }
         array197->refC--;
         if(array197->refC == 0) {
            delete[] array197->data;
            array197->data = nullptr;
            DEBUG_FREE(array197->id);
            delete array197;
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array195;
         params1.data[1] = array196;
         Array* array199 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array199->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array199->refC--;
         if(array199->refC == 0) {
            delete[] array199->data;
            array199->data = nullptr;
            DEBUG_FREE(array199->id);
            delete array199;
         }
      }
      for (int i = 0; i < array195->size; i++) {
          if (array195->data[i] == 25) {
              return array195;
          }
      }
      array196->refC--;
      if(array196->refC == 0) {
         delete[] array196->data;
         array196->data = nullptr;
         DEBUG_FREE(array196->id);
         delete array196;
      }
      array195->refC--;
      if(array195->refC == 0) {
         delete[] array195->data;
         array195->data = nullptr;
         DEBUG_FREE(array195->id);
         delete array195;
      }
   }
   Array* array200;
   if (pCounter > 0) {
      array200 = vars->data[--pCounter];
      array200->refC++;
      DEBUG_COPY(array200->id);
   } else {
      array200 = new Array();
      array200->size = 81;
      array200->refC = 1;
      array200->id = 200;
      array200->data = new unsigned int[array200->size]();
      DEBUG_NEW(array200->id);
   }
   return array200;
}

