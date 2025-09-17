#include "program_cpp_vector.hpp" 
Array* func17(Array_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array136;
   if (pCounter > 0) {
      array136 = vars->data.at(--pCounter);
      array136->refC++;
      DEBUG_COPY(array136->id);
   } else {
      array136 = new Array();
      array136->size = 436;
      array136->refC = 1;
      array136->id = 136;
      array136->data = std::vector<unsigned int>(array136->size, 0);
      DEBUG_NEW(array136->id);
   }
   Array_param params0;
   params0.size = 1;
   std::vector<Array*> data_params0(1);
   params0.data = data_params0;
   params0.data.at(0) = array136;
   Array* array137 = func24(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array137->id);
   if(params0.data.size() > 0) {
   	params0.data.clear();
   }
   unsigned int loop40 = 0;
   unsigned int loopLimit40 = (50)/3 + 1;
   for(; loop40 < loopLimit40; loop40++) {
      for (int i = 0; i < array137->size; i++) {
         array137->data.at(i)++;
      }
   }
   for (int i = 0; i < array136->size; i++) {
       if (array136->data.at(i) == 4) {
           return array136;
       }
   }
   array137->refC--;
   if(array137->refC == 0) {
      array137->data.clear();
      delete array137;
      DEBUG_FREE(array137->id);
   }
   return array136;
}

