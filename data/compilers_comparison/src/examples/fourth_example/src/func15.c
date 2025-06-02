#include "fourth_example.h" 
array_t* func15(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array97;
   if (pCounter > 0) {
      array97 = vars->data[--pCounter];
      array97->refC++;
      DEBUG_COPY(array97->id);
   } else {
      array97 = (array_t*)malloc(sizeof(array_t));
      array97->size = 599;
      array97->refC = 1;
      array97->id = 97;
      array97->data = (unsigned int*)malloc(array97->size*sizeof(unsigned int));
      memset(array97->data, 0, array97->size*sizeof(unsigned int));
      DEBUG_NEW(array97->id);
   }
   if(PATH0 & 1) {
      unsigned int loop40 = 0;
      unsigned int loopLimit40 = (rand()%loopsFactor)/2 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         for (int i = 0; i < array97->size; i++) {
            array97->data[i]--;
         }
      }
      array_t* array98;
      if (pCounter > 0) {
         array98 = vars->data[--pCounter];
         array98->refC++;
         DEBUG_COPY(array98->id);
      } else {
         array98 = (array_t*)malloc(sizeof(array_t));
         array98->size = 904;
         array98->refC = 1;
         array98->id = 98;
         array98->data = (unsigned int*)malloc(array98->size*sizeof(unsigned int));
         memset(array98->data, 0, array98->size*sizeof(unsigned int));
         DEBUG_NEW(array98->id);
      }
      if(PATH0 & 2) {
         unsigned int loop41 = 0;
         unsigned int loopLimit41 = (rand()%loopsFactor)/2 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            array_t* array99;
            if (pCounter > 0) {
               array99 = vars->data[--pCounter];
               array99->refC++;
               DEBUG_COPY(array99->id);
            } else {
               array99 = (array_t*)malloc(sizeof(array_t));
               array99->size = 939;
               array99->refC = 1;
               array99->id = 99;
               array99->data = (unsigned int*)malloc(array99->size*sizeof(unsigned int));
               memset(array99->data, 0, array99->size*sizeof(unsigned int));
               DEBUG_NEW(array99->id);
            }
            for (int i = 0; i < array98->size; i++) {
               array98->data[i]--;
            }
            for (int i = 0; i < array99->size; i++) {
               if (array99->data[i] == 67) { 
                  return array99;
               }
            }
            array99->refC--;
            if(array99->refC == 0) {
               free(array99->data);
               free(array99);
               DEBUG_FREE(array99->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array97;
         params0.data[1] = array98;
         array_t* array100 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array100->id);
         free(params0.data);
         array100->refC--;
         if(array100->refC == 0) {
            free(array100->data);
            free(array100);
            DEBUG_FREE(array100->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array97;
      params0.data[1] = array98;
      array_t* array101 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array101->id);
      free(params0.data);
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/2 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         for (int i = 0; i < array97->size; i++) {
            array97->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array97;
      params1.data[1] = array98;
      params1.data[2] = array101;
      array_t* array102 = func19(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array102->id);
      free(params1.data);
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
      array98->refC--;
      if(array98->refC == 0) {
         free(array98->data);
         free(array98);
         DEBUG_FREE(array98->id);
      }
   }
   else {
      array_t* array108;
      if (pCounter > 0) {
         array108 = vars->data[--pCounter];
         array108->refC++;
         DEBUG_COPY(array108->id);
      } else {
         array108 = (array_t*)malloc(sizeof(array_t));
         array108->size = 898;
         array108->refC = 1;
         array108->id = 108;
         array108->data = (unsigned int*)malloc(array108->size*sizeof(unsigned int));
         memset(array108->data, 0, array108->size*sizeof(unsigned int));
         DEBUG_NEW(array108->id);
      }
      for (int i = 0; i < array108->size; i++) {
         array108->data[i]++;
      }
      for (int i = 0; i < array97->size; i++) {
         if (array97->data[i] == 90) { 
            return array97;
         }
      }
      for (int i = 0; i < array97->size; i++) {
         array97->data[i]--;
      }
      array_t* array109;
      if (pCounter > 0) {
         array109 = vars->data[--pCounter];
         array109->refC++;
         DEBUG_COPY(array109->id);
      } else {
         array109 = (array_t*)malloc(sizeof(array_t));
         array109->size = 590;
         array109->refC = 1;
         array109->id = 109;
         array109->data = (unsigned int*)malloc(array109->size*sizeof(unsigned int));
         memset(array109->data, 0, array109->size*sizeof(unsigned int));
         DEBUG_NEW(array109->id);
      }
      if(PATH0 & 4) {
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/2 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            array_t* array110;
            if (pCounter > 0) {
               array110 = vars->data[--pCounter];
               array110->refC++;
               DEBUG_COPY(array110->id);
            } else {
               array110 = (array_t*)malloc(sizeof(array_t));
               array110->size = 209;
               array110->refC = 1;
               array110->id = 110;
               array110->data = (unsigned int*)malloc(array110->size*sizeof(unsigned int));
               memset(array110->data, 0, array110->size*sizeof(unsigned int));
               DEBUG_NEW(array110->id);
            }
            for (int i = 0; i < array108->size; i++) {
               array108->data[i]--;
            }
            for (int i = 0; i < array110->size; i++) {
               if (array110->data[i] == 36) { 
                  return array110;
               }
            }
            array110->refC--;
            if(array110->refC == 0) {
               free(array110->data);
               free(array110);
               DEBUG_FREE(array110->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array97;
         params0.data[1] = array108;
         params0.data[2] = array109;
         array_t* array111 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array111->id);
         free(params0.data);
         array111->refC--;
         if(array111->refC == 0) {
            free(array111->data);
            free(array111);
            DEBUG_FREE(array111->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array97;
      params0.data[1] = array108;
      params0.data[2] = array109;
      array_t* array112 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array112->id);
      free(params0.data);
      array112->refC--;
      if(array112->refC == 0) {
         free(array112->data);
         free(array112);
         DEBUG_FREE(array112->id);
      }
      array109->refC--;
      if(array109->refC == 0) {
         free(array109->data);
         free(array109);
         DEBUG_FREE(array109->id);
      }
      array108->refC--;
      if(array108->refC == 0) {
         free(array108->data);
         free(array108);
         DEBUG_FREE(array108->id);
      }
   }
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (rand()%loopsFactor)/2 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      for (int i = 0; i < array97->size; i++) {
         array97->data[i]++;
      }
      array_t* array113;
      if (pCounter > 0) {
         array113 = vars->data[--pCounter];
         array113->refC++;
         DEBUG_COPY(array113->id);
      } else {
         array113 = (array_t*)malloc(sizeof(array_t));
         array113->size = 769;
         array113->refC = 1;
         array113->id = 113;
         array113->data = (unsigned int*)malloc(array113->size*sizeof(unsigned int));
         memset(array113->data, 0, array113->size*sizeof(unsigned int));
         DEBUG_NEW(array113->id);
      }
      for (int i = 0; i < array113->size; i++) {
         array113->data[i]++;
      }
      for (int i = 0; i < array97->size; i++) {
         if (array97->data[i] == 50) { 
            return array97;
         }
      }
      for (int i = 0; i < array113->size; i++) {
         array113->data[i]--;
      }
      array_t* array114;
      if (pCounter > 0) {
         array114 = vars->data[--pCounter];
         array114->refC++;
         DEBUG_COPY(array114->id);
      } else {
         array114 = (array_t*)malloc(sizeof(array_t));
         array114->size = 860;
         array114->refC = 1;
         array114->id = 114;
         array114->data = (unsigned int*)malloc(array114->size*sizeof(unsigned int));
         memset(array114->data, 0, array114->size*sizeof(unsigned int));
         DEBUG_NEW(array114->id);
      }
      if(PATH0 & 8) {
         unsigned int loop46 = 0;
         unsigned int loopLimit46 = (rand()%loopsFactor)/3 + 1;
         for(; loop46 < loopLimit46; loop46++) {
            array_t* array115;
            if (pCounter > 0) {
               array115 = vars->data[--pCounter];
               array115->refC++;
               DEBUG_COPY(array115->id);
            } else {
               array115 = (array_t*)malloc(sizeof(array_t));
               array115->size = 142;
               array115->refC = 1;
               array115->id = 115;
               array115->data = (unsigned int*)malloc(array115->size*sizeof(unsigned int));
               memset(array115->data, 0, array115->size*sizeof(unsigned int));
               DEBUG_NEW(array115->id);
            }
            for (int i = 0; i < array115->size; i++) {
               array115->data[i]--;
            }
            for (int i = 0; i < array97->size; i++) {
               if (array97->data[i] == 93) { 
                  return array97;
               }
            }
            array115->refC--;
            if(array115->refC == 0) {
               free(array115->data);
               free(array115);
               DEBUG_FREE(array115->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array97;
         params0.data[1] = array113;
         params0.data[2] = array114;
         array_t* array116 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array116->id);
         free(params0.data);
         array116->refC--;
         if(array116->refC == 0) {
            free(array116->data);
            free(array116);
            DEBUG_FREE(array116->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array97;
      params0.data[1] = array113;
      params0.data[2] = array114;
      array_t* array117 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array117->id);
      free(params0.data);
      array117->refC--;
      if(array117->refC == 0) {
         free(array117->data);
         free(array117);
         DEBUG_FREE(array117->id);
      }
      array114->refC--;
      if(array114->refC == 0) {
         free(array114->data);
         free(array114);
         DEBUG_FREE(array114->id);
      }
      array113->refC--;
      if(array113->refC == 0) {
         free(array113->data);
         free(array113);
         DEBUG_FREE(array113->id);
      }
   }
   return array97;
}

