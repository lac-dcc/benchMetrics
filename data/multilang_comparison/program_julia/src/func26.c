#include "program_julia.h" 
array_t* func26(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array110;
      if (pCounter > 0) {
         array110 = vars->data[--pCounter];
         array110->refC++;
         DEBUG_COPY(array110->id);
      } else {
         array110 = (array_t*)malloc(sizeof(array_t));
         array110->size = 590;
         array110->refC = 1;
         array110->id = 110;
         array110->data = (unsigned int*)malloc(array110->size*sizeof(unsigned int));
         memset(array110->data, 0, array110->size*sizeof(unsigned int));
         DEBUG_NEW(array110->id);
      }
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         for (int i = 0; i < array110->size; i++) {
            array110->data[i]--;
         }
         for (int i = 0; i < array110->size; i++) {
            if (array110->data[i] == 19) { 
               return array110;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array110;
      array_t* array111 = func36(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array111->id);
      free(params0.data);
      array111->refC--;
      if(array111->refC == 0) {
         free(array111->data);
         free(array111);
         DEBUG_FREE(array111->id);
      }
      array110->refC--;
      if(array110->refC == 0) {
         free(array110->data);
         free(array110);
         DEBUG_FREE(array110->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array112 = func32(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array112->id);
      free(params0.data);
      array112->refC--;
      if(array112->refC == 0) {
         free(array112->data);
         free(array112);
         DEBUG_FREE(array112->id);
      }
   }
   array_t* array113;
   if (pCounter > 0) {
      array113 = vars->data[--pCounter];
      array113->refC++;
      DEBUG_COPY(array113->id);
   } else {
      array113 = (array_t*)malloc(sizeof(array_t));
      array113->size = 4;
      array113->refC = 1;
      array113->id = 113;
      array113->data = (unsigned int*)malloc(array113->size*sizeof(unsigned int));
      memset(array113->data, 0, array113->size*sizeof(unsigned int));
      DEBUG_NEW(array113->id);
   }
   return array113;
}

