#include "program.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array102;
   if (pCounter > 0) {
      array102 = vars->data[--pCounter];
      array102->refC++;
      DEBUG_COPY(array102->id);
   } else {
      array102 = (array_t*)malloc(sizeof(array_t));
      array102->size = 984;
      array102->refC = 1;
      array102->id = 102;
      array102->data = (unsigned int*)malloc(array102->size*sizeof(unsigned int));
      memset(array102->data, 0, array102->size*sizeof(unsigned int));
      DEBUG_NEW(array102->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array102;
   array_t* array103 = func17(&params0, loopsFactor);
   DEBUG_RETURN(array103->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array106;
      if (pCounter > 0) {
         array106 = vars->data[--pCounter];
         array106->refC++;
         DEBUG_COPY(array106->id);
      } else {
         array106 = (array_t*)malloc(sizeof(array_t));
         array106->size = 672;
         array106->refC = 1;
         array106->id = 106;
         array106->data = (unsigned int*)malloc(array106->size*sizeof(unsigned int));
         memset(array106->data, 0, array106->size*sizeof(unsigned int));
         DEBUG_NEW(array106->id);
      }
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/3 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         for (int i = 0; i < array106->size; i++) {
            array106->data[i]--;
         }
         for (int i = 0; i < array103->size; i++) {
            if (array103->data[i] == 85) { 
               return array103;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array102;
      params1.data[1] = array103;
      params1.data[2] = array106;
      array_t* array107 = func28(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array107->id);
      free(params1.data);
      array107->refC--;
      if(array107->refC == 0) {
         free(array107->data);
         free(array107);
         DEBUG_FREE(array107->id);
      }
      array106->refC--;
      if(array106->refC == 0) {
         free(array106->data);
         free(array106);
         DEBUG_FREE(array106->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array102;
      params1.data[1] = array103;
      array_t* array108 = func22(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array108->id);
      free(params1.data);
      array108->refC--;
      if(array108->refC == 0) {
         free(array108->data);
         free(array108);
         DEBUG_FREE(array108->id);
      }
   }
   array103->refC--;
   if(array103->refC == 0) {
      free(array103->data);
      free(array103);
      DEBUG_FREE(array103->id);
   }
   return array102;
}

