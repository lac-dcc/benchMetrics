#include "fourth_example.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array172;
   if (pCounter > 0) {
      array172 = vars->data[--pCounter];
      array172->refC++;
      DEBUG_COPY(array172->id);
   } else {
      array172 = (array_t*)malloc(sizeof(array_t));
      array172->size = 987;
      array172->refC = 1;
      array172->id = 172;
      array172->data = (unsigned int*)malloc(array172->size*sizeof(unsigned int));
      memset(array172->data, 0, array172->size*sizeof(unsigned int));
      DEBUG_NEW(array172->id);
   }
   if(PATH0 & 1) {
      unsigned int loop68 = 0;
      unsigned int loopLimit68 = (rand()%loopsFactor)/2 + 1;
      for(; loop68 < loopLimit68; loop68++) {
         for (int i = 0; i < array172->size; i++) {
            array172->data[i]--;
         }
      }
      array_t* array173;
      if (pCounter > 0) {
         array173 = vars->data[--pCounter];
         array173->refC++;
         DEBUG_COPY(array173->id);
      } else {
         array173 = (array_t*)malloc(sizeof(array_t));
         array173->size = 338;
         array173->refC = 1;
         array173->id = 173;
         array173->data = (unsigned int*)malloc(array173->size*sizeof(unsigned int));
         memset(array173->data, 0, array173->size*sizeof(unsigned int));
         DEBUG_NEW(array173->id);
      }
      if(PATH0 & 2) {
         unsigned int loop69 = 0;
         unsigned int loopLimit69 = (rand()%loopsFactor)/2 + 1;
         for(; loop69 < loopLimit69; loop69++) {
            array_t* array174;
            if (pCounter > 0) {
               array174 = vars->data[--pCounter];
               array174->refC++;
               DEBUG_COPY(array174->id);
            } else {
               array174 = (array_t*)malloc(sizeof(array_t));
               array174->size = 566;
               array174->refC = 1;
               array174->id = 174;
               array174->data = (unsigned int*)malloc(array174->size*sizeof(unsigned int));
               memset(array174->data, 0, array174->size*sizeof(unsigned int));
               DEBUG_NEW(array174->id);
            }
            for (int i = 0; i < array173->size; i++) {
               array173->data[i]--;
            }
            for (int i = 0; i < array173->size; i++) {
               if (array173->data[i] == 56) { 
                  return array173;
               }
            }
            array174->refC--;
            if(array174->refC == 0) {
               free(array174->data);
               free(array174);
               DEBUG_FREE(array174->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array172;
         params0.data[1] = array173;
         array_t* array175 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array175->id);
         free(params0.data);
         array175->refC--;
         if(array175->refC == 0) {
            free(array175->data);
            free(array175);
            DEBUG_FREE(array175->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array172;
      params0.data[1] = array173;
      array_t* array176 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array176->id);
      free(params0.data);
      unsigned int loop70 = 0;
      unsigned int loopLimit70 = (rand()%loopsFactor)/2 + 1;
      for(; loop70 < loopLimit70; loop70++) {
         for (int i = 0; i < array176->size; i++) {
            array176->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array172;
      params1.data[1] = array173;
      params1.data[2] = array176;
      array_t* array177 = func10(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array177->id);
      free(params1.data);
      array177->refC--;
      if(array177->refC == 0) {
         free(array177->data);
         free(array177);
         DEBUG_FREE(array177->id);
      }
      array176->refC--;
      if(array176->refC == 0) {
         free(array176->data);
         free(array176);
         DEBUG_FREE(array176->id);
      }
      array173->refC--;
      if(array173->refC == 0) {
         free(array173->data);
         free(array173);
         DEBUG_FREE(array173->id);
      }
   }
   else {
      array_t* array183;
      if (pCounter > 0) {
         array183 = vars->data[--pCounter];
         array183->refC++;
         DEBUG_COPY(array183->id);
      } else {
         array183 = (array_t*)malloc(sizeof(array_t));
         array183->size = 459;
         array183->refC = 1;
         array183->id = 183;
         array183->data = (unsigned int*)malloc(array183->size*sizeof(unsigned int));
         memset(array183->data, 0, array183->size*sizeof(unsigned int));
         DEBUG_NEW(array183->id);
      }
      for (int i = 0; i < array172->size; i++) {
         array172->data[i]++;
      }
      for (int i = 0; i < array172->size; i++) {
         if (array172->data[i] == 25) { 
            return array172;
         }
      }
      for (int i = 0; i < array172->size; i++) {
         array172->data[i]--;
      }
      array_t* array184;
      if (pCounter > 0) {
         array184 = vars->data[--pCounter];
         array184->refC++;
         DEBUG_COPY(array184->id);
      } else {
         array184 = (array_t*)malloc(sizeof(array_t));
         array184->size = 74;
         array184->refC = 1;
         array184->id = 184;
         array184->data = (unsigned int*)malloc(array184->size*sizeof(unsigned int));
         memset(array184->data, 0, array184->size*sizeof(unsigned int));
         DEBUG_NEW(array184->id);
      }
      if(PATH0 & 4) {
         unsigned int loop72 = 0;
         unsigned int loopLimit72 = (rand()%loopsFactor)/2 + 1;
         for(; loop72 < loopLimit72; loop72++) {
            array_t* array185;
            if (pCounter > 0) {
               array185 = vars->data[--pCounter];
               array185->refC++;
               DEBUG_COPY(array185->id);
            } else {
               array185 = (array_t*)malloc(sizeof(array_t));
               array185->size = 233;
               array185->refC = 1;
               array185->id = 185;
               array185->data = (unsigned int*)malloc(array185->size*sizeof(unsigned int));
               memset(array185->data, 0, array185->size*sizeof(unsigned int));
               DEBUG_NEW(array185->id);
            }
            for (int i = 0; i < array183->size; i++) {
               array183->data[i]--;
            }
            for (int i = 0; i < array183->size; i++) {
               if (array183->data[i] == 93) { 
                  return array183;
               }
            }
            array185->refC--;
            if(array185->refC == 0) {
               free(array185->data);
               free(array185);
               DEBUG_FREE(array185->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array172;
         params0.data[1] = array183;
         params0.data[2] = array184;
         array_t* array186 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array186->id);
         free(params0.data);
         array186->refC--;
         if(array186->refC == 0) {
            free(array186->data);
            free(array186);
            DEBUG_FREE(array186->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array172;
      params0.data[1] = array183;
      params0.data[2] = array184;
      array_t* array187 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array187->id);
      free(params0.data);
      array187->refC--;
      if(array187->refC == 0) {
         free(array187->data);
         free(array187);
         DEBUG_FREE(array187->id);
      }
      array184->refC--;
      if(array184->refC == 0) {
         free(array184->data);
         free(array184);
         DEBUG_FREE(array184->id);
      }
      array183->refC--;
      if(array183->refC == 0) {
         free(array183->data);
         free(array183);
         DEBUG_FREE(array183->id);
      }
   }
   unsigned int loop73 = 0;
   unsigned int loopLimit73 = (rand()%loopsFactor)/2 + 1;
   for(; loop73 < loopLimit73; loop73++) {
      for (int i = 0; i < array172->size; i++) {
         array172->data[i]++;
      }
      array_t* array188;
      if (pCounter > 0) {
         array188 = vars->data[--pCounter];
         array188->refC++;
         DEBUG_COPY(array188->id);
      } else {
         array188 = (array_t*)malloc(sizeof(array_t));
         array188->size = 569;
         array188->refC = 1;
         array188->id = 188;
         array188->data = (unsigned int*)malloc(array188->size*sizeof(unsigned int));
         memset(array188->data, 0, array188->size*sizeof(unsigned int));
         DEBUG_NEW(array188->id);
      }
      for (int i = 0; i < array188->size; i++) {
         array188->data[i]++;
      }
      for (int i = 0; i < array172->size; i++) {
         if (array172->data[i] == 94) { 
            return array172;
         }
      }
      for (int i = 0; i < array188->size; i++) {
         array188->data[i]--;
      }
      array_t* array189;
      if (pCounter > 0) {
         array189 = vars->data[--pCounter];
         array189->refC++;
         DEBUG_COPY(array189->id);
      } else {
         array189 = (array_t*)malloc(sizeof(array_t));
         array189->size = 847;
         array189->refC = 1;
         array189->id = 189;
         array189->data = (unsigned int*)malloc(array189->size*sizeof(unsigned int));
         memset(array189->data, 0, array189->size*sizeof(unsigned int));
         DEBUG_NEW(array189->id);
      }
      if(PATH0 & 8) {
         unsigned int loop74 = 0;
         unsigned int loopLimit74 = (rand()%loopsFactor)/3 + 1;
         for(; loop74 < loopLimit74; loop74++) {
            array_t* array190;
            if (pCounter > 0) {
               array190 = vars->data[--pCounter];
               array190->refC++;
               DEBUG_COPY(array190->id);
            } else {
               array190 = (array_t*)malloc(sizeof(array_t));
               array190->size = 431;
               array190->refC = 1;
               array190->id = 190;
               array190->data = (unsigned int*)malloc(array190->size*sizeof(unsigned int));
               memset(array190->data, 0, array190->size*sizeof(unsigned int));
               DEBUG_NEW(array190->id);
            }
            for (int i = 0; i < array189->size; i++) {
               array189->data[i]--;
            }
            for (int i = 0; i < array189->size; i++) {
               if (array189->data[i] == 90) { 
                  return array189;
               }
            }
            array190->refC--;
            if(array190->refC == 0) {
               free(array190->data);
               free(array190);
               DEBUG_FREE(array190->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array172;
         params0.data[1] = array188;
         params0.data[2] = array189;
         array_t* array191 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array191->id);
         free(params0.data);
         array191->refC--;
         if(array191->refC == 0) {
            free(array191->data);
            free(array191);
            DEBUG_FREE(array191->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array172;
      params0.data[1] = array188;
      params0.data[2] = array189;
      array_t* array192 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array192->id);
      free(params0.data);
      array192->refC--;
      if(array192->refC == 0) {
         free(array192->data);
         free(array192);
         DEBUG_FREE(array192->id);
      }
      array189->refC--;
      if(array189->refC == 0) {
         free(array189->data);
         free(array189);
         DEBUG_FREE(array189->id);
      }
      array188->refC--;
      if(array188->refC == 0) {
         free(array188->data);
         free(array188);
         DEBUG_FREE(array188->id);
      }
   }
   return array172;
}

