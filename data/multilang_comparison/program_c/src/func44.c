#include "program_c.h" 
array_t* func44(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32->refC++;
         DEBUG_COPY(array32->id);
      } else {
         array32 = (array_t*)malloc(sizeof(array_t));
         array32->size = 440;
         array32->refC = 1;
         array32->id = 32;
         array32->data = (unsigned int*)malloc(array32->size*sizeof(unsigned int));
         memset(array32->data, 0, array32->size*sizeof(unsigned int));
         DEBUG_NEW(array32->id);
      }
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/4 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         for (int i = 0; i < array32->size; i++) {
            array32->data[i]--;
         }
         for (int i = 0; i < array32->size; i++) {
            if (array32->data[i] == 17) { 
               return array32;
            }
         }
      }
      array32->refC--;
      if(array32->refC == 0) {
         free(array32->data);
         free(array32);
         DEBUG_FREE(array32->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array33 = func50(&params0, loopsFactor);
      DEBUG_RETURN(array33->id);
      free(params0.data);
      array33->refC--;
      if(array33->refC == 0) {
         free(array33->data);
         free(array33);
         DEBUG_FREE(array33->id);
      }
   }
   array_t* array34;
   if (pCounter > 0) {
      array34 = vars->data[--pCounter];
      array34->refC++;
      DEBUG_COPY(array34->id);
   } else {
      array34 = (array_t*)malloc(sizeof(array_t));
      array34->size = 481;
      array34->refC = 1;
      array34->id = 34;
      array34->data = (unsigned int*)malloc(array34->size*sizeof(unsigned int));
      memset(array34->data, 0, array34->size*sizeof(unsigned int));
      DEBUG_NEW(array34->id);
   }
   return array34;
}

