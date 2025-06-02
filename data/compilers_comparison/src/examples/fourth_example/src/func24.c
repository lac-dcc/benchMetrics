#include "fourth_example.h" 
array_t* func24(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array36;
   if (pCounter > 0) {
      array36 = vars->data[--pCounter];
      array36->refC++;
      DEBUG_COPY(array36->id);
   } else {
      array36 = (array_t*)malloc(sizeof(array_t));
      array36->size = 927;
      array36->refC = 1;
      array36->id = 36;
      array36->data = (unsigned int*)malloc(array36->size*sizeof(unsigned int));
      memset(array36->data, 0, array36->size*sizeof(unsigned int));
      DEBUG_NEW(array36->id);
   }
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array36->size; i++) {
            array36->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array36;
      array_t* array37 = func31(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array37->id);
      free(params0.data);
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         for (int i = 0; i < array37->size; i++) {
            array37->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array36;
      params1.data[1] = array37;
      array_t* array38 = func28(&params1, loopsFactor);
      DEBUG_RETURN(array38->id);
      free(params1.data);
      array38->refC--;
      if(array38->refC == 0) {
         free(array38->data);
         free(array38);
         DEBUG_FREE(array38->id);
      }
      array37->refC--;
      if(array37->refC == 0) {
         free(array37->data);
         free(array37);
         DEBUG_FREE(array37->id);
      }
   }
   else {
      array_t* array40;
      if (pCounter > 0) {
         array40 = vars->data[--pCounter];
         array40->refC++;
         DEBUG_COPY(array40->id);
      } else {
         array40 = (array_t*)malloc(sizeof(array_t));
         array40->size = 503;
         array40->refC = 1;
         array40->id = 40;
         array40->data = (unsigned int*)malloc(array40->size*sizeof(unsigned int));
         memset(array40->data, 0, array40->size*sizeof(unsigned int));
         DEBUG_NEW(array40->id);
      }
      for (int i = 0; i < array40->size; i++) {
         array40->data[i]++;
      }
      for (int i = 0; i < array36->size; i++) {
         if (array36->data[i] == 68) { 
            return array36;
         }
      }
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array36;
      params0.data[1] = array40;
      array_t* array41 = func31(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array41->id);
      free(params0.data);
      array41->refC--;
      if(array41->refC == 0) {
         free(array41->data);
         free(array41);
         DEBUG_FREE(array41->id);
      }
      array40->refC--;
      if(array40->refC == 0) {
         free(array40->data);
         free(array40);
         DEBUG_FREE(array40->id);
      }
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]++;
      }
      array_t* array42;
      if (pCounter > 0) {
         array42 = vars->data[--pCounter];
         array42->refC++;
         DEBUG_COPY(array42->id);
      } else {
         array42 = (array_t*)malloc(sizeof(array_t));
         array42->size = 796;
         array42->refC = 1;
         array42->id = 42;
         array42->data = (unsigned int*)malloc(array42->size*sizeof(unsigned int));
         memset(array42->data, 0, array42->size*sizeof(unsigned int));
         DEBUG_NEW(array42->id);
      }
      for (int i = 0; i < array42->size; i++) {
         array42->data[i]++;
      }
      for (int i = 0; i < array36->size; i++) {
         if (array36->data[i] == 45) { 
            return array36;
         }
      }
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array36;
      params0.data[1] = array42;
      array_t* array43 = func31(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array43->id);
      free(params0.data);
      array43->refC--;
      if(array43->refC == 0) {
         free(array43->data);
         free(array43);
         DEBUG_FREE(array43->id);
      }
      array42->refC--;
      if(array42->refC == 0) {
         free(array42->data);
         free(array42);
         DEBUG_FREE(array42->id);
      }
   }
   return array36;
}

