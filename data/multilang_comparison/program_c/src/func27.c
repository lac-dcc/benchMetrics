#include "program_c.h" 
array_t* func27(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array83;
   if (pCounter > 0) {
      array83 = vars->data[--pCounter];
      array83->refC++;
      DEBUG_COPY(array83->id);
   } else {
      array83 = (array_t*)malloc(sizeof(array_t));
      array83->size = 881;
      array83->refC = 1;
      array83->id = 83;
      array83->data = (unsigned int*)malloc(array83->size*sizeof(unsigned int));
      memset(array83->data, 0, array83->size*sizeof(unsigned int));
      DEBUG_NEW(array83->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array83;
   array_t* array84 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array84->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array87;
      if (pCounter > 0) {
         array87 = vars->data[--pCounter];
         array87->refC++;
         DEBUG_COPY(array87->id);
      } else {
         array87 = (array_t*)malloc(sizeof(array_t));
         array87->size = 813;
         array87->refC = 1;
         array87->id = 87;
         array87->data = (unsigned int*)malloc(array87->size*sizeof(unsigned int));
         memset(array87->data, 0, array87->size*sizeof(unsigned int));
         DEBUG_NEW(array87->id);
      }
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (50)/3 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         for (int i = 0; i < array83->size; i++) {
            array83->data[i]--;
         }
         for (int i = 0; i < array87->size; i++) {
            if (array87->data[i] == 95) { 
               return array87;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array83;
      params1.data[1] = array84;
      params1.data[2] = array87;
      array_t* array88 = func42(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array88->id);
      free(params1.data);
      array88->refC--;
      if(array88->refC == 0) {
         free(array88->data);
         free(array88);
         DEBUG_FREE(array88->id);
      }
      array87->refC--;
      if(array87->refC == 0) {
         free(array87->data);
         free(array87);
         DEBUG_FREE(array87->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array83;
      params1.data[1] = array84;
      array_t* array89 = func34(&params1, loopsFactor);
      DEBUG_RETURN(array89->id);
      free(params1.data);
      array89->refC--;
      if(array89->refC == 0) {
         free(array89->data);
         free(array89);
         DEBUG_FREE(array89->id);
      }
   }
   array84->refC--;
   if(array84->refC == 0) {
      free(array84->data);
      free(array84);
      DEBUG_FREE(array84->id);
   }
   return array83;
}

