#include "program_c.h" 
array_t* func22(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array35;
   if (pCounter > 0) {
      array35 = vars->data[--pCounter];
      array35->refC++;
      DEBUG_COPY(array35->id);
   } else {
      array35 = (array_t*)malloc(sizeof(array_t));
      array35->size = 567;
      array35->refC = 1;
      array35->id = 35;
      array35->data = (unsigned int*)malloc(array35->size*sizeof(unsigned int));
      memset(array35->data, 0, array35->size*sizeof(unsigned int));
      DEBUG_NEW(array35->id);
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (50)/4 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(PATH0 & 1) {
         array_t* array36;
         if (pCounter > 0) {
            array36 = vars->data[--pCounter];
            array36->refC++;
            DEBUG_COPY(array36->id);
         } else {
            array36 = (array_t*)malloc(sizeof(array_t));
            array36->size = 856;
            array36->refC = 1;
            array36->id = 36;
            array36->data = (unsigned int*)malloc(array36->size*sizeof(unsigned int));
            memset(array36->data, 0, array36->size*sizeof(unsigned int));
            DEBUG_NEW(array36->id);
         }
         unsigned int loop13 = 0;
         unsigned int loopLimit13 = (50)/5 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            for (int i = 0; i < array36->size; i++) {
               array36->data[i]--;
            }
            for (int i = 0; i < array36->size; i++) {
               if (array36->data[i] == 86) { 
                  return array36;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array35;
         params0.data[1] = array36;
         array_t* array37 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array37->id);
         free(params0.data);
         array37->refC--;
         if(array37->refC == 0) {
            free(array37->data);
            free(array37);
            DEBUG_FREE(array37->id);
         }
         array36->refC--;
         if(array36->refC == 0) {
            free(array36->data);
            free(array36);
            DEBUG_FREE(array36->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array35;
         array_t* array38 = func34(&params0, loopsFactor);
         DEBUG_RETURN(array38->id);
         free(params0.data);
         array38->refC--;
         if(array38->refC == 0) {
            free(array38->data);
            free(array38);
            DEBUG_FREE(array38->id);
         }
      }
      array_t* array39;
      if (pCounter > 0) {
         array39 = vars->data[--pCounter];
         array39->refC++;
         DEBUG_COPY(array39->id);
      } else {
         array39 = (array_t*)malloc(sizeof(array_t));
         array39->size = 624;
         array39->refC = 1;
         array39->id = 39;
         array39->data = (unsigned int*)malloc(array39->size*sizeof(unsigned int));
         memset(array39->data, 0, array39->size*sizeof(unsigned int));
         DEBUG_NEW(array39->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array35;
      params0.data[1] = array39;
      array_t* array40 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array40->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array41;
         if (pCounter > 0) {
            array41 = vars->data[--pCounter];
            array41->refC++;
            DEBUG_COPY(array41->id);
         } else {
            array41 = (array_t*)malloc(sizeof(array_t));
            array41->size = 732;
            array41->refC = 1;
            array41->id = 41;
            array41->data = (unsigned int*)malloc(array41->size*sizeof(unsigned int));
            memset(array41->data, 0, array41->size*sizeof(unsigned int));
            DEBUG_NEW(array41->id);
         }
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (50)/5 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            for (int i = 0; i < array39->size; i++) {
               array39->data[i]--;
            }
            for (int i = 0; i < array41->size; i++) {
               if (array41->data[i] == 19) { 
                  return array41;
               }
            }
         }
         array41->refC--;
         if(array41->refC == 0) {
            free(array41->data);
            free(array41);
            DEBUG_FREE(array41->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array35;
         params1.data[1] = array39;
         params1.data[2] = array40;
         array_t* array42 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array42->id);
         free(params1.data);
         array42->refC--;
         if(array42->refC == 0) {
            free(array42->data);
            free(array42);
            DEBUG_FREE(array42->id);
         }
      }
      for (int i = 0; i < array39->size; i++) {
         if (array39->data[i] == 15) { 
            return array39;
         }
      }
      array40->refC--;
      if(array40->refC == 0) {
         free(array40->data);
         free(array40);
         DEBUG_FREE(array40->id);
      }
      array39->refC--;
      if(array39->refC == 0) {
         free(array39->data);
         free(array39);
         DEBUG_FREE(array39->id);
      }
   }
   for (int i = 0; i < array35->size; i++) {
      array35->data[i]--;
   }
   for (int i = 0; i < array35->size; i++) {
      if (array35->data[i] == 96) { 
         return array35;
      }
   }
   return array35;
}

