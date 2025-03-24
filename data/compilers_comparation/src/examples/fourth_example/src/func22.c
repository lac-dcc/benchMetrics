#include "fourth_example.h" 
array_t* func22(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array69;
   if (pCounter > 0) {
      array69 = vars->data[--pCounter];
      array69->refC++;
      DEBUG_COPY(array69->id);
   } else {
      array69 = (array_t*)malloc(sizeof(array_t));
      array69->size = 343;
      array69->refC = 1;
      array69->id = 69;
      array69->data = (unsigned int*)malloc(array69->size*sizeof(unsigned int));
      memset(array69->data, 0, array69->size*sizeof(unsigned int));
      DEBUG_NEW(array69->id);
   }
   if(PATH0 & 1) {
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         for (int i = 0; i < array69->size; i++) {
            array69->data[i]--;
         }
      }
      array_t* array70;
      if (pCounter > 0) {
         array70 = vars->data[--pCounter];
         array70->refC++;
         DEBUG_COPY(array70->id);
      } else {
         array70 = (array_t*)malloc(sizeof(array_t));
         array70->size = 568;
         array70->refC = 1;
         array70->id = 70;
         array70->data = (unsigned int*)malloc(array70->size*sizeof(unsigned int));
         memset(array70->data, 0, array70->size*sizeof(unsigned int));
         DEBUG_NEW(array70->id);
      }
      if(PATH0 & 2) {
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/2 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            array_t* array71;
            if (pCounter > 0) {
               array71 = vars->data[--pCounter];
               array71->refC++;
               DEBUG_COPY(array71->id);
            } else {
               array71 = (array_t*)malloc(sizeof(array_t));
               array71->size = 340;
               array71->refC = 1;
               array71->id = 71;
               array71->data = (unsigned int*)malloc(array71->size*sizeof(unsigned int));
               memset(array71->data, 0, array71->size*sizeof(unsigned int));
               DEBUG_NEW(array71->id);
            }
            for (int i = 0; i < array70->size; i++) {
               array70->data[i]--;
            }
            for (int i = 0; i < array71->size; i++) {
               if (array71->data[i] == 10) { 
                  return array71;
               }
            }
            array71->refC--;
            if(array71->refC == 0) {
               free(array71->data);
               free(array71);
               DEBUG_FREE(array71->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array69;
         params0.data[1] = array70;
         array_t* array72 = func29(&params0, loopsFactor);
         DEBUG_RETURN(array72->id);
         free(params0.data);
         array72->refC--;
         if(array72->refC == 0) {
            free(array72->data);
            free(array72);
            DEBUG_FREE(array72->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array69;
      params0.data[1] = array70;
      array_t* array73 = func26(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array73->id);
      free(params0.data);
      unsigned int loop31 = 0;
      unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         for (int i = 0; i < array70->size; i++) {
            array70->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array69;
      params1.data[1] = array70;
      params1.data[2] = array73;
      array_t* array74 = func23(&params1, loopsFactor);
      DEBUG_RETURN(array74->id);
      free(params1.data);
      array74->refC--;
      if(array74->refC == 0) {
         free(array74->data);
         free(array74);
         DEBUG_FREE(array74->id);
      }
      array73->refC--;
      if(array73->refC == 0) {
         free(array73->data);
         free(array73);
         DEBUG_FREE(array73->id);
      }
      array70->refC--;
      if(array70->refC == 0) {
         free(array70->data);
         free(array70);
         DEBUG_FREE(array70->id);
      }
   }
   else {
      array_t* array75;
      if (pCounter > 0) {
         array75 = vars->data[--pCounter];
         array75->refC++;
         DEBUG_COPY(array75->id);
      } else {
         array75 = (array_t*)malloc(sizeof(array_t));
         array75->size = 736;
         array75->refC = 1;
         array75->id = 75;
         array75->data = (unsigned int*)malloc(array75->size*sizeof(unsigned int));
         memset(array75->data, 0, array75->size*sizeof(unsigned int));
         DEBUG_NEW(array75->id);
      }
      for (int i = 0; i < array69->size; i++) {
         array69->data[i]++;
      }
      for (int i = 0; i < array69->size; i++) {
         if (array69->data[i] == 22) { 
            return array69;
         }
      }
      for (int i = 0; i < array75->size; i++) {
         array75->data[i]--;
      }
      array_t* array76;
      if (pCounter > 0) {
         array76 = vars->data[--pCounter];
         array76->refC++;
         DEBUG_COPY(array76->id);
      } else {
         array76 = (array_t*)malloc(sizeof(array_t));
         array76->size = 708;
         array76->refC = 1;
         array76->id = 76;
         array76->data = (unsigned int*)malloc(array76->size*sizeof(unsigned int));
         memset(array76->data, 0, array76->size*sizeof(unsigned int));
         DEBUG_NEW(array76->id);
      }
      if(PATH0 & 4) {
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            array_t* array77;
            if (pCounter > 0) {
               array77 = vars->data[--pCounter];
               array77->refC++;
               DEBUG_COPY(array77->id);
            } else {
               array77 = (array_t*)malloc(sizeof(array_t));
               array77->size = 416;
               array77->refC = 1;
               array77->id = 77;
               array77->data = (unsigned int*)malloc(array77->size*sizeof(unsigned int));
               memset(array77->data, 0, array77->size*sizeof(unsigned int));
               DEBUG_NEW(array77->id);
            }
            for (int i = 0; i < array76->size; i++) {
               array76->data[i]--;
            }
            for (int i = 0; i < array76->size; i++) {
               if (array76->data[i] == 24) { 
                  return array76;
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
         params0.data[0] = array69;
         params0.data[1] = array75;
         params0.data[2] = array76;
         array_t* array78 = func29(&params0, loopsFactor);
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
      params0.data[0] = array69;
      params0.data[1] = array75;
      params0.data[2] = array76;
      array_t* array79 = func26(&params0, rng(), loopsFactor);
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
   unsigned int loop33 = 0;
   unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
   for(; loop33 < loopLimit33; loop33++) {
      for (int i = 0; i < array69->size; i++) {
         array69->data[i]++;
      }
      array_t* array80;
      if (pCounter > 0) {
         array80 = vars->data[--pCounter];
         array80->refC++;
         DEBUG_COPY(array80->id);
      } else {
         array80 = (array_t*)malloc(sizeof(array_t));
         array80->size = 452;
         array80->refC = 1;
         array80->id = 80;
         array80->data = (unsigned int*)malloc(array80->size*sizeof(unsigned int));
         memset(array80->data, 0, array80->size*sizeof(unsigned int));
         DEBUG_NEW(array80->id);
      }
      for (int i = 0; i < array80->size; i++) {
         array80->data[i]++;
      }
      for (int i = 0; i < array80->size; i++) {
         if (array80->data[i] == 50) { 
            return array80;
         }
      }
      for (int i = 0; i < array69->size; i++) {
         array69->data[i]--;
      }
      array_t* array81;
      if (pCounter > 0) {
         array81 = vars->data[--pCounter];
         array81->refC++;
         DEBUG_COPY(array81->id);
      } else {
         array81 = (array_t*)malloc(sizeof(array_t));
         array81->size = 71;
         array81->refC = 1;
         array81->id = 81;
         array81->data = (unsigned int*)malloc(array81->size*sizeof(unsigned int));
         memset(array81->data, 0, array81->size*sizeof(unsigned int));
         DEBUG_NEW(array81->id);
      }
      if(PATH0 & 8) {
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            array_t* array82;
            if (pCounter > 0) {
               array82 = vars->data[--pCounter];
               array82->refC++;
               DEBUG_COPY(array82->id);
            } else {
               array82 = (array_t*)malloc(sizeof(array_t));
               array82->size = 973;
               array82->refC = 1;
               array82->id = 82;
               array82->data = (unsigned int*)malloc(array82->size*sizeof(unsigned int));
               memset(array82->data, 0, array82->size*sizeof(unsigned int));
               DEBUG_NEW(array82->id);
            }
            for (int i = 0; i < array82->size; i++) {
               array82->data[i]--;
            }
            for (int i = 0; i < array80->size; i++) {
               if (array80->data[i] == 30) { 
                  return array80;
               }
            }
            array82->refC--;
            if(array82->refC == 0) {
               free(array82->data);
               free(array82);
               DEBUG_FREE(array82->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array69;
         params0.data[1] = array80;
         params0.data[2] = array81;
         array_t* array83 = func29(&params0, loopsFactor);
         DEBUG_RETURN(array83->id);
         free(params0.data);
         array83->refC--;
         if(array83->refC == 0) {
            free(array83->data);
            free(array83);
            DEBUG_FREE(array83->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array69;
      params0.data[1] = array80;
      params0.data[2] = array81;
      array_t* array84 = func26(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array84->id);
      free(params0.data);
      array84->refC--;
      if(array84->refC == 0) {
         free(array84->data);
         free(array84);
         DEBUG_FREE(array84->id);
      }
      array81->refC--;
      if(array81->refC == 0) {
         free(array81->data);
         free(array81);
         DEBUG_FREE(array81->id);
      }
      array80->refC--;
      if(array80->refC == 0) {
         free(array80->data);
         free(array80);
         DEBUG_FREE(array80->id);
      }
   }
   return array69;
}

