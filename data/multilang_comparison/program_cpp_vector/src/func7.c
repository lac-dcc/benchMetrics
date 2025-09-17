#include "program_cpp_vector.h" 
array_t* func7(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      if(PATH0 & 1) {
         array_t* array192;
         if (pCounter > 0) {
            array192 = vars->data[--pCounter];
            array192->refC++;
            DEBUG_COPY(array192->id);
         } else {
            array192 = (array_t*)malloc(sizeof(array_t));
            array192->size = 462;
            array192->refC = 1;
            array192->id = 192;
            array192->data = (unsigned int*)malloc(array192->size*sizeof(unsigned int));
            memset(array192->data, 0, array192->size*sizeof(unsigned int));
            DEBUG_NEW(array192->id);
         }
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (rand()%loopsFactor)/3 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            for (int i = 0; i < array192->size; i++) {
               array192->data[i]--;
            }
            for (int i = 0; i < array192->size; i++) {
               if (array192->data[i] == 92) { 
                  return array192;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array192;
         array_t* array193 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array193->id);
         free(params0.data);
         array193->refC--;
         if(array193->refC == 0) {
            free(array193->data);
            free(array193);
            DEBUG_FREE(array193->id);
         }
         array192->refC--;
         if(array192->refC == 0) {
            free(array192->data);
            free(array192);
            DEBUG_FREE(array192->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array194 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array194->id);
         free(params0.data);
         array194->refC--;
         if(array194->refC == 0) {
            free(array194->data);
            free(array194);
            DEBUG_FREE(array194->id);
         }
      }
      array_t* array195;
      if (pCounter > 0) {
         array195 = vars->data[--pCounter];
         array195->refC++;
         DEBUG_COPY(array195->id);
      } else {
         array195 = (array_t*)malloc(sizeof(array_t));
         array195->size = 157;
         array195->refC = 1;
         array195->id = 195;
         array195->data = (unsigned int*)malloc(array195->size*sizeof(unsigned int));
         memset(array195->data, 0, array195->size*sizeof(unsigned int));
         DEBUG_NEW(array195->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array195;
      array_t* array196 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array196->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array197;
         if (pCounter > 0) {
            array197 = vars->data[--pCounter];
            array197->refC++;
            DEBUG_COPY(array197->id);
         } else {
            array197 = (array_t*)malloc(sizeof(array_t));
            array197->size = 947;
            array197->refC = 1;
            array197->id = 197;
            array197->data = (unsigned int*)malloc(array197->size*sizeof(unsigned int));
            memset(array197->data, 0, array197->size*sizeof(unsigned int));
            DEBUG_NEW(array197->id);
         }
         unsigned int loop58 = 0;
         unsigned int loopLimit58 = (rand()%loopsFactor)/3 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            for (int i = 0; i < array196->size; i++) {
               array196->data[i]--;
            }
            for (int i = 0; i < array195->size; i++) {
               if (array195->data[i] == 21) { 
                  return array195;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array195;
         params1.data[1] = array196;
         params1.data[2] = array197;
         array_t* array198 = func28(&params1, get_path(), loopsFactor);
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
         params1.data[0] = array195;
         params1.data[1] = array196;
         array_t* array199 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array199->id);
         free(params1.data);
         array199->refC--;
         if(array199->refC == 0) {
            free(array199->data);
            free(array199);
            DEBUG_FREE(array199->id);
         }
      }
      for (int i = 0; i < array195->size; i++) {
         if (array195->data[i] == 25) { 
            return array195;
         }
      }
      array196->refC--;
      if(array196->refC == 0) {
         free(array196->data);
         free(array196);
         DEBUG_FREE(array196->id);
      }
      array195->refC--;
      if(array195->refC == 0) {
         free(array195->data);
         free(array195);
         DEBUG_FREE(array195->id);
      }
   }
   array_t* array200;
   if (pCounter > 0) {
      array200 = vars->data[--pCounter];
      array200->refC++;
      DEBUG_COPY(array200->id);
   } else {
      array200 = (array_t*)malloc(sizeof(array_t));
      array200->size = 81;
      array200->refC = 1;
      array200->id = 200;
      array200->data = (unsigned int*)malloc(array200->size*sizeof(unsigned int));
      memset(array200->data, 0, array200->size*sizeof(unsigned int));
      DEBUG_NEW(array200->id);
   }
   return array200;
}

