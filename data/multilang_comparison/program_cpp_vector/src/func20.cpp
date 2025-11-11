#include "program_cpp_vector.hpp" 
Array* func20(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array* array136;
      if (pCounter > 0) {
         array136 = vars->data.at(--pCounter);
         array136->refC++;
         DEBUG_COPY(array136->id);
      } else {
         array136 = new Array();
         array136->size = 460;
         array136->refC = 1;
         array136->id = 136;
         array136->data = std::vector<unsigned int>(array136->size, 0);
         DEBUG_NEW(array136->id);
      }
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (50)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         for (int i = 0; i < array136->size; i++) {
             array136->data.at(i)--;
         }
         for (int i = 0; i < array136->size; i++) {
             if (array136->data.at(i) == 60) {
                 return array136;
             }
         }
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array136;
      Array* array137 = func28(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array137->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array137->refC--;
      if(array137->refC == 0) {
         array137->data.clear();
         delete array137;
         DEBUG_FREE(array137->id);
      }
      array136->refC--;
      if(array136->refC == 0) {
         array136->data.clear();
         delete array136;
         DEBUG_FREE(array136->id);
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array138 = func22(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array138->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array138->refC--;
      if(array138->refC == 0) {
         array138->data.clear();
         delete array138;
         DEBUG_FREE(array138->id);
      }
   }
   Array* array139;
   if (pCounter > 0) {
      array139 = vars->data.at(--pCounter);
      array139->refC++;
      DEBUG_COPY(array139->id);
   } else {
      array139 = new Array();
      array139->size = 748;
      array139->refC = 1;
      array139->id = 139;
      array139->data = std::vector<unsigned int>(array139->size, 0);
      DEBUG_NEW(array139->id);
   }
   return array139;
}

