#include "program_cpp_array.hpp" 
Array* func36(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array49 = func37(&params0, loopsFactor);
      DEBUG_RETURN(array49->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array49->refC--;
      if(array49->refC == 0) {
         delete[] array49->data;
         array49->data = nullptr;
         DEBUG_FREE(array49->id);
         delete array49;
      }
   }
   else {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array51 = func38(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array51->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      array51->refC--;
      if(array51->refC == 0) {
         delete[] array51->data;
         array51->data = nullptr;
         DEBUG_FREE(array51->id);
         delete array51;
      }
   }
   Array_param params0;
   params0.size = 0;
   Array* data_params0[0];
   params0.data = data_params0;
   Array* array55 = func39(&params0, loopsFactor);
   DEBUG_RETURN(array55->id);
   if(params0.size > 0) {
   	 params0.data.clear();
   }
   return array55;
}

