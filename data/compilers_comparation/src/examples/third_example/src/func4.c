#include "third_example.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array155;
   if (pCounter > 0) {
      array155 = vars->data[--pCounter];
      array155->refC++;
      DEBUG_COPY(array155->id);
   } else {
      array155 = (array_t*)malloc(sizeof(array_t));
      array155->size = 761;
      array155->refC = 1;
      array155->id = 155;
      array155->data = (unsigned int*)malloc(array155->size*sizeof(unsigned int));
      memset(array155->data, 0, array155->size*sizeof(unsigned int));
      DEBUG_NEW(array155->id);
   }
   if(PATH0 & 1) {
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         for (int i = 0; i < array155->size; i++) {
            array155->data[i]--;
         }
      }
      array_t* array156;
      if (pCounter > 0) {
         array156 = vars->data[--pCounter];
         array156->refC++;
         DEBUG_COPY(array156->id);
      } else {
         array156 = (array_t*)malloc(sizeof(array_t));
         array156->size = 309;
         array156->refC = 1;
         array156->id = 156;
         array156->data = (unsigned int*)malloc(array156->size*sizeof(unsigned int));
         memset(array156->data, 0, array156->size*sizeof(unsigned int));
         DEBUG_NEW(array156->id);
      }
      if(PATH0 & 2) {
         unsigned int loop62 = 0;
         unsigned int loopLimit62 = (rand()%loopsFactor)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            array_t* array157;
            if (pCounter > 0) {
               array157 = vars->data[--pCounter];
               array157->refC++;
               DEBUG_COPY(array157->id);
            } else {
               array157 = (array_t*)malloc(sizeof(array_t));
               array157->size = 190;
               array157->refC = 1;
               array157->id = 157;
               array157->data = (unsigned int*)malloc(array157->size*sizeof(unsigned int));
               memset(array157->data, 0, array157->size*sizeof(unsigned int));
               DEBUG_NEW(array157->id);
            }
            for (int i = 0; i < array155->size; i++) {
               array155->data[i]--;
            }
            for (int i = 0; i < array157->size; i++) {
               if (array157->data[i] == 67) { 
                  return array157;
               }
            }
            array157->refC--;
            if(array157->refC == 0) {
               free(array157->data);
               free(array157);
               DEBUG_FREE(array157->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array155;
         params0.data[1] = array156;
         array_t* array158 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array158->id);
         free(params0.data);
         array158->refC--;
         if(array158->refC == 0) {
            free(array158->data);
            free(array158);
            DEBUG_FREE(array158->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array155;
      params0.data[1] = array156;
      array_t* array159 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array159->id);
      free(params0.data);
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         for (int i = 0; i < array156->size; i++) {
            array156->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array155;
      params1.data[1] = array156;
      params1.data[2] = array159;
      array_t* array160 = func5(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array160->id);
      free(params1.data);
      array160->refC--;
      if(array160->refC == 0) {
         free(array160->data);
         free(array160);
         DEBUG_FREE(array160->id);
      }
      array159->refC--;
      if(array159->refC == 0) {
         free(array159->data);
         free(array159);
         DEBUG_FREE(array159->id);
      }
      array156->refC--;
      if(array156->refC == 0) {
         free(array156->data);
         free(array156);
         DEBUG_FREE(array156->id);
      }
   }
   else {
      array_t* array161;
      if (pCounter > 0) {
         array161 = vars->data[--pCounter];
         array161->refC++;
         DEBUG_COPY(array161->id);
      } else {
         array161 = (array_t*)malloc(sizeof(array_t));
         array161->size = 168;
         array161->refC = 1;
         array161->id = 161;
         array161->data = (unsigned int*)malloc(array161->size*sizeof(unsigned int));
         memset(array161->data, 0, array161->size*sizeof(unsigned int));
         DEBUG_NEW(array161->id);
      }
      for (int i = 0; i < array161->size; i++) {
         array161->data[i]++;
      }
      for (int i = 0; i < array155->size; i++) {
         if (array155->data[i] == 12) { 
            return array155;
         }
      }
      for (int i = 0; i < array155->size; i++) {
         array155->data[i]--;
      }
      array_t* array162;
      if (pCounter > 0) {
         array162 = vars->data[--pCounter];
         array162->refC++;
         DEBUG_COPY(array162->id);
      } else {
         array162 = (array_t*)malloc(sizeof(array_t));
         array162->size = 100;
         array162->refC = 1;
         array162->id = 162;
         array162->data = (unsigned int*)malloc(array162->size*sizeof(unsigned int));
         memset(array162->data, 0, array162->size*sizeof(unsigned int));
         DEBUG_NEW(array162->id);
      }
      if(PATH0 & 4) {
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            array_t* array163;
            if (pCounter > 0) {
               array163 = vars->data[--pCounter];
               array163->refC++;
               DEBUG_COPY(array163->id);
            } else {
               array163 = (array_t*)malloc(sizeof(array_t));
               array163->size = 346;
               array163->refC = 1;
               array163->id = 163;
               array163->data = (unsigned int*)malloc(array163->size*sizeof(unsigned int));
               memset(array163->data, 0, array163->size*sizeof(unsigned int));
               DEBUG_NEW(array163->id);
            }
            for (int i = 0; i < array162->size; i++) {
               array162->data[i]--;
            }
            for (int i = 0; i < array162->size; i++) {
               if (array162->data[i] == 16) { 
                  return array162;
               }
            }
            array163->refC--;
            if(array163->refC == 0) {
               free(array163->data);
               free(array163);
               DEBUG_FREE(array163->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array155;
         params0.data[1] = array161;
         params0.data[2] = array162;
         array_t* array164 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array164->id);
         free(params0.data);
         array164->refC--;
         if(array164->refC == 0) {
            free(array164->data);
            free(array164);
            DEBUG_FREE(array164->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array155;
      params0.data[1] = array161;
      params0.data[2] = array162;
      array_t* array165 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array165->id);
      free(params0.data);
      array165->refC--;
      if(array165->refC == 0) {
         free(array165->data);
         free(array165);
         DEBUG_FREE(array165->id);
      }
      array162->refC--;
      if(array162->refC == 0) {
         free(array162->data);
         free(array162);
         DEBUG_FREE(array162->id);
      }
      array161->refC--;
      if(array161->refC == 0) {
         free(array161->data);
         free(array161);
         DEBUG_FREE(array161->id);
      }
   }
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      for (int i = 0; i < array155->size; i++) {
         array155->data[i]++;
      }
      array_t* array166;
      if (pCounter > 0) {
         array166 = vars->data[--pCounter];
         array166->refC++;
         DEBUG_COPY(array166->id);
      } else {
         array166 = (array_t*)malloc(sizeof(array_t));
         array166->size = 647;
         array166->refC = 1;
         array166->id = 166;
         array166->data = (unsigned int*)malloc(array166->size*sizeof(unsigned int));
         memset(array166->data, 0, array166->size*sizeof(unsigned int));
         DEBUG_NEW(array166->id);
      }
      for (int i = 0; i < array155->size; i++) {
         array155->data[i]++;
      }
      for (int i = 0; i < array166->size; i++) {
         if (array166->data[i] == 80) { 
            return array166;
         }
      }
      for (int i = 0; i < array166->size; i++) {
         array166->data[i]--;
      }
      array_t* array167;
      if (pCounter > 0) {
         array167 = vars->data[--pCounter];
         array167->refC++;
         DEBUG_COPY(array167->id);
      } else {
         array167 = (array_t*)malloc(sizeof(array_t));
         array167->size = 593;
         array167->refC = 1;
         array167->id = 167;
         array167->data = (unsigned int*)malloc(array167->size*sizeof(unsigned int));
         memset(array167->data, 0, array167->size*sizeof(unsigned int));
         DEBUG_NEW(array167->id);
      }
      if(PATH0 & 8) {
         unsigned int loop66 = 0;
         unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
         for(; loop66 < loopLimit66; loop66++) {
            array_t* array168;
            if (pCounter > 0) {
               array168 = vars->data[--pCounter];
               array168->refC++;
               DEBUG_COPY(array168->id);
            } else {
               array168 = (array_t*)malloc(sizeof(array_t));
               array168->size = 857;
               array168->refC = 1;
               array168->id = 168;
               array168->data = (unsigned int*)malloc(array168->size*sizeof(unsigned int));
               memset(array168->data, 0, array168->size*sizeof(unsigned int));
               DEBUG_NEW(array168->id);
            }
            for (int i = 0; i < array168->size; i++) {
               array168->data[i]--;
            }
            for (int i = 0; i < array155->size; i++) {
               if (array155->data[i] == 86) { 
                  return array155;
               }
            }
            array168->refC--;
            if(array168->refC == 0) {
               free(array168->data);
               free(array168);
               DEBUG_FREE(array168->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array155;
         params0.data[1] = array166;
         params0.data[2] = array167;
         array_t* array169 = func11(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array169->id);
         free(params0.data);
         array169->refC--;
         if(array169->refC == 0) {
            free(array169->data);
            free(array169);
            DEBUG_FREE(array169->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array155;
      params0.data[1] = array166;
      params0.data[2] = array167;
      array_t* array170 = func8(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array170->id);
      free(params0.data);
      array170->refC--;
      if(array170->refC == 0) {
         free(array170->data);
         free(array170);
         DEBUG_FREE(array170->id);
      }
      array167->refC--;
      if(array167->refC == 0) {
         free(array167->data);
         free(array167);
         DEBUG_FREE(array167->id);
      }
      array166->refC--;
      if(array166->refC == 0) {
         free(array166->data);
         free(array166);
         DEBUG_FREE(array166->id);
      }
   }
   return array155;
}

