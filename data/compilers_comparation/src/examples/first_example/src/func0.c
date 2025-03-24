#include "first_example.h" 
array_t* func0(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = (array_t*)malloc(sizeof(array_t));
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = (unsigned int*)malloc(array1->size*sizeof(unsigned int));
      memset(array1->data, 0, array1->size*sizeof(unsigned int));
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         array_t* array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = (array_t*)malloc(sizeof(array_t));
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = (unsigned int*)malloc(array2->size*sizeof(unsigned int));
            memset(array2->data, 0, array2->size*sizeof(unsigned int));
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
               array2->data[i]--;
            }
            for (int i = 0; i < array2->size; i++) {
               if (array2->data[i] == 62) { 
                  return array2;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array1;
         params0.data[1] = array2;
         array_t* array3 = func10(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array3->id);
         free(params0.data);
         array3->refC--;
         if(array3->refC == 0) {
            free(array3->data);
            free(array3);
            DEBUG_FREE(array3->id);
         }
         array2->refC--;
         if(array2->refC == 0) {
            free(array2->data);
            free(array2);
            DEBUG_FREE(array2->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array1;
         array_t* array109 = func4(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array109->id);
         free(params0.data);
         array109->refC--;
         if(array109->refC == 0) {
            free(array109->data);
            free(array109);
            DEBUG_FREE(array109->id);
         }
      }
      array_t* array119;
      if (pCounter > 0) {
         array119 = vars->data[--pCounter];
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = (array_t*)malloc(sizeof(array_t));
         array119->size = 326;
         array119->refC = 1;
         array119->id = 119;
         array119->data = (unsigned int*)malloc(array119->size*sizeof(unsigned int));
         memset(array119->data, 0, array119->size*sizeof(unsigned int));
         DEBUG_NEW(array119->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array1;
      params0.data[1] = array119;
      array_t* array120 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array120->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array123;
         if (pCounter > 0) {
            array123 = vars->data[--pCounter];
            array123->refC++;
            DEBUG_COPY(array123->id);
         } else {
            array123 = (array_t*)malloc(sizeof(array_t));
            array123->size = 872;
            array123->refC = 1;
            array123->id = 123;
            array123->data = (unsigned int*)malloc(array123->size*sizeof(unsigned int));
            memset(array123->data, 0, array123->size*sizeof(unsigned int));
            DEBUG_NEW(array123->id);
         }
         unsigned int loop37 = 0;
         unsigned int loopLimit37 = (rand()%loopsFactor)/3 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            for (int i = 0; i < array1->size; i++) {
               array1->data[i]--;
            }
            for (int i = 0; i < array120->size; i++) {
               if (array120->data[i] == 98) { 
                  return array120;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array119;
         params1.data[2] = array120;
         params1.data[3] = array123;
         array_t* array124 = func18(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array124->id);
         free(params1.data);
         array124->refC--;
         if(array124->refC == 0) {
            free(array124->data);
            free(array124);
            DEBUG_FREE(array124->id);
         }
         array123->refC--;
         if(array123->refC == 0) {
            free(array123->data);
            free(array123);
            DEBUG_FREE(array123->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array119;
         params1.data[2] = array120;
         array_t* array146 = func14(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array146->id);
         free(params1.data);
         array146->refC--;
         if(array146->refC == 0) {
            free(array146->data);
            free(array146);
            DEBUG_FREE(array146->id);
         }
      }
      for (int i = 0; i < array120->size; i++) {
         if (array120->data[i] == 32) { 
            return array120;
         }
      }
      array120->refC--;
      if(array120->refC == 0) {
         free(array120->data);
         free(array120);
         DEBUG_FREE(array120->id);
      }
      array119->refC--;
      if(array119->refC == 0) {
         free(array119->data);
         free(array119);
         DEBUG_FREE(array119->id);
      }
   }
   return array1;
}

