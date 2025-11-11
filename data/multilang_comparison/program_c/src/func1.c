#include "program_c.h" 
array_t* func1(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array193;
   if (pCounter > 0) {
      array193 = vars->data[--pCounter];
      array193->refC++;
      DEBUG_COPY(array193->id);
   } else {
      array193 = (array_t*)malloc(sizeof(array_t));
      array193->size = 462;
      array193->refC = 1;
      array193->id = 193;
      array193->data = (unsigned int*)malloc(array193->size*sizeof(unsigned int));
      memset(array193->data, 0, array193->size*sizeof(unsigned int));
      DEBUG_NEW(array193->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array193;
   array_t* array194 = func3(&params0, loopsFactor);
   DEBUG_RETURN(array194->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array197;
      if (pCounter > 0) {
         array197 = vars->data[--pCounter];
         array197->refC++;
         DEBUG_COPY(array197->id);
      } else {
         array197 = (array_t*)malloc(sizeof(array_t));
         array197->size = 951;
         array197->refC = 1;
         array197->id = 197;
         array197->data = (unsigned int*)malloc(array197->size*sizeof(unsigned int));
         memset(array197->data, 0, array197->size*sizeof(unsigned int));
         DEBUG_NEW(array197->id);
      }
      unsigned int loop57 = 0;
      unsigned int loopLimit57 = (50)/2 + 1;
      for(; loop57 < loopLimit57; loop57++) {
         for (int i = 0; i < array193->size; i++) {
            array193->data[i]--;
         }
         for (int i = 0; i < array194->size; i++) {
            if (array194->data[i] == 37) { 
               return array194;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array193;
      params1.data[1] = array194;
      params1.data[2] = array197;
      array_t* array198 = func10(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array198->id);
      free(params1.data);
      array198->refC--;
      if(array198->refC == 0) {
         free(array198->data);
         free(array198);
         DEBUG_FREE(array198->id);
      }
      array197->refC--;
      if(array197->refC == 0) {
         free(array197->data);
         free(array197);
         DEBUG_FREE(array197->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array193;
      params1.data[1] = array194;
      array_t* array199 = func4(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array199->id);
      free(params1.data);
      array199->refC--;
      if(array199->refC == 0) {
         free(array199->data);
         free(array199);
         DEBUG_FREE(array199->id);
      }
   }
   array193->refC--;
   if(array193->refC == 0) {
      free(array193->data);
      free(array193);
      DEBUG_FREE(array193->id);
   }
   return array194;
}

