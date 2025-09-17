#include "program_c.h" 
array_t* func39(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array82;
   if (pCounter > 0) {
      array82 = vars->data[--pCounter];
      array82->refC++;
      DEBUG_COPY(array82->id);
   } else {
      array82 = (array_t*)malloc(sizeof(array_t));
      array82->size = 71;
      array82->refC = 1;
      array82->id = 82;
      array82->data = (unsigned int*)malloc(array82->size*sizeof(unsigned int));
      memset(array82->data, 0, array82->size*sizeof(unsigned int));
      DEBUG_NEW(array82->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array82;
   array_t* array83 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array83->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array84;
      if (pCounter > 0) {
         array84 = vars->data[--pCounter];
         array84->refC++;
         DEBUG_COPY(array84->id);
      } else {
         array84 = (array_t*)malloc(sizeof(array_t));
         array84->size = 881;
         array84->refC = 1;
         array84->id = 84;
         array84->data = (unsigned int*)malloc(array84->size*sizeof(unsigned int));
         memset(array84->data, 0, array84->size*sizeof(unsigned int));
         DEBUG_NEW(array84->id);
      }
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/4 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         for (int i = 0; i < array83->size; i++) {
            array83->data[i]--;
         }
         for (int i = 0; i < array83->size; i++) {
            if (array83->data[i] == 94) { 
               return array83;
            }
         }
      }
      array84->refC--;
      if(array84->refC == 0) {
         free(array84->data);
         free(array84);
         DEBUG_FREE(array84->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array82;
      params1.data[1] = array83;
      array_t* array85 = func50(&params1, loopsFactor);
      DEBUG_RETURN(array85->id);
      free(params1.data);
      array85->refC--;
      if(array85->refC == 0) {
         free(array85->data);
         free(array85);
         DEBUG_FREE(array85->id);
      }
   }
   array82->refC--;
   if(array82->refC == 0) {
      free(array82->data);
      free(array82);
      DEBUG_FREE(array82->id);
   }
   return array83;
}

