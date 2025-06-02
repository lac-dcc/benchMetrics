#include "second_example.h" 
array_t* func19(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (rand()%loopsFactor)/3 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      if(PATH0 & 1) {
         array_t* array190;
         if (pCounter > 0) {
            array190 = vars->data[--pCounter];
            array190->refC++;
            DEBUG_COPY(array190->id);
         } else {
            array190 = (array_t*)malloc(sizeof(array_t));
            array190->size = 173;
            array190->refC = 1;
            array190->id = 190;
            array190->data = (unsigned int*)malloc(array190->size*sizeof(unsigned int));
            memset(array190->data, 0, array190->size*sizeof(unsigned int));
            DEBUG_NEW(array190->id);
         }
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (rand()%loopsFactor)/4 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            for (int i = 0; i < array190->size; i++) {
               array190->data[i]--;
            }
            for (int i = 0; i < array190->size; i++) {
               if (array190->data[i] == 62) { 
                  return array190;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array190;
         array_t* array191 = func36(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array191->id);
         free(params0.data);
         array191->refC--;
         if(array191->refC == 0) {
            free(array191->data);
            free(array191);
            DEBUG_FREE(array191->id);
         }
         array190->refC--;
         if(array190->refC == 0) {
            free(array190->data);
            free(array190);
            DEBUG_FREE(array190->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array192 = func32(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array192->id);
         free(params0.data);
         array192->refC--;
         if(array192->refC == 0) {
            free(array192->data);
            free(array192);
            DEBUG_FREE(array192->id);
         }
      }
      array_t* array193;
      if (pCounter > 0) {
         array193 = vars->data[--pCounter];
         array193->refC++;
         DEBUG_COPY(array193->id);
      } else {
         array193 = (array_t*)malloc(sizeof(array_t));
         array193->size = 57;
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
      array_t* array194 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array194->id);
      free(params0.data);
      if(PATH0 & 2) {
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
         unsigned int loop58 = 0;
         unsigned int loopLimit58 = (rand()%loopsFactor)/4 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            for (int i = 0; i < array194->size; i++) {
               array194->data[i]--;
            }
            for (int i = 0; i < array195->size; i++) {
               if (array195->data[i] == 47) { 
                  return array195;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array193;
         params1.data[1] = array194;
         params1.data[2] = array195;
         array_t* array196 = func42(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array196->id);
         free(params1.data);
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
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array193;
         params1.data[1] = array194;
         array_t* array197 = func34(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array197->id);
         free(params1.data);
         array197->refC--;
         if(array197->refC == 0) {
            free(array197->data);
            free(array197);
            DEBUG_FREE(array197->id);
         }
      }
      for (int i = 0; i < array193->size; i++) {
         if (array193->data[i] == 54) { 
            return array193;
         }
      }
      array194->refC--;
      if(array194->refC == 0) {
         free(array194->data);
         free(array194);
         DEBUG_FREE(array194->id);
      }
      array193->refC--;
      if(array193->refC == 0) {
         free(array193->data);
         free(array193);
         DEBUG_FREE(array193->id);
      }
   }
   array_t* array198;
   if (pCounter > 0) {
      array198 = vars->data[--pCounter];
      array198->refC++;
      DEBUG_COPY(array198->id);
   } else {
      array198 = (array_t*)malloc(sizeof(array_t));
      array198->size = 30;
      array198->refC = 1;
      array198->id = 198;
      array198->data = (unsigned int*)malloc(array198->size*sizeof(unsigned int));
      memset(array198->data, 0, array198->size*sizeof(unsigned int));
      DEBUG_NEW(array198->id);
   }
   return array198;
}

