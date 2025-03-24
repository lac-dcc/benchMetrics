#include "second_example.h" 
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
         array_t* array81 = func22(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array81->id);
         free(params0.data);
         array81->refC--;
         if(array81->refC == 0) {
            free(array81->data);
            free(array81);
            DEBUG_FREE(array81->id);
         }
      }
      array_t* array91;
      if (pCounter > 0) {
         array91 = vars->data[--pCounter];
         array91->refC++;
         DEBUG_COPY(array91->id);
      } else {
         array91 = (array_t*)malloc(sizeof(array_t));
         array91->size = 756;
         array91->refC = 1;
         array91->id = 91;
         array91->data = (unsigned int*)malloc(array91->size*sizeof(unsigned int));
         memset(array91->data, 0, array91->size*sizeof(unsigned int));
         DEBUG_NEW(array91->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array91;
      array_t* array92 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array92->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array95;
         if (pCounter > 0) {
            array95 = vars->data[--pCounter];
            array95->refC++;
            DEBUG_COPY(array95->id);
         } else {
            array95 = (array_t*)malloc(sizeof(array_t));
            array95->size = 587;
            array95->refC = 1;
            array95->id = 95;
            array95->data = (unsigned int*)malloc(array95->size*sizeof(unsigned int));
            memset(array95->data, 0, array95->size*sizeof(unsigned int));
            DEBUG_NEW(array95->id);
         }
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/4 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            for (int i = 0; i < array91->size; i++) {
               array91->data[i]--;
            }
            for (int i = 0; i < array91->size; i++) {
               if (array91->data[i] == 13) { 
                  return array91;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array91;
         params1.data[1] = array92;
         params1.data[2] = array95;
         array_t* array96 = func36(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array96->id);
         free(params1.data);
         array96->refC--;
         if(array96->refC == 0) {
            free(array96->data);
            free(array96);
            DEBUG_FREE(array96->id);
         }
         array95->refC--;
         if(array95->refC == 0) {
            free(array95->data);
            free(array95);
            DEBUG_FREE(array95->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array91;
         params1.data[1] = array92;
         array_t* array117 = func32(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array117->id);
         free(params1.data);
         array117->refC--;
         if(array117->refC == 0) {
            free(array117->data);
            free(array117);
            DEBUG_FREE(array117->id);
         }
      }
      for (int i = 0; i < array91->size; i++) {
         if (array91->data[i] == 90) { 
            return array91;
         }
      }
      array92->refC--;
      if(array92->refC == 0) {
         free(array92->data);
         free(array92);
         DEBUG_FREE(array92->id);
      }
      array91->refC--;
      if(array91->refC == 0) {
         free(array91->data);
         free(array91);
         DEBUG_FREE(array91->id);
      }
   }
   array_t* array127;
   if (pCounter > 0) {
      array127 = vars->data[--pCounter];
      array127->refC++;
      DEBUG_COPY(array127->id);
   } else {
      array127 = (array_t*)malloc(sizeof(array_t));
      array127->size = 754;
      array127->refC = 1;
      array127->id = 127;
      array127->data = (unsigned int*)malloc(array127->size*sizeof(unsigned int));
      memset(array127->data, 0, array127->size*sizeof(unsigned int));
      DEBUG_NEW(array127->id);
   }
   return array127;
}

