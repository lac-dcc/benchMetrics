#include "fourth_example.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array209;
   if (pCounter > 0) {
      array209 = vars->data[--pCounter];
      array209->refC++;
      DEBUG_COPY(array209->id);
   } else {
      array209 = (array_t*)malloc(sizeof(array_t));
      array209->size = 711;
      array209->refC = 1;
      array209->id = 209;
      array209->data = (unsigned int*)malloc(array209->size*sizeof(unsigned int));
      memset(array209->data, 0, array209->size*sizeof(unsigned int));
      DEBUG_NEW(array209->id);
   }
   if(PATH0 & 1) {
      unsigned int loop81 = 0;
      unsigned int loopLimit81 = (rand()%loopsFactor)/2 + 1;
      for(; loop81 < loopLimit81; loop81++) {
         for (int i = 0; i < array209->size; i++) {
            array209->data[i]--;
         }
      }
      array_t* array210;
      if (pCounter > 0) {
         array210 = vars->data[--pCounter];
         array210->refC++;
         DEBUG_COPY(array210->id);
      } else {
         array210 = (array_t*)malloc(sizeof(array_t));
         array210->size = 934;
         array210->refC = 1;
         array210->id = 210;
         array210->data = (unsigned int*)malloc(array210->size*sizeof(unsigned int));
         memset(array210->data, 0, array210->size*sizeof(unsigned int));
         DEBUG_NEW(array210->id);
      }
      if(PATH0 & 2) {
         unsigned int loop82 = 0;
         unsigned int loopLimit82 = (rand()%loopsFactor)/2 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            array_t* array211;
            if (pCounter > 0) {
               array211 = vars->data[--pCounter];
               array211->refC++;
               DEBUG_COPY(array211->id);
            } else {
               array211 = (array_t*)malloc(sizeof(array_t));
               array211->size = 291;
               array211->refC = 1;
               array211->id = 211;
               array211->data = (unsigned int*)malloc(array211->size*sizeof(unsigned int));
               memset(array211->data, 0, array211->size*sizeof(unsigned int));
               DEBUG_NEW(array211->id);
            }
            for (int i = 0; i < array209->size; i++) {
               array209->data[i]--;
            }
            for (int i = 0; i < array211->size; i++) {
               if (array211->data[i] == 14) { 
                  return array211;
               }
            }
            array211->refC--;
            if(array211->refC == 0) {
               free(array211->data);
               free(array211);
               DEBUG_FREE(array211->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array209;
         params0.data[1] = array210;
         array_t* array212 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array212->id);
         free(params0.data);
         array212->refC--;
         if(array212->refC == 0) {
            free(array212->data);
            free(array212);
            DEBUG_FREE(array212->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array209;
      params0.data[1] = array210;
      array_t* array213 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array213->id);
      free(params0.data);
      unsigned int loop83 = 0;
      unsigned int loopLimit83 = (rand()%loopsFactor)/2 + 1;
      for(; loop83 < loopLimit83; loop83++) {
         for (int i = 0; i < array209->size; i++) {
            array209->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array209;
      params1.data[1] = array210;
      params1.data[2] = array213;
      array_t* array214 = func5(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array214->id);
      free(params1.data);
      array214->refC--;
      if(array214->refC == 0) {
         free(array214->data);
         free(array214);
         DEBUG_FREE(array214->id);
      }
      array213->refC--;
      if(array213->refC == 0) {
         free(array213->data);
         free(array213);
         DEBUG_FREE(array213->id);
      }
      array210->refC--;
      if(array210->refC == 0) {
         free(array210->data);
         free(array210);
         DEBUG_FREE(array210->id);
      }
   }
   else {
      array_t* array215;
      if (pCounter > 0) {
         array215 = vars->data[--pCounter];
         array215->refC++;
         DEBUG_COPY(array215->id);
      } else {
         array215 = (array_t*)malloc(sizeof(array_t));
         array215->size = 982;
         array215->refC = 1;
         array215->id = 215;
         array215->data = (unsigned int*)malloc(array215->size*sizeof(unsigned int));
         memset(array215->data, 0, array215->size*sizeof(unsigned int));
         DEBUG_NEW(array215->id);
      }
      for (int i = 0; i < array215->size; i++) {
         array215->data[i]++;
      }
      for (int i = 0; i < array209->size; i++) {
         if (array209->data[i] == 93) { 
            return array209;
         }
      }
      for (int i = 0; i < array209->size; i++) {
         array209->data[i]--;
      }
      array_t* array216;
      if (pCounter > 0) {
         array216 = vars->data[--pCounter];
         array216->refC++;
         DEBUG_COPY(array216->id);
      } else {
         array216 = (array_t*)malloc(sizeof(array_t));
         array216->size = 126;
         array216->refC = 1;
         array216->id = 216;
         array216->data = (unsigned int*)malloc(array216->size*sizeof(unsigned int));
         memset(array216->data, 0, array216->size*sizeof(unsigned int));
         DEBUG_NEW(array216->id);
      }
      if(PATH0 & 4) {
         unsigned int loop84 = 0;
         unsigned int loopLimit84 = (rand()%loopsFactor)/2 + 1;
         for(; loop84 < loopLimit84; loop84++) {
            array_t* array217;
            if (pCounter > 0) {
               array217 = vars->data[--pCounter];
               array217->refC++;
               DEBUG_COPY(array217->id);
            } else {
               array217 = (array_t*)malloc(sizeof(array_t));
               array217->size = 593;
               array217->refC = 1;
               array217->id = 217;
               array217->data = (unsigned int*)malloc(array217->size*sizeof(unsigned int));
               memset(array217->data, 0, array217->size*sizeof(unsigned int));
               DEBUG_NEW(array217->id);
            }
            for (int i = 0; i < array216->size; i++) {
               array216->data[i]--;
            }
            for (int i = 0; i < array215->size; i++) {
               if (array215->data[i] == 43) { 
                  return array215;
               }
            }
            array217->refC--;
            if(array217->refC == 0) {
               free(array217->data);
               free(array217);
               DEBUG_FREE(array217->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array209;
         params0.data[1] = array215;
         params0.data[2] = array216;
         array_t* array218 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array218->id);
         free(params0.data);
         array218->refC--;
         if(array218->refC == 0) {
            free(array218->data);
            free(array218);
            DEBUG_FREE(array218->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array209;
      params0.data[1] = array215;
      params0.data[2] = array216;
      array_t* array219 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array219->id);
      free(params0.data);
      array219->refC--;
      if(array219->refC == 0) {
         free(array219->data);
         free(array219);
         DEBUG_FREE(array219->id);
      }
      array216->refC--;
      if(array216->refC == 0) {
         free(array216->data);
         free(array216);
         DEBUG_FREE(array216->id);
      }
      array215->refC--;
      if(array215->refC == 0) {
         free(array215->data);
         free(array215);
         DEBUG_FREE(array215->id);
      }
   }
   unsigned int loop85 = 0;
   unsigned int loopLimit85 = (rand()%loopsFactor)/2 + 1;
   for(; loop85 < loopLimit85; loop85++) {
      for (int i = 0; i < array209->size; i++) {
         array209->data[i]++;
      }
      array_t* array220;
      if (pCounter > 0) {
         array220 = vars->data[--pCounter];
         array220->refC++;
         DEBUG_COPY(array220->id);
      } else {
         array220 = (array_t*)malloc(sizeof(array_t));
         array220->size = 762;
         array220->refC = 1;
         array220->id = 220;
         array220->data = (unsigned int*)malloc(array220->size*sizeof(unsigned int));
         memset(array220->data, 0, array220->size*sizeof(unsigned int));
         DEBUG_NEW(array220->id);
      }
      for (int i = 0; i < array220->size; i++) {
         array220->data[i]++;
      }
      for (int i = 0; i < array209->size; i++) {
         if (array209->data[i] == 19) { 
            return array209;
         }
      }
      for (int i = 0; i < array209->size; i++) {
         array209->data[i]--;
      }
      array_t* array221;
      if (pCounter > 0) {
         array221 = vars->data[--pCounter];
         array221->refC++;
         DEBUG_COPY(array221->id);
      } else {
         array221 = (array_t*)malloc(sizeof(array_t));
         array221->size = 732;
         array221->refC = 1;
         array221->id = 221;
         array221->data = (unsigned int*)malloc(array221->size*sizeof(unsigned int));
         memset(array221->data, 0, array221->size*sizeof(unsigned int));
         DEBUG_NEW(array221->id);
      }
      if(PATH0 & 8) {
         unsigned int loop86 = 0;
         unsigned int loopLimit86 = (rand()%loopsFactor)/3 + 1;
         for(; loop86 < loopLimit86; loop86++) {
            array_t* array222;
            if (pCounter > 0) {
               array222 = vars->data[--pCounter];
               array222->refC++;
               DEBUG_COPY(array222->id);
            } else {
               array222 = (array_t*)malloc(sizeof(array_t));
               array222->size = 294;
               array222->refC = 1;
               array222->id = 222;
               array222->data = (unsigned int*)malloc(array222->size*sizeof(unsigned int));
               memset(array222->data, 0, array222->size*sizeof(unsigned int));
               DEBUG_NEW(array222->id);
            }
            for (int i = 0; i < array220->size; i++) {
               array220->data[i]--;
            }
            for (int i = 0; i < array221->size; i++) {
               if (array221->data[i] == 35) { 
                  return array221;
               }
            }
            array222->refC--;
            if(array222->refC == 0) {
               free(array222->data);
               free(array222);
               DEBUG_FREE(array222->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array209;
         params0.data[1] = array220;
         params0.data[2] = array221;
         array_t* array223 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array223->id);
         free(params0.data);
         array223->refC--;
         if(array223->refC == 0) {
            free(array223->data);
            free(array223);
            DEBUG_FREE(array223->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array209;
      params0.data[1] = array220;
      params0.data[2] = array221;
      array_t* array224 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array224->id);
      free(params0.data);
      array224->refC--;
      if(array224->refC == 0) {
         free(array224->data);
         free(array224);
         DEBUG_FREE(array224->id);
      }
      array221->refC--;
      if(array221->refC == 0) {
         free(array221->data);
         free(array221);
         DEBUG_FREE(array221->id);
      }
      array220->refC--;
      if(array220->refC == 0) {
         free(array220->data);
         free(array220);
         DEBUG_FREE(array220->id);
      }
   }
   return array209;
}

