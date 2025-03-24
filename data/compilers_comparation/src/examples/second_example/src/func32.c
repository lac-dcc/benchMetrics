#include "second_example.h" 
array_t* func32(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array118;
   if (pCounter > 0) {
      array118 = vars->data[--pCounter];
      array118->refC++;
      DEBUG_COPY(array118->id);
   } else {
      array118 = (array_t*)malloc(sizeof(array_t));
      array118->size = 613;
      array118->refC = 1;
      array118->id = 118;
      array118->data = (unsigned int*)malloc(array118->size*sizeof(unsigned int));
      memset(array118->data, 0, array118->size*sizeof(unsigned int));
      DEBUG_NEW(array118->id);
   }
   unsigned int loop36 = 0;
   unsigned int loopLimit36 = (rand()%loopsFactor)/4 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      if(PATH0 & 1) {
         array_t* array119;
         if (pCounter > 0) {
            array119 = vars->data[--pCounter];
            array119->refC++;
            DEBUG_COPY(array119->id);
         } else {
            array119 = (array_t*)malloc(sizeof(array_t));
            array119->size = 961;
            array119->refC = 1;
            array119->id = 119;
            array119->data = (unsigned int*)malloc(array119->size*sizeof(unsigned int));
            memset(array119->data, 0, array119->size*sizeof(unsigned int));
            DEBUG_NEW(array119->id);
         }
         unsigned int loop37 = 0;
         unsigned int loopLimit37 = (rand()%loopsFactor)/5 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            for (int i = 0; i < array118->size; i++) {
               array118->data[i]--;
            }
            for (int i = 0; i < array118->size; i++) {
               if (array118->data[i] == 59) { 
                  return array118;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array118;
         params0.data[1] = array119;
         array_t* array120 = func46(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array120->id);
         free(params0.data);
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
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array118;
         array_t* array121 = func40(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array121->id);
         free(params0.data);
         array121->refC--;
         if(array121->refC == 0) {
            free(array121->data);
            free(array121);
            DEBUG_FREE(array121->id);
         }
      }
      array_t* array122;
      if (pCounter > 0) {
         array122 = vars->data[--pCounter];
         array122->refC++;
         DEBUG_COPY(array122->id);
      } else {
         array122 = (array_t*)malloc(sizeof(array_t));
         array122->size = 784;
         array122->refC = 1;
         array122->id = 122;
         array122->data = (unsigned int*)malloc(array122->size*sizeof(unsigned int));
         memset(array122->data, 0, array122->size*sizeof(unsigned int));
         DEBUG_NEW(array122->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array118;
      params0.data[1] = array122;
      array_t* array123 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array123->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array124;
         if (pCounter > 0) {
            array124 = vars->data[--pCounter];
            array124->refC++;
            DEBUG_COPY(array124->id);
         } else {
            array124 = (array_t*)malloc(sizeof(array_t));
            array124->size = 868;
            array124->refC = 1;
            array124->id = 124;
            array124->data = (unsigned int*)malloc(array124->size*sizeof(unsigned int));
            memset(array124->data, 0, array124->size*sizeof(unsigned int));
            DEBUG_NEW(array124->id);
         }
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/5 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            for (int i = 0; i < array118->size; i++) {
               array118->data[i]--;
            }
            for (int i = 0; i < array122->size; i++) {
               if (array122->data[i] == 72) { 
                  return array122;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array118;
         params1.data[1] = array122;
         params1.data[2] = array123;
         params1.data[3] = array124;
         array_t* array125 = func54(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array125->id);
         free(params1.data);
         array125->refC--;
         if(array125->refC == 0) {
            free(array125->data);
            free(array125);
            DEBUG_FREE(array125->id);
         }
         array124->refC--;
         if(array124->refC == 0) {
            free(array124->data);
            free(array124);
            DEBUG_FREE(array124->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array118;
         params1.data[1] = array122;
         params1.data[2] = array123;
         array_t* array126 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array126->id);
         free(params1.data);
         array126->refC--;
         if(array126->refC == 0) {
            free(array126->data);
            free(array126);
            DEBUG_FREE(array126->id);
         }
      }
      for (int i = 0; i < array118->size; i++) {
         if (array118->data[i] == 53) { 
            return array118;
         }
      }
      array123->refC--;
      if(array123->refC == 0) {
         free(array123->data);
         free(array123);
         DEBUG_FREE(array123->id);
      }
      array122->refC--;
      if(array122->refC == 0) {
         free(array122->data);
         free(array122);
         DEBUG_FREE(array122->id);
      }
   }
   for (int i = 0; i < array118->size; i++) {
      array118->data[i]--;
   }
   for (int i = 0; i < array118->size; i++) {
      if (array118->data[i] == 33) { 
         return array118;
      }
   }
   return array118;
}

