#include "program_cpp_array.hpp" 
Array* func4(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array110;
   if (pCounter > 0) {
      array110 = vars->data[--pCounter];
      array110->refC++;
      DEBUG_COPY(array110->id);
   } else {
      array110 = new Array();
      array110->size = 209;
      array110->refC = 1;
      array110->id = 110;
      array110->data = new unsigned int[array110->size]();
      DEBUG_NEW(array110->id);
   }
   unsigned int loop33 = 0;
   unsigned int loopLimit33 = (50)/3 + 1;
   for(; loop33 < loopLimit33; loop33++) {
      if(PATH0 & 1) {
         Array* array111;
         if (pCounter > 0) {
            array111 = vars->data[--pCounter];
            array111->refC++;
            DEBUG_COPY(array111->id);
         } else {
            array111 = new Array();
            array111->size = 581;
            array111->refC = 1;
            array111->id = 111;
            array111->data = new unsigned int[array111->size]();
            DEBUG_NEW(array111->id);
         }
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (50)/4 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            for (int i = 0; i < array111->size; i++) {
                array111->data[i]--;
            }
            for (int i = 0; i < array110->size; i++) {
                if (array110->data[i] == 32) {
                    return array110;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         Array* data_params0[2];
         params0.data = data_params0;
         params0.data[0] = array110;
         params0.data[1] = array111;
         Array* array112 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array112->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array112->refC--;
         if(array112->refC == 0) {
            delete[] array112->data;
            array112->data = nullptr;
            DEBUG_FREE(array112->id);
            delete array112;
         }
         array111->refC--;
         if(array111->refC == 0) {
            delete[] array111->data;
            array111->data = nullptr;
            DEBUG_FREE(array111->id);
            delete array111;
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         Array* data_params0[1];
         params0.data = data_params0;
         params0.data[0] = array110;
         Array* array113 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array113->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array113->refC--;
         if(array113->refC == 0) {
            delete[] array113->data;
            array113->data = nullptr;
            DEBUG_FREE(array113->id);
            delete array113;
         }
      }
      Array* array114;
      if (pCounter > 0) {
         array114 = vars->data[--pCounter];
         array114->refC++;
         DEBUG_COPY(array114->id);
      } else {
         array114 = new Array();
         array114->size = 769;
         array114->refC = 1;
         array114->id = 114;
         array114->data = new unsigned int[array114->size]();
         DEBUG_NEW(array114->id);
      }
      Array_param params0;
      params0.size = 2;
      Array* data_params0[2];
      params0.data = data_params0;
      params0.data[0] = array110;
      params0.data[1] = array114;
      Array* array115 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array115->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array116;
         if (pCounter > 0) {
            array116 = vars->data[--pCounter];
            array116->refC++;
            DEBUG_COPY(array116->id);
         } else {
            array116 = new Array();
            array116->size = 850;
            array116->refC = 1;
            array116->id = 116;
            array116->data = new unsigned int[array116->size]();
            DEBUG_NEW(array116->id);
         }
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (50)/4 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            for (int i = 0; i < array116->size; i++) {
                array116->data[i]--;
            }
            for (int i = 0; i < array110->size; i++) {
                if (array110->data[i] == 42) {
                    return array110;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         Array* data_params1[4];
         params1.data = data_params1;
         params1.data[0] = array110;
         params1.data[1] = array114;
         params1.data[2] = array115;
         params1.data[3] = array116;
         Array* array117 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array117->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array117->refC--;
         if(array117->refC == 0) {
            delete[] array117->data;
            array117->data = nullptr;
            DEBUG_FREE(array117->id);
            delete array117;
         }
         array116->refC--;
         if(array116->refC == 0) {
            delete[] array116->data;
            array116->data = nullptr;
            DEBUG_FREE(array116->id);
            delete array116;
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         Array* data_params1[3];
         params1.data = data_params1;
         params1.data[0] = array110;
         params1.data[1] = array114;
         params1.data[2] = array115;
         Array* array118 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array118->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array118->refC--;
         if(array118->refC == 0) {
            delete[] array118->data;
            array118->data = nullptr;
            DEBUG_FREE(array118->id);
            delete array118;
         }
      }
      for (int i = 0; i < array115->size; i++) {
          if (array115->data[i] == 67) {
              return array115;
          }
      }
      array115->refC--;
      if(array115->refC == 0) {
         delete[] array115->data;
         array115->data = nullptr;
         DEBUG_FREE(array115->id);
         delete array115;
      }
      array114->refC--;
      if(array114->refC == 0) {
         delete[] array114->data;
         array114->data = nullptr;
         DEBUG_FREE(array114->id);
         delete array114;
      }
   }
   for (int i = 0; i < array110->size; i++) {
       array110->data[i]--;
   }
   for (int i = 0; i < array110->size; i++) {
       if (array110->data[i] == 61) {
           return array110;
       }
   }
   return array110;
}

