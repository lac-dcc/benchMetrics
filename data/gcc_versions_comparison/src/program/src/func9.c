#include "program.h" 
array_t* func9(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array175;
   if (pCounter > 0) {
      array175 = vars->data[--pCounter];
      array175->refC++;
      DEBUG_COPY(array175->id);
   } else {
      array175 = (array_t*)malloc(sizeof(array_t));
      array175->size = 641;
      array175->refC = 1;
      array175->id = 175;
      array175->data = (unsigned int*)malloc(array175->size*sizeof(unsigned int));
      memset(array175->data, 0, array175->size*sizeof(unsigned int));
      DEBUG_NEW(array175->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array175;
   array_t* array176 = func15(&params0, loopsFactor);
   DEBUG_RETURN(array176->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array179;
      if (pCounter > 0) {
         array179 = vars->data[--pCounter];
         array179->refC++;
         DEBUG_COPY(array179->id);
      } else {
         array179 = (array_t*)malloc(sizeof(array_t));
         array179->size = 260;
         array179->refC = 1;
         array179->id = 179;
         array179->data = (unsigned int*)malloc(array179->size*sizeof(unsigned int));
         memset(array179->data, 0, array179->size*sizeof(unsigned int));
         DEBUG_NEW(array179->id);
      }
      unsigned int loop52 = 0;
      unsigned int loopLimit52 = (rand()%loopsFactor)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         for (int i = 0; i < array176->size; i++) {
            array176->data[i]--;
         }
         for (int i = 0; i < array179->size; i++) {
            if (array179->data[i] == 5) { 
               return array179;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array175;
      params1.data[1] = array176;
      params1.data[2] = array179;
      array_t* array180 = func24(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array180->id);
      free(params1.data);
      array180->refC--;
      if(array180->refC == 0) {
         free(array180->data);
         free(array180);
         DEBUG_FREE(array180->id);
      }
      array179->refC--;
      if(array179->refC == 0) {
         free(array179->data);
         free(array179);
         DEBUG_FREE(array179->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array175;
      params1.data[1] = array176;
      array_t* array181 = func16(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array181->id);
      free(params1.data);
      array181->refC--;
      if(array181->refC == 0) {
         free(array181->data);
         free(array181);
         DEBUG_FREE(array181->id);
      }
   }
   array175->refC--;
   if(array175->refC == 0) {
      free(array175->data);
      free(array175);
      DEBUG_FREE(array175->id);
   }
   return array176;
}

