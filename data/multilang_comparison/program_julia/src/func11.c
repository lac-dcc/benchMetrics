#include "program_julia.h" 
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
         array_t* array6 = func28(&params0, get_path(), loopsFactor);
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
         array_t* array54 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array54->id);
         free(params0.data);
         array54->refC--;
         if(array54->refC == 0) {
            free(array54->data);
            free(array54);
            DEBUG_FREE(array54->id);
         }
      }
      array_t* array64;
      if (pCounter > 0) {
         array64 = vars->data[--pCounter];
         array64->refC++;
         DEBUG_COPY(array64->id);
      } else {
         array64 = (array_t*)malloc(sizeof(array_t));
         array64->size = 772;
         array64->refC = 1;
         array64->id = 64;
         array64->data = (unsigned int*)malloc(array64->size*sizeof(unsigned int));
         memset(array64->data, 0, array64->size*sizeof(unsigned int));
         DEBUG_NEW(array64->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array64;
      array_t* array65 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array65->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array68;
         if (pCounter > 0) {
            array68 = vars->data[--pCounter];
            array68->refC++;
            DEBUG_COPY(array68->id);
         } else {
            array68 = (array_t*)malloc(sizeof(array_t));
            array68->size = 197;
            array68->refC = 1;
            array68->id = 68;
            array68->data = (unsigned int*)malloc(array68->size*sizeof(unsigned int));
            memset(array68->data, 0, array68->size*sizeof(unsigned int));
            DEBUG_NEW(array68->id);
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/4 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array64->size; i++) {
               array64->data[i]--;
            }
            for (int i = 0; i < array64->size; i++) {
               if (array64->data[i] == 4) { 
                  return array64;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array64;
         params1.data[1] = array65;
         params1.data[2] = array68;
         array_t* array69 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array69->id);
         free(params1.data);
         array69->refC--;
         if(array69->refC == 0) {
            free(array69->data);
            free(array69);
            DEBUG_FREE(array69->id);
         }
         array68->refC--;
         if(array68->refC == 0) {
            free(array68->data);
            free(array68);
            DEBUG_FREE(array68->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array64;
         params1.data[1] = array65;
         array_t* array86 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array86->id);
         free(params1.data);
         array86->refC--;
         if(array86->refC == 0) {
            free(array86->data);
            free(array86);
            DEBUG_FREE(array86->id);
         }
      }
      for (int i = 0; i < array64->size; i++) {
         if (array64->data[i] == 10) { 
            return array64;
         }
      }
      array65->refC--;
      if(array65->refC == 0) {
         free(array65->data);
         free(array65);
         DEBUG_FREE(array65->id);
      }
      array64->refC--;
      if(array64->refC == 0) {
         free(array64->data);
         free(array64);
         DEBUG_FREE(array64->id);
      }
   }
   array_t* array95;
   if (pCounter > 0) {
      array95 = vars->data[--pCounter];
      array95->refC++;
      DEBUG_COPY(array95->id);
   } else {
      array95 = (array_t*)malloc(sizeof(array_t));
      array95->size = 342;
      array95->refC = 1;
      array95->id = 95;
      array95->data = (unsigned int*)malloc(array95->size*sizeof(unsigned int));
      memset(array95->data, 0, array95->size*sizeof(unsigned int));
      DEBUG_NEW(array95->id);
   }
   return array95;
}

