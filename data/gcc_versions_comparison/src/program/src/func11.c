#include "program.h" 
array_t* func11(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
         array_t* array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
            array5->refC++;
            DEBUG_COPY(array5->id);
         } else {
            array5 = (array_t*)malloc(sizeof(array_t));
            array5->size = 736;
            array5->refC = 1;
            array5->id = 5;
            array5->data = (unsigned int*)malloc(array5->size*sizeof(unsigned int));
            memset(array5->data, 0, array5->size*sizeof(unsigned int));
            DEBUG_NEW(array5->id);
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (rand()%loopsFactor)/4 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5->size; i++) {
               array5->data[i]--;
            }
            for (int i = 0; i < array5->size; i++) {
               if (array5->data[i] == 67) { 
                  return array5;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array5;
         array_t* array6 = func28(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array6->id);
         free(params0.data);
         array6->refC--;
         if(array6->refC == 0) {
            free(array6->data);
            free(array6);
            DEBUG_FREE(array6->id);
         }
         array5->refC--;
         if(array5->refC == 0) {
            free(array5->data);
            free(array5);
            DEBUG_FREE(array5->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array34 = func22(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array34->id);
         free(params0.data);
         array34->refC--;
         if(array34->refC == 0) {
            free(array34->data);
            free(array34);
            DEBUG_FREE(array34->id);
         }
      }
      array_t* array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43->refC++;
         DEBUG_COPY(array43->id);
      } else {
         array43 = (array_t*)malloc(sizeof(array_t));
         array43->size = 618;
         array43->refC = 1;
         array43->id = 43;
         array43->data = (unsigned int*)malloc(array43->size*sizeof(unsigned int));
         memset(array43->data, 0, array43->size*sizeof(unsigned int));
         DEBUG_NEW(array43->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array43;
      array_t* array44 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array44->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array47;
         if (pCounter > 0) {
            array47 = vars->data[--pCounter];
            array47->refC++;
            DEBUG_COPY(array47->id);
         } else {
            array47 = (array_t*)malloc(sizeof(array_t));
            array47->size = 193;
            array47->refC = 1;
            array47->id = 47;
            array47->data = (unsigned int*)malloc(array47->size*sizeof(unsigned int));
            memset(array47->data, 0, array47->size*sizeof(unsigned int));
            DEBUG_NEW(array47->id);
         }
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (rand()%loopsFactor)/4 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            for (int i = 0; i < array44->size; i++) {
               array44->data[i]--;
            }
            for (int i = 0; i < array47->size; i++) {
               if (array47->data[i] == 64) { 
                  return array47;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array43;
         params1.data[1] = array44;
         params1.data[2] = array47;
         array_t* array48 = func36(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array48->id);
         free(params1.data);
         array48->refC--;
         if(array48->refC == 0) {
            free(array48->data);
            free(array48);
            DEBUG_FREE(array48->id);
         }
         array47->refC--;
         if(array47->refC == 0) {
            free(array47->data);
            free(array47);
            DEBUG_FREE(array47->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array43;
         params1.data[1] = array44;
         array_t* array58 = func32(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array58->id);
         free(params1.data);
         array58->refC--;
         if(array58->refC == 0) {
            free(array58->data);
            free(array58);
            DEBUG_FREE(array58->id);
         }
      }
      for (int i = 0; i < array44->size; i++) {
         if (array44->data[i] == 72) { 
            return array44;
         }
      }
      array44->refC--;
      if(array44->refC == 0) {
         free(array44->data);
         free(array44);
         DEBUG_FREE(array44->id);
      }
      array43->refC--;
      if(array43->refC == 0) {
         free(array43->data);
         free(array43);
         DEBUG_FREE(array43->id);
      }
   }
   array_t* array64;
   if (pCounter > 0) {
      array64 = vars->data[--pCounter];
      array64->refC++;
      DEBUG_COPY(array64->id);
   } else {
      array64 = (array_t*)malloc(sizeof(array_t));
      array64->size = 725;
      array64->refC = 1;
      array64->id = 64;
      array64->data = (unsigned int*)malloc(array64->size*sizeof(unsigned int));
      memset(array64->data, 0, array64->size*sizeof(unsigned int));
      DEBUG_NEW(array64->id);
   }
   return array64;
}

