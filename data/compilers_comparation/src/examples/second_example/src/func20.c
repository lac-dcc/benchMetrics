#include "second_example.h" 
array_t* func20(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array200;
      if (pCounter > 0) {
         array200 = vars->data[--pCounter];
         array200->refC++;
         DEBUG_COPY(array200->id);
      } else {
         array200 = (array_t*)malloc(sizeof(array_t));
         array200->size = 2;
         array200->refC = 1;
         array200->id = 200;
         array200->data = (unsigned int*)malloc(array200->size*sizeof(unsigned int));
         memset(array200->data, 0, array200->size*sizeof(unsigned int));
         DEBUG_NEW(array200->id);
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/3 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         for (int i = 0; i < array200->size; i++) {
            array200->data[i]--;
         }
         for (int i = 0; i < array200->size; i++) {
            if (array200->data[i] == 96) { 
               return array200;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array200;
      array_t* array201 = func28(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array201->id);
      free(params0.data);
      array201->refC--;
      if(array201->refC == 0) {
         free(array201->data);
         free(array201);
         DEBUG_FREE(array201->id);
      }
      array200->refC--;
      if(array200->refC == 0) {
         free(array200->data);
         free(array200);
         DEBUG_FREE(array200->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array202 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array202->id);
      free(params0.data);
      array202->refC--;
      if(array202->refC == 0) {
         free(array202->data);
         free(array202);
         DEBUG_FREE(array202->id);
      }
   }
   array_t* array203;
   if (pCounter > 0) {
      array203 = vars->data[--pCounter];
      array203->refC++;
      DEBUG_COPY(array203->id);
   } else {
      array203 = (array_t*)malloc(sizeof(array_t));
      array203->size = 21;
      array203->refC = 1;
      array203->id = 203;
      array203->data = (unsigned int*)malloc(array203->size*sizeof(unsigned int));
      memset(array203->data, 0, array203->size*sizeof(unsigned int));
      DEBUG_NEW(array203->id);
   }
   return array203;
}

