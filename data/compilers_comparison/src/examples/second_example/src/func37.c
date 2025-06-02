#include "second_example.h" 
array_t* func37(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/4 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(PATH0 & 1) {
         array_t* array98;
         if (pCounter > 0) {
            array98 = vars->data[--pCounter];
            array98->refC++;
            DEBUG_COPY(array98->id);
         } else {
            array98 = (array_t*)malloc(sizeof(array_t));
            array98->size = 811;
            array98->refC = 1;
            array98->id = 98;
            array98->data = (unsigned int*)malloc(array98->size*sizeof(unsigned int));
            memset(array98->data, 0, array98->size*sizeof(unsigned int));
            DEBUG_NEW(array98->id);
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/5 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            for (int i = 0; i < array98->size; i++) {
               array98->data[i]--;
            }
            for (int i = 0; i < array98->size; i++) {
               if (array98->data[i] == 5) { 
                  return array98;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array98;
         array_t* array99 = func54(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array99->id);
         free(params0.data);
         array99->refC--;
         if(array99->refC == 0) {
            free(array99->data);
            free(array99);
            DEBUG_FREE(array99->id);
         }
         array98->refC--;
         if(array98->refC == 0) {
            free(array98->data);
            free(array98);
            DEBUG_FREE(array98->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array100 = func50(&params0, loopsFactor);
         DEBUG_RETURN(array100->id);
         free(params0.data);
         array100->refC--;
         if(array100->refC == 0) {
            free(array100->data);
            free(array100);
            DEBUG_FREE(array100->id);
         }
      }
      array_t* array101;
      if (pCounter > 0) {
         array101 = vars->data[--pCounter];
         array101->refC++;
         DEBUG_COPY(array101->id);
      } else {
         array101 = (array_t*)malloc(sizeof(array_t));
         array101->size = 658;
         array101->refC = 1;
         array101->id = 101;
         array101->data = (unsigned int*)malloc(array101->size*sizeof(unsigned int));
         memset(array101->data, 0, array101->size*sizeof(unsigned int));
         DEBUG_NEW(array101->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array101;
      array_t* array102 = func51(&params0, loopsFactor);
      DEBUG_RETURN(array102->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array103;
         if (pCounter > 0) {
            array103 = vars->data[--pCounter];
            array103->refC++;
            DEBUG_COPY(array103->id);
         } else {
            array103 = (array_t*)malloc(sizeof(array_t));
            array103->size = 422;
            array103->refC = 1;
            array103->id = 103;
            array103->data = (unsigned int*)malloc(array103->size*sizeof(unsigned int));
            memset(array103->data, 0, array103->size*sizeof(unsigned int));
            DEBUG_NEW(array103->id);
         }
         unsigned int loop33 = 0;
         unsigned int loopLimit33 = (rand()%loopsFactor)/5 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            for (int i = 0; i < array103->size; i++) {
               array103->data[i]--;
            }
            for (int i = 0; i < array103->size; i++) {
               if (array103->data[i] == 81) { 
                  return array103;
               }
            }
         }
         array103->refC--;
         if(array103->refC == 0) {
            free(array103->data);
            free(array103);
            DEBUG_FREE(array103->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array101;
         params1.data[1] = array102;
         array_t* array104 = func52(&params1, loopsFactor);
         DEBUG_RETURN(array104->id);
         free(params1.data);
         array104->refC--;
         if(array104->refC == 0) {
            free(array104->data);
            free(array104);
            DEBUG_FREE(array104->id);
         }
      }
      for (int i = 0; i < array101->size; i++) {
         if (array101->data[i] == 72) { 
            return array101;
         }
      }
      array102->refC--;
      if(array102->refC == 0) {
         free(array102->data);
         free(array102);
         DEBUG_FREE(array102->id);
      }
      array101->refC--;
      if(array101->refC == 0) {
         free(array101->data);
         free(array101);
         DEBUG_FREE(array101->id);
      }
   }
   array_t* array105;
   if (pCounter > 0) {
      array105 = vars->data[--pCounter];
      array105->refC++;
      DEBUG_COPY(array105->id);
   } else {
      array105 = (array_t*)malloc(sizeof(array_t));
      array105->size = 672;
      array105->refC = 1;
      array105->id = 105;
      array105->data = (unsigned int*)malloc(array105->size*sizeof(unsigned int));
      memset(array105->data, 0, array105->size*sizeof(unsigned int));
      DEBUG_NEW(array105->id);
   }
   return array105;
}

