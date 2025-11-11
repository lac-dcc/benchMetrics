#include "program_cpp_array.hpp" 
Array* func9(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array175;
   if (pCounter > 0) {
      array175 = vars->data[--pCounter];
      array175->refC++;
      DEBUG_COPY(array175->id);
   } else {
      array175 = new Array();
      array175->size = 641;
      array175->refC = 1;
      array175->id = 175;
      array175->data = new unsigned int[array175->size]();
      DEBUG_NEW(array175->id);
   }
   Array_param params0;
   params0.size = 1;
   Array* data_params0[1];
   params0.data = data_params0;
   params0.data[0] = array175;
   Array* array176 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array176->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array179;
      if (pCounter > 0) {
         array179 = vars->data[--pCounter];
         array179->refC++;
         DEBUG_COPY(array179->id);
      } else {
         array179 = new Array();
         array179->size = 260;
         array179->refC = 1;
         array179->id = 179;
         array179->data = new unsigned int[array179->size]();
         DEBUG_NEW(array179->id);
      }
      unsigned int loop52 = 0;
      unsigned int loopLimit52 = (50)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         for (int i = 0; i < array176->size; i++) {
             array176->data[i]--;
         }
         for (int i = 0; i < array179->size; i++) {
             if (array179->data[i] == 5) {
                 return array179;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      Array* data_params1[3];
      params1.data = data_params1;
      params1.data[0] = array175;
      params1.data[1] = array176;
      params1.data[2] = array179;
      Array* array180 = func24(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array180->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array180->refC--;
      if(array180->refC == 0) {
         delete[] array180->data;
         array180->data = nullptr;
         DEBUG_FREE(array180->id);
         delete array180;
      }
      array179->refC--;
      if(array179->refC == 0) {
         delete[] array179->data;
         array179->data = nullptr;
         DEBUG_FREE(array179->id);
         delete array179;
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      Array* data_params1[2];
      params1.data = data_params1;
      params1.data[0] = array175;
      params1.data[1] = array176;
      Array* array181 = func16(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array181->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array181->refC--;
      if(array181->refC == 0) {
         delete[] array181->data;
         array181->data = nullptr;
         DEBUG_FREE(array181->id);
         delete array181;
      }
   }
   array175->refC--;
   if(array175->refC == 0) {
      delete[] array175->data;
      array175->data = nullptr;
      DEBUG_FREE(array175->id);
      delete array175;
   }
   return array176;
}

