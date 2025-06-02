#include "fourth_example.h" 
array_t* func12(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array119;
   if (pCounter > 0) {
      array119 = vars->data[--pCounter];
      array119->refC++;
      DEBUG_COPY(array119->id);
   } else {
      array119 = (array_t*)malloc(sizeof(array_t));
      array119->size = 202;
      array119->refC = 1;
      array119->id = 119;
      array119->data = (unsigned int*)malloc(array119->size*sizeof(unsigned int));
      memset(array119->data, 0, array119->size*sizeof(unsigned int));
      DEBUG_NEW(array119->id);
   }
   for (int i = 0; i < array119->size; i++) {
      array119->data[i]++;
   }
   for (int i = 0; i < array119->size; i++) {
      if (array119->data[i] == 84) { 
         return array119;
      }
   }
   for (int i = 0; i < array119->size; i++) {
      array119->data[i]--;
   }
   array_t* array120;
   if (pCounter > 0) {
      array120 = vars->data[--pCounter];
      array120->refC++;
      DEBUG_COPY(array120->id);
   } else {
      array120 = (array_t*)malloc(sizeof(array_t));
      array120->size = 842;
      array120->refC = 1;
      array120->id = 120;
      array120->data = (unsigned int*)malloc(array120->size*sizeof(unsigned int));
      memset(array120->data, 0, array120->size*sizeof(unsigned int));
      DEBUG_NEW(array120->id);
   }
   if(PATH0 & 1) {
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/2 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         array_t* array121;
         if (pCounter > 0) {
            array121 = vars->data[--pCounter];
            array121->refC++;
            DEBUG_COPY(array121->id);
         } else {
            array121 = (array_t*)malloc(sizeof(array_t));
            array121->size = 868;
            array121->refC = 1;
            array121->id = 121;
            array121->data = (unsigned int*)malloc(array121->size*sizeof(unsigned int));
            memset(array121->data, 0, array121->size*sizeof(unsigned int));
            DEBUG_NEW(array121->id);
         }
         for (int i = 0; i < array119->size; i++) {
            array119->data[i]--;
         }
         for (int i = 0; i < array120->size; i++) {
            if (array120->data[i] == 72) { 
               return array120;
            }
         }
         array121->refC--;
         if(array121->refC == 0) {
            free(array121->data);
            free(array121);
            DEBUG_FREE(array121->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array119;
      params0.data[1] = array120;
      array_t* array122 = func20(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array122->id);
      free(params0.data);
      array122->refC--;
      if(array122->refC == 0) {
         free(array122->data);
         free(array122);
         DEBUG_FREE(array122->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array119;
   params0.data[1] = array120;
   array_t* array123 = func17(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array123->id);
   free(params0.data);
   array123->refC--;
   if(array123->refC == 0) {
      free(array123->data);
      free(array123);
      DEBUG_FREE(array123->id);
   }
   array120->refC--;
   if(array120->refC == 0) {
      free(array120->data);
      free(array120);
      DEBUG_FREE(array120->id);
   }
   return array119;
}

