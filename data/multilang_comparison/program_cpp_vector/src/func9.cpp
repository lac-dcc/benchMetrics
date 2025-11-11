#include "program_cpp_vector.hpp" 
Array* func9(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array175;
   if (pCounter > 0) {
      array175 = vars->data.at(--pCounter);
      array175->refC++;
      DEBUG_COPY(array175->id);
   } else {
      array175 = new Array();
      array175->size = 641;
      array175->refC = 1;
      array175->id = 175;
      array175->data = std::vector<unsigned int>(array175->size, 0);
      DEBUG_NEW(array175->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array175;
   Array* array176 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array176->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array179;
      if (pCounter > 0) {
         array179 = vars->data.at(--pCounter);
         array179->refC++;
         DEBUG_COPY(array179->id);
      } else {
         array179 = new Array();
         array179->size = 260;
         array179->refC = 1;
         array179->id = 179;
         array179->data = std::vector<unsigned int>(array179->size, 0);
         DEBUG_NEW(array179->id);
      }
      unsigned int loop52 = 0;
      unsigned int loopLimit52 = (50)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         for (int i = 0; i < array176->size; i++) {
             array176->data.at(i)--;
         }
         for (int i = 0; i < array179->size; i++) {
             if (array179->data.at(i) == 5) {
                 return array179;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array175;
      params1.data.at(1) = array176;
      params1.data.at(2) = array179;
      Array* array180 = func24(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array180->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array180->refC--;
      if(array180->refC == 0) {
         array180->data.clear();
         delete array180;
         DEBUG_FREE(array180->id);
      }
      array179->refC--;
      if(array179->refC == 0) {
         array179->data.clear();
         delete array179;
         DEBUG_FREE(array179->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array175;
      params1.data.at(1) = array176;
      Array* array181 = func16(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array181->id);
      if(params1.size > 0) {
      	 params1.data.clear();
      }
      array181->refC--;
      if(array181->refC == 0) {
         array181->data.clear();
         delete array181;
         DEBUG_FREE(array181->id);
      }
   }
   array175->refC--;
   if(array175->refC == 0) {
      array175->data.clear();
      delete array175;
      DEBUG_FREE(array175->id);
   }
   return array176;
}

