#include "third_example.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array92;
   if (pCounter > 0) {
      array92 = vars->data[--pCounter];
      array92->refC++;
      DEBUG_COPY(array92->id);
   } else {
      array92 = (array_t*)malloc(sizeof(array_t));
      array92->size = 659;
      array92->refC = 1;
      array92->id = 92;
      array92->data = (unsigned int*)malloc(array92->size*sizeof(unsigned int));
      memset(array92->data, 0, array92->size*sizeof(unsigned int));
      DEBUG_NEW(array92->id);
   }
   if(PATH0 & 1) {
      unsigned int loop37 = 0;
      unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         for (int i = 0; i < array92->size; i++) {
            array92->data[i]--;
         }
      }
      array_t* array93;
      if (pCounter > 0) {
         array93 = vars->data[--pCounter];
         array93->refC++;
         DEBUG_COPY(array93->id);
      } else {
         array93 = (array_t*)malloc(sizeof(array_t));
         array93->size = 336;
         array93->refC = 1;
         array93->id = 93;
         array93->data = (unsigned int*)malloc(array93->size*sizeof(unsigned int));
         memset(array93->data, 0, array93->size*sizeof(unsigned int));
         DEBUG_NEW(array93->id);
      }
      if(PATH0 & 2) {
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/2 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            array_t* array94;
            if (pCounter > 0) {
               array94 = vars->data[--pCounter];
               array94->refC++;
               DEBUG_COPY(array94->id);
            } else {
               array94 = (array_t*)malloc(sizeof(array_t));
               array94->size = 210;
               array94->refC = 1;
               array94->id = 94;
               array94->data = (unsigned int*)malloc(array94->size*sizeof(unsigned int));
               memset(array94->data, 0, array94->size*sizeof(unsigned int));
               DEBUG_NEW(array94->id);
            }
            for (int i = 0; i < array92->size; i++) {
               array92->data[i]--;
            }
            for (int i = 0; i < array94->size; i++) {
               if (array94->data[i] == 6) { 
                  return array94;
               }
            }
            array94->refC--;
            if(array94->refC == 0) {
               free(array94->data);
               free(array94);
               DEBUG_FREE(array94->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array92;
         params0.data[1] = array93;
         array_t* array95 = func20(&params0, loopsFactor);
         DEBUG_RETURN(array95->id);
         free(params0.data);
         array95->refC--;
         if(array95->refC == 0) {
            free(array95->data);
            free(array95);
            DEBUG_FREE(array95->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array92;
      params0.data[1] = array93;
      array_t* array96 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array96->id);
      free(params0.data);
      unsigned int loop39 = 0;
      unsigned int loopLimit39 = (rand()%loopsFactor)/2 + 1;
      for(; loop39 < loopLimit39; loop39++) {
         for (int i = 0; i < array93->size; i++) {
            array93->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array92;
      params1.data[1] = array93;
      params1.data[2] = array96;
      array_t* array97 = func14(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array97->id);
      free(params1.data);
      array97->refC--;
      if(array97->refC == 0) {
         free(array97->data);
         free(array97);
         DEBUG_FREE(array97->id);
      }
      array96->refC--;
      if(array96->refC == 0) {
         free(array96->data);
         free(array96);
         DEBUG_FREE(array96->id);
      }
      array93->refC--;
      if(array93->refC == 0) {
         free(array93->data);
         free(array93);
         DEBUG_FREE(array93->id);
      }
   }
   else {
      array_t* array98;
      if (pCounter > 0) {
         array98 = vars->data[--pCounter];
         array98->refC++;
         DEBUG_COPY(array98->id);
      } else {
         array98 = (array_t*)malloc(sizeof(array_t));
         array98->size = 721;
         array98->refC = 1;
         array98->id = 98;
         array98->data = (unsigned int*)malloc(array98->size*sizeof(unsigned int));
         memset(array98->data, 0, array98->size*sizeof(unsigned int));
         DEBUG_NEW(array98->id);
      }
      for (int i = 0; i < array92->size; i++) {
         array92->data[i]++;
      }
      for (int i = 0; i < array98->size; i++) {
         if (array98->data[i] == 11) { 
            return array98;
         }
      }
      for (int i = 0; i < array92->size; i++) {
         array92->data[i]--;
      }
      array_t* array99;
      if (pCounter > 0) {
         array99 = vars->data[--pCounter];
         array99->refC++;
         DEBUG_COPY(array99->id);
      } else {
         array99 = (array_t*)malloc(sizeof(array_t));
         array99->size = 667;
         array99->refC = 1;
         array99->id = 99;
         array99->data = (unsigned int*)malloc(array99->size*sizeof(unsigned int));
         memset(array99->data, 0, array99->size*sizeof(unsigned int));
         DEBUG_NEW(array99->id);
      }
      if(PATH0 & 4) {
         unsigned int loop40 = 0;
         unsigned int loopLimit40 = (rand()%loopsFactor)/2 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            array_t* array100;
            if (pCounter > 0) {
               array100 = vars->data[--pCounter];
               array100->refC++;
               DEBUG_COPY(array100->id);
            } else {
               array100 = (array_t*)malloc(sizeof(array_t));
               array100->size = 705;
               array100->refC = 1;
               array100->id = 100;
               array100->data = (unsigned int*)malloc(array100->size*sizeof(unsigned int));
               memset(array100->data, 0, array100->size*sizeof(unsigned int));
               DEBUG_NEW(array100->id);
            }
            for (int i = 0; i < array92->size; i++) {
               array92->data[i]--;
            }
            for (int i = 0; i < array100->size; i++) {
               if (array100->data[i] == 50) { 
                  return array100;
               }
            }
            array100->refC--;
            if(array100->refC == 0) {
               free(array100->data);
               free(array100);
               DEBUG_FREE(array100->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array92;
         params0.data[1] = array98;
         params0.data[2] = array99;
         array_t* array101 = func20(&params0, loopsFactor);
         DEBUG_RETURN(array101->id);
         free(params0.data);
         array101->refC--;
         if(array101->refC == 0) {
            free(array101->data);
            free(array101);
            DEBUG_FREE(array101->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array92;
      params0.data[1] = array98;
      params0.data[2] = array99;
      array_t* array102 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array102->id);
      free(params0.data);
      array102->refC--;
      if(array102->refC == 0) {
         free(array102->data);
         free(array102);
         DEBUG_FREE(array102->id);
      }
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
   unsigned int loop41 = 0;
   unsigned int loopLimit41 = (rand()%loopsFactor)/2 + 1;
   for(; loop41 < loopLimit41; loop41++) {
      for (int i = 0; i < array92->size; i++) {
         array92->data[i]++;
      }
      array_t* array103;
      if (pCounter > 0) {
         array103 = vars->data[--pCounter];
         array103->refC++;
         DEBUG_COPY(array103->id);
      } else {
         array103 = (array_t*)malloc(sizeof(array_t));
         array103->size = 269;
         array103->refC = 1;
         array103->id = 103;
         array103->data = (unsigned int*)malloc(array103->size*sizeof(unsigned int));
         memset(array103->data, 0, array103->size*sizeof(unsigned int));
         DEBUG_NEW(array103->id);
      }
      for (int i = 0; i < array92->size; i++) {
         array92->data[i]++;
      }
      for (int i = 0; i < array103->size; i++) {
         if (array103->data[i] == 30) { 
            return array103;
         }
      }
      for (int i = 0; i < array92->size; i++) {
         array92->data[i]--;
      }
      array_t* array104;
      if (pCounter > 0) {
         array104 = vars->data[--pCounter];
         array104->refC++;
         DEBUG_COPY(array104->id);
      } else {
         array104 = (array_t*)malloc(sizeof(array_t));
         array104->size = 292;
         array104->refC = 1;
         array104->id = 104;
         array104->data = (unsigned int*)malloc(array104->size*sizeof(unsigned int));
         memset(array104->data, 0, array104->size*sizeof(unsigned int));
         DEBUG_NEW(array104->id);
      }
      if(PATH0 & 8) {
         unsigned int loop42 = 0;
         unsigned int loopLimit42 = (rand()%loopsFactor)/3 + 1;
         for(; loop42 < loopLimit42; loop42++) {
            array_t* array105;
            if (pCounter > 0) {
               array105 = vars->data[--pCounter];
               array105->refC++;
               DEBUG_COPY(array105->id);
            } else {
               array105 = (array_t*)malloc(sizeof(array_t));
               array105->size = 972;
               array105->refC = 1;
               array105->id = 105;
               array105->data = (unsigned int*)malloc(array105->size*sizeof(unsigned int));
               memset(array105->data, 0, array105->size*sizeof(unsigned int));
               DEBUG_NEW(array105->id);
            }
            for (int i = 0; i < array92->size; i++) {
               array92->data[i]--;
            }
            for (int i = 0; i < array104->size; i++) {
               if (array104->data[i] == 25) { 
                  return array104;
               }
            }
            array105->refC--;
            if(array105->refC == 0) {
               free(array105->data);
               free(array105);
               DEBUG_FREE(array105->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array92;
         params0.data[1] = array103;
         params0.data[2] = array104;
         array_t* array106 = func20(&params0, loopsFactor);
         DEBUG_RETURN(array106->id);
         free(params0.data);
         array106->refC--;
         if(array106->refC == 0) {
            free(array106->data);
            free(array106);
            DEBUG_FREE(array106->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array92;
      params0.data[1] = array103;
      params0.data[2] = array104;
      array_t* array107 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array107->id);
      free(params0.data);
      array107->refC--;
      if(array107->refC == 0) {
         free(array107->data);
         free(array107);
         DEBUG_FREE(array107->id);
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
   return array92;
}

