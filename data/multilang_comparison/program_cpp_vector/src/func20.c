#include "program_cpp_vector.h" 
array_t* func20(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array168;
      if (pCounter > 0) {
         array168 = vars->data[--pCounter];
         array168->refC++;
         DEBUG_COPY(array168->id);
      } else {
         array168 = (array_t*)malloc(sizeof(array_t));
         array168->size = 631;
         array168->refC = 1;
         array168->id = 168;
         array168->data = (unsigned int*)malloc(array168->size*sizeof(unsigned int));
         memset(array168->data, 0, array168->size*sizeof(unsigned int));
         DEBUG_NEW(array168->id);
      }
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (rand()%loopsFactor)/3 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array168->size; i++) {
            array168->data[i]--;
         }
         for (int i = 0; i < array168->size; i++) {
            if (array168->data[i] == 27) { 
               return array168;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array168;
      array_t* array169 = func28(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array169->id);
      free(params0.data);
      array169->refC--;
      if(array169->refC == 0) {
         free(array169->data);
         free(array169);
         DEBUG_FREE(array169->id);
      }
      array168->refC--;
      if(array168->refC == 0) {
         free(array168->data);
         free(array168);
         DEBUG_FREE(array168->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array170 = func22(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array170->id);
      free(params0.data);
      array170->refC--;
      if(array170->refC == 0) {
         free(array170->data);
         free(array170);
         DEBUG_FREE(array170->id);
      }
   }
   array_t* array171;
   if (pCounter > 0) {
      array171 = vars->data[--pCounter];
      array171->refC++;
      DEBUG_COPY(array171->id);
   } else {
      array171 = (array_t*)malloc(sizeof(array_t));
      array171->size = 512;
      array171->refC = 1;
      array171->id = 171;
      array171->data = (unsigned int*)malloc(array171->size*sizeof(unsigned int));
      memset(array171->data, 0, array171->size*sizeof(unsigned int));
      DEBUG_NEW(array171->id);
   }
   return array171;
}

