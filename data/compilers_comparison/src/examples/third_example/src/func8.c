#include "third_example.h" 
array_t* func8(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array38;
   if (pCounter > 0) {
      array38 = vars->data[--pCounter];
      array38->refC++;
      DEBUG_COPY(array38->id);
   } else {
      array38 = (array_t*)malloc(sizeof(array_t));
      array38->size = 19;
      array38->refC = 1;
      array38->id = 38;
      array38->data = (unsigned int*)malloc(array38->size*sizeof(unsigned int));
      memset(array38->data, 0, array38->size*sizeof(unsigned int));
      DEBUG_NEW(array38->id);
   }
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array38->size; i++) {
            array38->data[i]--;
         }
      }
      array_t* array39;
      if (pCounter > 0) {
         array39 = vars->data[--pCounter];
         array39->refC++;
         DEBUG_COPY(array39->id);
      } else {
         array39 = (array_t*)malloc(sizeof(array_t));
         array39->size = 368;
         array39->refC = 1;
         array39->id = 39;
         array39->data = (unsigned int*)malloc(array39->size*sizeof(unsigned int));
         memset(array39->data, 0, array39->size*sizeof(unsigned int));
         DEBUG_NEW(array39->id);
      }
      if(PATH0 & 2) {
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            array_t* array40;
            if (pCounter > 0) {
               array40 = vars->data[--pCounter];
               array40->refC++;
               DEBUG_COPY(array40->id);
            } else {
               array40 = (array_t*)malloc(sizeof(array_t));
               array40->size = 708;
               array40->refC = 1;
               array40->id = 40;
               array40->data = (unsigned int*)malloc(array40->size*sizeof(unsigned int));
               memset(array40->data, 0, array40->size*sizeof(unsigned int));
               DEBUG_NEW(array40->id);
            }
            for (int i = 0; i < array40->size; i++) {
               array40->data[i]--;
            }
            for (int i = 0; i < array39->size; i++) {
               if (array39->data[i] == 49) { 
                  return array39;
               }
            }
            array40->refC--;
            if(array40->refC == 0) {
               free(array40->data);
               free(array40);
               DEBUG_FREE(array40->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array38;
         params0.data[1] = array39;
         array_t* array41 = func18(&params0, loopsFactor);
         DEBUG_RETURN(array41->id);
         free(params0.data);
         array41->refC--;
         if(array41->refC == 0) {
            free(array41->data);
            free(array41);
            DEBUG_FREE(array41->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array38;
      params0.data[1] = array39;
      array_t* array45 = func15(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array45->id);
      free(params0.data);
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         for (int i = 0; i < array39->size; i++) {
            array39->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array38;
      params1.data[1] = array39;
      params1.data[2] = array45;
      array_t* array64 = func12(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array64->id);
      free(params1.data);
      array64->refC--;
      if(array64->refC == 0) {
         free(array64->data);
         free(array64);
         DEBUG_FREE(array64->id);
      }
      array45->refC--;
      if(array45->refC == 0) {
         free(array45->data);
         free(array45);
         DEBUG_FREE(array45->id);
      }
      array39->refC--;
      if(array39->refC == 0) {
         free(array39->data);
         free(array39);
         DEBUG_FREE(array39->id);
      }
   }
   else {
      array_t* array70;
      if (pCounter > 0) {
         array70 = vars->data[--pCounter];
         array70->refC++;
         DEBUG_COPY(array70->id);
      } else {
         array70 = (array_t*)malloc(sizeof(array_t));
         array70->size = 746;
         array70->refC = 1;
         array70->id = 70;
         array70->data = (unsigned int*)malloc(array70->size*sizeof(unsigned int));
         memset(array70->data, 0, array70->size*sizeof(unsigned int));
         DEBUG_NEW(array70->id);
      }
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]++;
      }
      for (int i = 0; i < array38->size; i++) {
         if (array38->data[i] == 22) { 
            return array38;
         }
      }
      for (int i = 0; i < array70->size; i++) {
         array70->data[i]--;
      }
      array_t* array71;
      if (pCounter > 0) {
         array71 = vars->data[--pCounter];
         array71->refC++;
         DEBUG_COPY(array71->id);
      } else {
         array71 = (array_t*)malloc(sizeof(array_t));
         array71->size = 810;
         array71->refC = 1;
         array71->id = 71;
         array71->data = (unsigned int*)malloc(array71->size*sizeof(unsigned int));
         memset(array71->data, 0, array71->size*sizeof(unsigned int));
         DEBUG_NEW(array71->id);
      }
      if(PATH0 & 4) {
         unsigned int loop29 = 0;
         unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            array_t* array72;
            if (pCounter > 0) {
               array72 = vars->data[--pCounter];
               array72->refC++;
               DEBUG_COPY(array72->id);
            } else {
               array72 = (array_t*)malloc(sizeof(array_t));
               array72->size = 605;
               array72->refC = 1;
               array72->id = 72;
               array72->data = (unsigned int*)malloc(array72->size*sizeof(unsigned int));
               memset(array72->data, 0, array72->size*sizeof(unsigned int));
               DEBUG_NEW(array72->id);
            }
            for (int i = 0; i < array70->size; i++) {
               array70->data[i]--;
            }
            for (int i = 0; i < array70->size; i++) {
               if (array70->data[i] == 30) { 
                  return array70;
               }
            }
            array72->refC--;
            if(array72->refC == 0) {
               free(array72->data);
               free(array72);
               DEBUG_FREE(array72->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array38;
         params0.data[1] = array70;
         params0.data[2] = array71;
         array_t* array73 = func18(&params0, loopsFactor);
         DEBUG_RETURN(array73->id);
         free(params0.data);
         array73->refC--;
         if(array73->refC == 0) {
            free(array73->data);
            free(array73);
            DEBUG_FREE(array73->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array38;
      params0.data[1] = array70;
      params0.data[2] = array71;
      array_t* array74 = func15(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array74->id);
      free(params0.data);
      array74->refC--;
      if(array74->refC == 0) {
         free(array74->data);
         free(array74);
         DEBUG_FREE(array74->id);
      }
      array71->refC--;
      if(array71->refC == 0) {
         free(array71->data);
         free(array71);
         DEBUG_FREE(array71->id);
      }
      array70->refC--;
      if(array70->refC == 0) {
         free(array70->data);
         free(array70);
         DEBUG_FREE(array70->id);
      }
   }
   unsigned int loop30 = 0;
   unsigned int loopLimit30 = (rand()%loopsFactor)/2 + 1;
   for(; loop30 < loopLimit30; loop30++) {
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]++;
      }
      array_t* array75;
      if (pCounter > 0) {
         array75 = vars->data[--pCounter];
         array75->refC++;
         DEBUG_COPY(array75->id);
      } else {
         array75 = (array_t*)malloc(sizeof(array_t));
         array75->size = 626;
         array75->refC = 1;
         array75->id = 75;
         array75->data = (unsigned int*)malloc(array75->size*sizeof(unsigned int));
         memset(array75->data, 0, array75->size*sizeof(unsigned int));
         DEBUG_NEW(array75->id);
      }
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]++;
      }
      for (int i = 0; i < array75->size; i++) {
         if (array75->data[i] == 8) { 
            return array75;
         }
      }
      for (int i = 0; i < array38->size; i++) {
         array38->data[i]--;
      }
      array_t* array76;
      if (pCounter > 0) {
         array76 = vars->data[--pCounter];
         array76->refC++;
         DEBUG_COPY(array76->id);
      } else {
         array76 = (array_t*)malloc(sizeof(array_t));
         array76->size = 282;
         array76->refC = 1;
         array76->id = 76;
         array76->data = (unsigned int*)malloc(array76->size*sizeof(unsigned int));
         memset(array76->data, 0, array76->size*sizeof(unsigned int));
         DEBUG_NEW(array76->id);
      }
      if(PATH0 & 8) {
         unsigned int loop31 = 0;
         unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            array_t* array77;
            if (pCounter > 0) {
               array77 = vars->data[--pCounter];
               array77->refC++;
               DEBUG_COPY(array77->id);
            } else {
               array77 = (array_t*)malloc(sizeof(array_t));
               array77->size = 258;
               array77->refC = 1;
               array77->id = 77;
               array77->data = (unsigned int*)malloc(array77->size*sizeof(unsigned int));
               memset(array77->data, 0, array77->size*sizeof(unsigned int));
               DEBUG_NEW(array77->id);
            }
            for (int i = 0; i < array38->size; i++) {
               array38->data[i]--;
            }
            for (int i = 0; i < array75->size; i++) {
               if (array75->data[i] == 62) { 
                  return array75;
               }
            }
            array77->refC--;
            if(array77->refC == 0) {
               free(array77->data);
               free(array77);
               DEBUG_FREE(array77->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array38;
         params0.data[1] = array75;
         params0.data[2] = array76;
         array_t* array78 = func18(&params0, loopsFactor);
         DEBUG_RETURN(array78->id);
         free(params0.data);
         array78->refC--;
         if(array78->refC == 0) {
            free(array78->data);
            free(array78);
            DEBUG_FREE(array78->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array38;
      params0.data[1] = array75;
      params0.data[2] = array76;
      array_t* array79 = func15(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array79->id);
      free(params0.data);
      array79->refC--;
      if(array79->refC == 0) {
         free(array79->data);
         free(array79);
         DEBUG_FREE(array79->id);
      }
      array76->refC--;
      if(array76->refC == 0) {
         free(array76->data);
         free(array76);
         DEBUG_FREE(array76->id);
      }
      array75->refC--;
      if(array75->refC == 0) {
         free(array75->data);
         free(array75);
         DEBUG_FREE(array75->id);
      }
   }
   return array38;
}

