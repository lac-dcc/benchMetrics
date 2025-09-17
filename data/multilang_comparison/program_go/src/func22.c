#include "program_go.h" 
array_t* func22(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array55;
   if (pCounter > 0) {
      array55 = vars->data[--pCounter];
      array55->refC++;
      DEBUG_COPY(array55->id);
   } else {
      array55 = (array_t*)malloc(sizeof(array_t));
      array55->size = 143;
      array55->refC = 1;
      array55->id = 55;
      array55->data = (unsigned int*)malloc(array55->size*sizeof(unsigned int));
      memset(array55->data, 0, array55->size*sizeof(unsigned int));
      DEBUG_NEW(array55->id);
   }
   unsigned int loop18 = 0;
   unsigned int loopLimit18 = (rand()%loopsFactor)/4 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      if(PATH0 & 1) {
         array_t* array56;
         if (pCounter > 0) {
            array56 = vars->data[--pCounter];
            array56->refC++;
            DEBUG_COPY(array56->id);
         } else {
            array56 = (array_t*)malloc(sizeof(array_t));
            array56->size = 11;
            array56->refC = 1;
            array56->id = 56;
            array56->data = (unsigned int*)malloc(array56->size*sizeof(unsigned int));
            memset(array56->data, 0, array56->size*sizeof(unsigned int));
            DEBUG_NEW(array56->id);
         }
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/5 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            for (int i = 0; i < array55->size; i++) {
               array55->data[i]--;
            }
            for (int i = 0; i < array56->size; i++) {
               if (array56->data[i] == 76) { 
                  return array56;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array55;
         params0.data[1] = array56;
         array_t* array57 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array57->id);
         free(params0.data);
         array57->refC--;
         if(array57->refC == 0) {
            free(array57->data);
            free(array57);
            DEBUG_FREE(array57->id);
         }
         array56->refC--;
         if(array56->refC == 0) {
            free(array56->data);
            free(array56);
            DEBUG_FREE(array56->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array55;
         array_t* array58 = func34(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array58->id);
         free(params0.data);
         array58->refC--;
         if(array58->refC == 0) {
            free(array58->data);
            free(array58);
            DEBUG_FREE(array58->id);
         }
      }
      array_t* array59;
      if (pCounter > 0) {
         array59 = vars->data[--pCounter];
         array59->refC++;
         DEBUG_COPY(array59->id);
      } else {
         array59 = (array_t*)malloc(sizeof(array_t));
         array59->size = 538;
         array59->refC = 1;
         array59->id = 59;
         array59->data = (unsigned int*)malloc(array59->size*sizeof(unsigned int));
         memset(array59->data, 0, array59->size*sizeof(unsigned int));
         DEBUG_NEW(array59->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array55;
      params0.data[1] = array59;
      array_t* array60 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array60->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array61;
         if (pCounter > 0) {
            array61 = vars->data[--pCounter];
            array61->refC++;
            DEBUG_COPY(array61->id);
         } else {
            array61 = (array_t*)malloc(sizeof(array_t));
            array61->size = 904;
            array61->refC = 1;
            array61->id = 61;
            array61->data = (unsigned int*)malloc(array61->size*sizeof(unsigned int));
            memset(array61->data, 0, array61->size*sizeof(unsigned int));
            DEBUG_NEW(array61->id);
         }
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (rand()%loopsFactor)/5 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            for (int i = 0; i < array60->size; i++) {
               array60->data[i]--;
            }
            for (int i = 0; i < array55->size; i++) {
               if (array55->data[i] == 88) { 
                  return array55;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array55;
         params1.data[1] = array59;
         params1.data[2] = array60;
         params1.data[3] = array61;
         array_t* array62 = func46(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array62->id);
         free(params1.data);
         array62->refC--;
         if(array62->refC == 0) {
            free(array62->data);
            free(array62);
            DEBUG_FREE(array62->id);
         }
         array61->refC--;
         if(array61->refC == 0) {
            free(array61->data);
            free(array61);
            DEBUG_FREE(array61->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array55;
         params1.data[1] = array59;
         params1.data[2] = array60;
         array_t* array63 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array63->id);
         free(params1.data);
         array63->refC--;
         if(array63->refC == 0) {
            free(array63->data);
            free(array63);
            DEBUG_FREE(array63->id);
         }
      }
      for (int i = 0; i < array60->size; i++) {
         if (array60->data[i] == 43) { 
            return array60;
         }
      }
      array60->refC--;
      if(array60->refC == 0) {
         free(array60->data);
         free(array60);
         DEBUG_FREE(array60->id);
      }
      array59->refC--;
      if(array59->refC == 0) {
         free(array59->data);
         free(array59);
         DEBUG_FREE(array59->id);
      }
   }
   for (int i = 0; i < array55->size; i++) {
      array55->data[i]--;
   }
   for (int i = 0; i < array55->size; i++) {
      if (array55->data[i] == 90) { 
         return array55;
      }
   }
   return array55;
}

