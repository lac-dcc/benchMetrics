#include "program_cpp_vector.hpp" 
Array* func1(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array225;
   if (pCounter > 0) {
      array225 = vars->data.at(--pCounter);
      array225->refC++;
      DEBUG_COPY(array225->id);
   } else {
      array225 = new Array();
      array225->size = 137;
      array225->refC = 1;
      array225->id = 225;
      array225->data = std::vector<unsigned int>(array225->size, 0);
      DEBUG_NEW(array225->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array225;
   Array* array226 = func3(&params0, loopsFactor);
   DEBUG_RETURN(array226->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   if(PATH0 & 1) {
      Array* array229;
      if (pCounter > 0) {
         array229 = vars->data.at(--pCounter);
         array229->refC++;
         DEBUG_COPY(array229->id);
      } else {
         array229 = new Array();
         array229->size = 963;
         array229->refC = 1;
         array229->id = 229;
         array229->data = std::vector<unsigned int>(array229->size, 0);
         DEBUG_NEW(array229->id);
      }
      unsigned int loop66 = 0;
      unsigned int loopLimit66 = (50)/2 + 1;
      for(; loop66 < loopLimit66; loop66++) {
         for (int i = 0; i < array229->size; i++) {
             array229->data.at(i)--;
         }
         for (int i = 0; i < array226->size; i++) {
             if (array226->data.at(i) == 58) {
                 return array226;
             }
         }
      }
      Array_param params1;
      params1.size = 3;
      std::vector<Array*> data_params1(3);
      params1.data = data_params1;
      params1.data.at(0) = array225;
      params1.data.at(1) = array226;
      params1.data.at(2) = array229;
      Array* array230 = func10(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array230->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array230->refC--;
      if(array230->refC == 0) {
         array230->data.clear();
         delete array230;
         DEBUG_FREE(array230->id);
      }
      array229->refC--;
      if(array229->refC == 0) {
         array229->data.clear();
         delete array229;
         DEBUG_FREE(array229->id);
      }
   }
   else {
      Array_param params1;
      params1.size = 2;
      std::vector<Array*> data_params1(2);
      params1.data = data_params1;
      params1.data.at(0) = array225;
      params1.data.at(1) = array226;
      Array* array231 = func4(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array231->id);
      if(params1.data.size() > 0) {
      	params1.data.clear();
      }
      array231->refC--;
      if(array231->refC == 0) {
         array231->data.clear();
         delete array231;
         DEBUG_FREE(array231->id);
      }
   }
   array225->refC--;
   if(array225->refC == 0) {
      array225->data.clear();
      delete array225;
      DEBUG_FREE(array225->id);
   }
   return array226;
}

