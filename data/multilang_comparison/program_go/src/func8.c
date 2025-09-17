#include "program_go.h" 
array_t* func8(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array202;
      if (pCounter > 0) {
         array202 = vars->data[--pCounter];
         array202->refC++;
         DEBUG_COPY(array202->id);
      } else {
         array202 = (array_t*)malloc(sizeof(array_t));
         array202->size = 796;
         array202->refC = 1;
         array202->id = 202;
         array202->data = (unsigned int*)malloc(array202->size*sizeof(unsigned int));
         memset(array202->data, 0, array202->size*sizeof(unsigned int));
         DEBUG_NEW(array202->id);
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         for (int i = 0; i < array202->size; i++) {
            array202->data[i]--;
         }
         for (int i = 0; i < array202->size; i++) {
            if (array202->data[i] == 80) { 
               return array202;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array202;
      array_t* array203 = func18(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array203->id);
      free(params0.data);
      array203->refC--;
      if(array203->refC == 0) {
         free(array203->data);
         free(array203);
         DEBUG_FREE(array203->id);
      }
      array202->refC--;
      if(array202->refC == 0) {
         free(array202->data);
         free(array202);
         DEBUG_FREE(array202->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array204 = func14(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array204->id);
      free(params0.data);
      array204->refC--;
      if(array204->refC == 0) {
         free(array204->data);
         free(array204);
         DEBUG_FREE(array204->id);
      }
   }
   array_t* array205;
   if (pCounter > 0) {
      array205 = vars->data[--pCounter];
      array205->refC++;
      DEBUG_COPY(array205->id);
   } else {
      array205 = (array_t*)malloc(sizeof(array_t));
      array205->size = 812;
      array205->refC = 1;
      array205->id = 205;
      array205->data = (unsigned int*)malloc(array205->size*sizeof(unsigned int));
      memset(array205->data, 0, array205->size*sizeof(unsigned int));
      DEBUG_NEW(array205->id);
   }
   return array205;
}

