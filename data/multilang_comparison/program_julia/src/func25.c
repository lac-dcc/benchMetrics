#include "program_julia.h" 
array_t* func25(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(PATH0 & 1) {
         array_t* array100;
         if (pCounter > 0) {
            array100 = vars->data[--pCounter];
            array100->refC++;
            DEBUG_COPY(array100->id);
         } else {
            array100 = (array_t*)malloc(sizeof(array_t));
            array100->size = 127;
            array100->refC = 1;
            array100->id = 100;
            array100->data = (unsigned int*)malloc(array100->size*sizeof(unsigned int));
            memset(array100->data, 0, array100->size*sizeof(unsigned int));
            DEBUG_NEW(array100->id);
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/4 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            for (int i = 0; i < array100->size; i++) {
               array100->data[i]--;
            }
            for (int i = 0; i < array100->size; i++) {
               if (array100->data[i] == 58) { 
                  return array100;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array100;
         array_t* array101 = func42(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array101->id);
         free(params0.data);
         array101->refC--;
         if(array101->refC == 0) {
            free(array101->data);
            free(array101);
            DEBUG_FREE(array101->id);
         }
         array100->refC--;
         if(array100->refC == 0) {
            free(array100->data);
            free(array100);
            DEBUG_FREE(array100->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array102 = func34(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array102->id);
         free(params0.data);
         array102->refC--;
         if(array102->refC == 0) {
            free(array102->data);
            free(array102);
            DEBUG_FREE(array102->id);
         }
      }
      array_t* array103;
      if (pCounter > 0) {
         array103 = vars->data[--pCounter];
         array103->refC++;
         DEBUG_COPY(array103->id);
      } else {
         array103 = (array_t*)malloc(sizeof(array_t));
         array103->size = 396;
         array103->refC = 1;
         array103->id = 103;
         array103->data = (unsigned int*)malloc(array103->size*sizeof(unsigned int));
         memset(array103->data, 0, array103->size*sizeof(unsigned int));
         DEBUG_NEW(array103->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array103;
      array_t* array104 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array104->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array105;
         if (pCounter > 0) {
            array105 = vars->data[--pCounter];
            array105->refC++;
            DEBUG_COPY(array105->id);
         } else {
            array105 = (array_t*)malloc(sizeof(array_t));
            array105->size = 84;
            array105->refC = 1;
            array105->id = 105;
            array105->data = (unsigned int*)malloc(array105->size*sizeof(unsigned int));
            memset(array105->data, 0, array105->size*sizeof(unsigned int));
            DEBUG_NEW(array105->id);
         }
         unsigned int loop33 = 0;
         unsigned int loopLimit33 = (rand()%loopsFactor)/4 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            for (int i = 0; i < array104->size; i++) {
               array104->data[i]--;
            }
            for (int i = 0; i < array103->size; i++) {
               if (array103->data[i] == 72) { 
                  return array103;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array103;
         params1.data[1] = array104;
         params1.data[2] = array105;
         array_t* array106 = func46(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array106->id);
         free(params1.data);
         array106->refC--;
         if(array106->refC == 0) {
            free(array106->data);
            free(array106);
            DEBUG_FREE(array106->id);
         }
         array105->refC--;
         if(array105->refC == 0) {
            free(array105->data);
            free(array105);
            DEBUG_FREE(array105->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array103;
         params1.data[1] = array104;
         array_t* array107 = func40(&params1, loopsFactor);
         DEBUG_RETURN(array107->id);
         free(params1.data);
         array107->refC--;
         if(array107->refC == 0) {
            free(array107->data);
            free(array107);
            DEBUG_FREE(array107->id);
         }
      }
      for (int i = 0; i < array104->size; i++) {
         if (array104->data[i] == 40) { 
            return array104;
         }
      }
      array104->refC--;
      if(array104->refC == 0) {
         free(array104->data);
         free(array104);
         DEBUG_FREE(array104->id);
      }
      array103->refC--;
      if(array103->refC == 0) {
         free(array103->data);
         free(array103);
         DEBUG_FREE(array103->id);
      }
   }
   array_t* array108;
   if (pCounter > 0) {
      array108 = vars->data[--pCounter];
      array108->refC++;
      DEBUG_COPY(array108->id);
   } else {
      array108 = (array_t*)malloc(sizeof(array_t));
      array108->size = 42;
      array108->refC = 1;
      array108->id = 108;
      array108->data = (unsigned int*)malloc(array108->size*sizeof(unsigned int));
      memset(array108->data, 0, array108->size*sizeof(unsigned int));
      DEBUG_NEW(array108->id);
   }
   return array108;
}

