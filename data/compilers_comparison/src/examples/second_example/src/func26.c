#include "second_example.h" 
array_t* func26(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array142;
      if (pCounter > 0) {
         array142 = vars->data[--pCounter];
         array142->refC++;
         DEBUG_COPY(array142->id);
      } else {
         array142 = (array_t*)malloc(sizeof(array_t));
         array142->size = 500;
         array142->refC = 1;
         array142->id = 142;
         array142->data = (unsigned int*)malloc(array142->size*sizeof(unsigned int));
         memset(array142->data, 0, array142->size*sizeof(unsigned int));
         DEBUG_NEW(array142->id);
      }
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/3 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         for (int i = 0; i < array142->size; i++) {
            array142->data[i]--;
         }
         for (int i = 0; i < array142->size; i++) {
            if (array142->data[i] == 38) { 
               return array142;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array142;
      array_t* array143 = func36(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array143->id);
      free(params0.data);
      array143->refC--;
      if(array143->refC == 0) {
         free(array143->data);
         free(array143);
         DEBUG_FREE(array143->id);
      }
      array142->refC--;
      if(array142->refC == 0) {
         free(array142->data);
         free(array142);
         DEBUG_FREE(array142->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array144 = func32(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array144->id);
      free(params0.data);
      array144->refC--;
      if(array144->refC == 0) {
         free(array144->data);
         free(array144);
         DEBUG_FREE(array144->id);
      }
   }
   array_t* array145;
   if (pCounter > 0) {
      array145 = vars->data[--pCounter];
      array145->refC++;
      DEBUG_COPY(array145->id);
   } else {
      array145 = (array_t*)malloc(sizeof(array_t));
      array145->size = 339;
      array145->refC = 1;
      array145->id = 145;
      array145->data = (unsigned int*)malloc(array145->size*sizeof(unsigned int));
      memset(array145->data, 0, array145->size*sizeof(unsigned int));
      DEBUG_NEW(array145->id);
   }
   return array145;
}

