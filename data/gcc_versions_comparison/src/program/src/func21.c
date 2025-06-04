#include "program.h" 
array_t* func21(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array141;
   if (pCounter > 0) {
      array141 = vars->data[--pCounter];
      array141->refC++;
      DEBUG_COPY(array141->id);
   } else {
      array141 = (array_t*)malloc(sizeof(array_t));
      array141->size = 43;
      array141->refC = 1;
      array141->id = 141;
      array141->data = (unsigned int*)malloc(array141->size*sizeof(unsigned int));
      memset(array141->data, 0, array141->size*sizeof(unsigned int));
      DEBUG_NEW(array141->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array141;
   array_t* array142 = func23(&params0, loopsFactor);
   DEBUG_RETURN(array142->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array143;
      if (pCounter > 0) {
         array143 = vars->data[--pCounter];
         array143->refC++;
         DEBUG_COPY(array143->id);
      } else {
         array143 = (array_t*)malloc(sizeof(array_t));
         array143->size = 428;
         array143->refC = 1;
         array143->id = 143;
         array143->data = (unsigned int*)malloc(array143->size*sizeof(unsigned int));
         memset(array143->data, 0, array143->size*sizeof(unsigned int));
         DEBUG_NEW(array143->id);
      }
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/3 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         for (int i = 0; i < array141->size; i++) {
            array141->data[i]--;
         }
         for (int i = 0; i < array143->size; i++) {
            if (array143->data[i] == 81) { 
               return array143;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array141;
      params1.data[1] = array142;
      params1.data[2] = array143;
      array_t* array144 = func36(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array144->id);
      free(params1.data);
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
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array141;
      params1.data[1] = array142;
      array_t* array145 = func32(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array145->id);
      free(params1.data);
      array145->refC--;
      if(array145->refC == 0) {
         free(array145->data);
         free(array145);
         DEBUG_FREE(array145->id);
      }
   }
   array141->refC--;
   if(array141->refC == 0) {
      free(array141->data);
      free(array141);
      DEBUG_FREE(array141->id);
   }
   return array142;
}

