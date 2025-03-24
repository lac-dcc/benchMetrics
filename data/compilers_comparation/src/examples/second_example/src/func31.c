#include "second_example.h" 
array_t* func31(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array74;
   if (pCounter > 0) {
      array74 = vars->data[--pCounter];
      array74->refC++;
      DEBUG_COPY(array74->id);
   } else {
      array74 = (array_t*)malloc(sizeof(array_t));
      array74->size = 305;
      array74->refC = 1;
      array74->id = 74;
      array74->data = (unsigned int*)malloc(array74->size*sizeof(unsigned int));
      memset(array74->data, 0, array74->size*sizeof(unsigned int));
      DEBUG_NEW(array74->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array74;
   array_t* array75 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array75->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array78;
      if (pCounter > 0) {
         array78 = vars->data[--pCounter];
         array78->refC++;
         DEBUG_COPY(array78->id);
      } else {
         array78 = (array_t*)malloc(sizeof(array_t));
         array78->size = 637;
         array78->refC = 1;
         array78->id = 78;
         array78->data = (unsigned int*)malloc(array78->size*sizeof(unsigned int));
         memset(array78->data, 0, array78->size*sizeof(unsigned int));
         DEBUG_NEW(array78->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/4 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array74->size; i++) {
            array74->data[i]--;
         }
         for (int i = 0; i < array78->size; i++) {
            if (array78->data[i] == 0) { 
               return array78;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array74;
      params1.data[1] = array75;
      params1.data[2] = array78;
      array_t* array79 = func46(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array79->id);
      free(params1.data);
      array79->refC--;
      if(array79->refC == 0) {
         free(array79->data);
         free(array79);
         DEBUG_FREE(array79->id);
      }
      array78->refC--;
      if(array78->refC == 0) {
         free(array78->data);
         free(array78);
         DEBUG_FREE(array78->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array74;
      params1.data[1] = array75;
      array_t* array80 = func40(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array80->id);
      free(params1.data);
      array80->refC--;
      if(array80->refC == 0) {
         free(array80->data);
         free(array80);
         DEBUG_FREE(array80->id);
      }
   }
   array75->refC--;
   if(array75->refC == 0) {
      free(array75->data);
      free(array75);
      DEBUG_FREE(array75->id);
   }
   return array74;
}

