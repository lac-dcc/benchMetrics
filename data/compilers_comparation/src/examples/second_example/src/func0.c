#include "second_example.h" 
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
         array_t* array173 = func4(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array173->id);
         free(params0.data);
         array173->refC--;
         if(array173->refC == 0) {
            free(array173->data);
            free(array173);
            DEBUG_FREE(array173->id);
         }
      }
      array_t* array183;
      if (pCounter > 0) {
         array183 = vars->data[--pCounter];
         array183->refC++;
         DEBUG_COPY(array183->id);
      } else {
         array183 = (array_t*)malloc(sizeof(array_t));
         array183->size = 757;
         array183->refC = 1;
         array183->id = 183;
         array183->data = (unsigned int*)malloc(array183->size*sizeof(unsigned int));
         memset(array183->data, 0, array183->size*sizeof(unsigned int));
         DEBUG_NEW(array183->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array1;
      params0.data[1] = array183;
      array_t* array184 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array184->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array187;
         if (pCounter > 0) {
            array187 = vars->data[--pCounter];
            array187->refC++;
            DEBUG_COPY(array187->id);
         } else {
            array187 = (array_t*)malloc(sizeof(array_t));
            array187->size = 157;
            array187->refC = 1;
            array187->id = 187;
            array187->data = (unsigned int*)malloc(array187->size*sizeof(unsigned int));
            memset(array187->data, 0, array187->size*sizeof(unsigned int));
            DEBUG_NEW(array187->id);
         }
         unsigned int loop55 = 0;
         unsigned int loopLimit55 = (rand()%loopsFactor)/3 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            for (int i = 0; i < array183->size; i++) {
               array183->data[i]--;
            }
            for (int i = 0; i < array183->size; i++) {
               if (array183->data[i] == 58) { 
                  return array183;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array183;
         params1.data[2] = array184;
         params1.data[3] = array187;
         array_t* array188 = func18(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array188->id);
         free(params1.data);
         array188->refC--;
         if(array188->refC == 0) {
            free(array188->data);
            free(array188);
            DEBUG_FREE(array188->id);
         }
         array187->refC--;
         if(array187->refC == 0) {
            free(array187->data);
            free(array187);
            DEBUG_FREE(array187->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array183;
         params1.data[2] = array184;
         array_t* array210 = func14(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array210->id);
         free(params1.data);
         array210->refC--;
         if(array210->refC == 0) {
            free(array210->data);
            free(array210);
            DEBUG_FREE(array210->id);
         }
      }
      for (int i = 0; i < array184->size; i++) {
         if (array184->data[i] == 74) { 
            return array184;
         }
      }
      array184->refC--;
      if(array184->refC == 0) {
         free(array184->data);
         free(array184);
         DEBUG_FREE(array184->id);
      }
      array183->refC--;
      if(array183->refC == 0) {
         free(array183->data);
         free(array183);
         DEBUG_FREE(array183->id);
      }
   }
   return array1;
}

