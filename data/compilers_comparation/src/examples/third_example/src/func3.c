#include "third_example.h" 
array_t* func3(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array140;
   if (pCounter > 0) {
      array140 = vars->data[--pCounter];
      array140->refC++;
      DEBUG_COPY(array140->id);
   } else {
      array140 = (array_t*)malloc(sizeof(array_t));
      array140->size = 500;
      array140->refC = 1;
      array140->id = 140;
      array140->data = (unsigned int*)malloc(array140->size*sizeof(unsigned int));
      memset(array140->data, 0, array140->size*sizeof(unsigned int));
      DEBUG_NEW(array140->id);
   }
   for (int i = 0; i < array140->size; i++) {
      array140->data[i]++;
   }
   for (int i = 0; i < array140->size; i++) {
      if (array140->data[i] == 38) { 
         return array140;
      }
   }
   for (int i = 0; i < array140->size; i++) {
      array140->data[i]--;
   }
   array_t* array141;
   if (pCounter > 0) {
      array141 = vars->data[--pCounter];
      array141->refC++;
      DEBUG_COPY(array141->id);
   } else {
      array141 = (array_t*)malloc(sizeof(array_t));
      array141->size = 151;
      array141->refC = 1;
      array141->id = 141;
      array141->data = (unsigned int*)malloc(array141->size*sizeof(unsigned int));
      memset(array141->data, 0, array141->size*sizeof(unsigned int));
      DEBUG_NEW(array141->id);
   }
   if(PATH0 & 1) {
      unsigned int loop56 = 0;
      unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         array_t* array142;
         if (pCounter > 0) {
            array142 = vars->data[--pCounter];
            array142->refC++;
            DEBUG_COPY(array142->id);
         } else {
            array142 = (array_t*)malloc(sizeof(array_t));
            array142->size = 535;
            array142->refC = 1;
            array142->id = 142;
            array142->data = (unsigned int*)malloc(array142->size*sizeof(unsigned int));
            memset(array142->data, 0, array142->size*sizeof(unsigned int));
            DEBUG_NEW(array142->id);
         }
         for (int i = 0; i < array142->size; i++) {
            array142->data[i]--;
         }
         for (int i = 0; i < array141->size; i++) {
            if (array141->data[i] == 92) { 
               return array141;
            }
         }
         array142->refC--;
         if(array142->refC == 0) {
            free(array142->data);
            free(array142);
            DEBUG_FREE(array142->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array140;
      params0.data[1] = array141;
      array_t* array143 = func11(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array143->id);
      free(params0.data);
      array143->refC--;
      if(array143->refC == 0) {
         free(array143->data);
         free(array143);
         DEBUG_FREE(array143->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array140;
   params0.data[1] = array141;
   array_t* array144 = func8(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array144->id);
   free(params0.data);
   array144->refC--;
   if(array144->refC == 0) {
      free(array144->data);
      free(array144);
      DEBUG_FREE(array144->id);
   }
   array140->refC--;
   if(array140->refC == 0) {
      free(array140->data);
      free(array140);
      DEBUG_FREE(array140->id);
   }
   return array141;
}

