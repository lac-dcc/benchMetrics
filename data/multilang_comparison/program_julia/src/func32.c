#include "program_julia.h" 
array_t* func32(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
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
   unsigned int loopLimit27 = (rand()%loopsFactor)/4 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      if(PATH0 & 1) {
         array_t* array88;
         if (pCounter > 0) {
            array88 = vars->data[--pCounter];
            array88->refC++;
            DEBUG_COPY(array88->id);
         } else {
            array88 = (array_t*)malloc(sizeof(array_t));
            array88->size = 668;
            array88->refC = 1;
            array88->id = 88;
            array88->data = (unsigned int*)malloc(array88->size*sizeof(unsigned int));
            memset(array88->data, 0, array88->size*sizeof(unsigned int));
            DEBUG_NEW(array88->id);
         }
         unsigned int loop28 = 0;
         unsigned int loopLimit28 = (rand()%loopsFactor)/5 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            for (int i = 0; i < array87->size; i++) {
               array87->data[i]--;
            }
            for (int i = 0; i < array88->size; i++) {
               if (array88->data[i] == 26) { 
                  return array88;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array87;
         params0.data[1] = array88;
         array_t* array89 = func46(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array89->id);
         free(params0.data);
         array89->refC--;
         if(array89->refC == 0) {
            free(array89->data);
            free(array89);
            DEBUG_FREE(array89->id);
         }
         array88->refC--;
         if(array88->refC == 0) {
            free(array88->data);
            free(array88);
            DEBUG_FREE(array88->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array87;
         array_t* array90 = func40(&params0, loopsFactor);
         DEBUG_RETURN(array90->id);
         free(params0.data);
         array90->refC--;
         if(array90->refC == 0) {
            free(array90->data);
            free(array90);
            DEBUG_FREE(array90->id);
         }
      }
      array_t* array91;
      if (pCounter > 0) {
         array91 = vars->data[--pCounter];
         array91->refC++;
         DEBUG_COPY(array91->id);
      } else {
         array91 = (array_t*)malloc(sizeof(array_t));
         array91->size = 684;
         array91->refC = 1;
         array91->id = 91;
         array91->data = (unsigned int*)malloc(array91->size*sizeof(unsigned int));
         memset(array91->data, 0, array91->size*sizeof(unsigned int));
         DEBUG_NEW(array91->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array87;
      params0.data[1] = array91;
      array_t* array92 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array92->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array93;
         if (pCounter > 0) {
            array93 = vars->data[--pCounter];
            array93->refC++;
            DEBUG_COPY(array93->id);
         } else {
            array93 = (array_t*)malloc(sizeof(array_t));
            array93->size = 936;
            array93->refC = 1;
            array93->id = 93;
            array93->data = (unsigned int*)malloc(array93->size*sizeof(unsigned int));
            memset(array93->data, 0, array93->size*sizeof(unsigned int));
            DEBUG_NEW(array93->id);
         }
         unsigned int loop29 = 0;
         unsigned int loopLimit29 = (rand()%loopsFactor)/5 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            for (int i = 0; i < array93->size; i++) {
               array93->data[i]--;
            }
            for (int i = 0; i < array91->size; i++) {
               if (array91->data[i] == 56) { 
                  return array91;
               }
            }
         }
         array93->refC--;
         if(array93->refC == 0) {
            free(array93->data);
            free(array93);
            DEBUG_FREE(array93->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array87;
         params1.data[1] = array91;
         params1.data[2] = array92;
         array_t* array94 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array94->id);
         free(params1.data);
         array94->refC--;
         if(array94->refC == 0) {
            free(array94->data);
            free(array94);
            DEBUG_FREE(array94->id);
         }
      }
      for (int i = 0; i < array92->size; i++) {
         if (array92->data[i] == 12) { 
            return array92;
         }
      }
      array92->refC--;
      if(array92->refC == 0) {
         free(array92->data);
         free(array92);
         DEBUG_FREE(array92->id);
      }
      array91->refC--;
      if(array91->refC == 0) {
         free(array91->data);
         free(array91);
         DEBUG_FREE(array91->id);
      }
   }
   for (int i = 0; i < array87->size; i++) {
      array87->data[i]--;
   }
   for (int i = 0; i < array87->size; i++) {
      if (array87->data[i] == 59) { 
         return array87;
      }
   }
   return array87;
}

