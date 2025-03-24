#include "fourth_example.h" 
array_t* func16(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array139;
   if (pCounter > 0) {
      array139 = vars->data[--pCounter];
      array139->refC++;
      DEBUG_COPY(array139->id);
   } else {
      array139 = (array_t*)malloc(sizeof(array_t));
      array139->size = 2;
      array139->refC = 1;
      array139->id = 139;
      array139->data = (unsigned int*)malloc(array139->size*sizeof(unsigned int));
      memset(array139->data, 0, array139->size*sizeof(unsigned int));
      DEBUG_NEW(array139->id);
   }
   unsigned int loop54 = 0;
   unsigned int loopLimit54 = (rand()%loopsFactor)/2 + 1;
   for(; loop54 < loopLimit54; loop54++) {
      for (int i = 0; i < array139->size; i++) {
         array139->data[i]--;
      }
   }
   array_t* array140;
   if (pCounter > 0) {
      array140 = vars->data[--pCounter];
      array140->refC++;
      DEBUG_COPY(array140->id);
   } else {
      array140 = (array_t*)malloc(sizeof(array_t));
      array140->size = 403;
      array140->refC = 1;
      array140->id = 140;
      array140->data = (unsigned int*)malloc(array140->size*sizeof(unsigned int));
      memset(array140->data, 0, array140->size*sizeof(unsigned int));
      DEBUG_NEW(array140->id);
   }
   if(PATH0 & 1) {
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         array_t* array141;
         if (pCounter > 0) {
            array141 = vars->data[--pCounter];
            array141->refC++;
            DEBUG_COPY(array141->id);
         } else {
            array141 = (array_t*)malloc(sizeof(array_t));
            array141->size = 500;
            array141->refC = 1;
            array141->id = 141;
            array141->data = (unsigned int*)malloc(array141->size*sizeof(unsigned int));
            memset(array141->data, 0, array141->size*sizeof(unsigned int));
            DEBUG_NEW(array141->id);
         }
         for (int i = 0; i < array141->size; i++) {
            array141->data[i]--;
         }
         for (int i = 0; i < array141->size; i++) {
            if (array141->data[i] == 38) { 
               return array141;
            }
         }
         array141->refC--;
         if(array141->refC == 0) {
            free(array141->data);
            free(array141);
            DEBUG_FREE(array141->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array139;
      params0.data[1] = array140;
      array_t* array142 = func25(&params0, loopsFactor);
      DEBUG_RETURN(array142->id);
      free(params0.data);
      array142->refC--;
      if(array142->refC == 0) {
         free(array142->data);
         free(array142);
         DEBUG_FREE(array142->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array139;
   params0.data[1] = array140;
   array_t* array143 = func22(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array143->id);
   free(params0.data);
   unsigned int loop56 = 0;
   unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      for (int i = 0; i < array140->size; i++) {
         array140->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array139;
   params1.data[1] = array140;
   params1.data[2] = array143;
   array_t* array144 = func19(&params1, rng(), loopsFactor);
   DEBUG_RETURN(array144->id);
   free(params1.data);
   for (int i = 0; i < array144->size; i++) {
      if (array144->data[i] == 4) { 
         return array144;
      }
   }
   array144->refC--;
   if(array144->refC == 0) {
      free(array144->data);
      free(array144);
      DEBUG_FREE(array144->id);
   }
   array143->refC--;
   if(array143->refC == 0) {
      free(array143->data);
      free(array143);
      DEBUG_FREE(array143->id);
   }
   array139->refC--;
   if(array139->refC == 0) {
      free(array139->data);
      free(array139);
      DEBUG_FREE(array139->id);
   }
   return array140;
}

