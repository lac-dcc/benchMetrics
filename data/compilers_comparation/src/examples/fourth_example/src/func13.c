#include "fourth_example.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array146;
   if (pCounter > 0) {
      array146 = vars->data[--pCounter];
      array146->refC++;
      DEBUG_COPY(array146->id);
   } else {
      array146 = (array_t*)malloc(sizeof(array_t));
      array146->size = 343;
      array146->refC = 1;
      array146->id = 146;
      array146->data = (unsigned int*)malloc(array146->size*sizeof(unsigned int));
      memset(array146->data, 0, array146->size*sizeof(unsigned int));
      DEBUG_NEW(array146->id);
   }
   if(PATH0 & 1) {
      unsigned int loop57 = 0;
      unsigned int loopLimit57 = (rand()%loopsFactor)/2 + 1;
      for(; loop57 < loopLimit57; loop57++) {
         for (int i = 0; i < array146->size; i++) {
            array146->data[i]--;
         }
      }
      array_t* array147;
      if (pCounter > 0) {
         array147 = vars->data[--pCounter];
         array147->refC++;
         DEBUG_COPY(array147->id);
      } else {
         array147 = (array_t*)malloc(sizeof(array_t));
         array147->size = 177;
         array147->refC = 1;
         array147->id = 147;
         array147->data = (unsigned int*)malloc(array147->size*sizeof(unsigned int));
         memset(array147->data, 0, array147->size*sizeof(unsigned int));
         DEBUG_NEW(array147->id);
      }
      if(PATH0 & 2) {
         unsigned int loop58 = 0;
         unsigned int loopLimit58 = (rand()%loopsFactor)/2 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            array_t* array148;
            if (pCounter > 0) {
               array148 = vars->data[--pCounter];
               array148->refC++;
               DEBUG_COPY(array148->id);
            } else {
               array148 = (array_t*)malloc(sizeof(array_t));
               array148->size = 900;
               array148->refC = 1;
               array148->id = 148;
               array148->data = (unsigned int*)malloc(array148->size*sizeof(unsigned int));
               memset(array148->data, 0, array148->size*sizeof(unsigned int));
               DEBUG_NEW(array148->id);
            }
            for (int i = 0; i < array147->size; i++) {
               array147->data[i]--;
            }
            for (int i = 0; i < array148->size; i++) {
               if (array148->data[i] == 49) { 
                  return array148;
               }
            }
            array148->refC--;
            if(array148->refC == 0) {
               free(array148->data);
               free(array148);
               DEBUG_FREE(array148->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array146;
         params0.data[1] = array147;
         array_t* array149 = func20(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array149->id);
         free(params0.data);
         array149->refC--;
         if(array149->refC == 0) {
            free(array149->data);
            free(array149);
            DEBUG_FREE(array149->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array146;
      params0.data[1] = array147;
      array_t* array150 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array150->id);
      free(params0.data);
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         for (int i = 0; i < array150->size; i++) {
            array150->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array146;
      params1.data[1] = array147;
      params1.data[2] = array150;
      array_t* array151 = func14(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array151->id);
      free(params1.data);
      array151->refC--;
      if(array151->refC == 0) {
         free(array151->data);
         free(array151);
         DEBUG_FREE(array151->id);
      }
      array150->refC--;
      if(array150->refC == 0) {
         free(array150->data);
         free(array150);
         DEBUG_FREE(array150->id);
      }
      array147->refC--;
      if(array147->refC == 0) {
         free(array147->data);
         free(array147);
         DEBUG_FREE(array147->id);
      }
   }
   else {
      array_t* array152;
      if (pCounter > 0) {
         array152 = vars->data[--pCounter];
         array152->refC++;
         DEBUG_COPY(array152->id);
      } else {
         array152 = (array_t*)malloc(sizeof(array_t));
         array152->size = 829;
         array152->refC = 1;
         array152->id = 152;
         array152->data = (unsigned int*)malloc(array152->size*sizeof(unsigned int));
         memset(array152->data, 0, array152->size*sizeof(unsigned int));
         DEBUG_NEW(array152->id);
      }
      for (int i = 0; i < array146->size; i++) {
         array146->data[i]++;
      }
      for (int i = 0; i < array146->size; i++) {
         if (array146->data[i] == 40) { 
            return array146;
         }
      }
      for (int i = 0; i < array152->size; i++) {
         array152->data[i]--;
      }
      array_t* array153;
      if (pCounter > 0) {
         array153 = vars->data[--pCounter];
         array153->refC++;
         DEBUG_COPY(array153->id);
      } else {
         array153 = (array_t*)malloc(sizeof(array_t));
         array153->size = 569;
         array153->refC = 1;
         array153->id = 153;
         array153->data = (unsigned int*)malloc(array153->size*sizeof(unsigned int));
         memset(array153->data, 0, array153->size*sizeof(unsigned int));
         DEBUG_NEW(array153->id);
      }
      if(PATH0 & 4) {
         unsigned int loop60 = 0;
         unsigned int loopLimit60 = (rand()%loopsFactor)/2 + 1;
         for(; loop60 < loopLimit60; loop60++) {
            array_t* array154;
            if (pCounter > 0) {
               array154 = vars->data[--pCounter];
               array154->refC++;
               DEBUG_COPY(array154->id);
            } else {
               array154 = (array_t*)malloc(sizeof(array_t));
               array154->size = 826;
               array154->refC = 1;
               array154->id = 154;
               array154->data = (unsigned int*)malloc(array154->size*sizeof(unsigned int));
               memset(array154->data, 0, array154->size*sizeof(unsigned int));
               DEBUG_NEW(array154->id);
            }
            for (int i = 0; i < array146->size; i++) {
               array146->data[i]--;
            }
            for (int i = 0; i < array152->size; i++) {
               if (array152->data[i] == 42) { 
                  return array152;
               }
            }
            array154->refC--;
            if(array154->refC == 0) {
               free(array154->data);
               free(array154);
               DEBUG_FREE(array154->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array146;
         params0.data[1] = array152;
         params0.data[2] = array153;
         array_t* array155 = func20(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array155->id);
         free(params0.data);
         array155->refC--;
         if(array155->refC == 0) {
            free(array155->data);
            free(array155);
            DEBUG_FREE(array155->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array146;
      params0.data[1] = array152;
      params0.data[2] = array153;
      array_t* array156 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array156->id);
      free(params0.data);
      array156->refC--;
      if(array156->refC == 0) {
         free(array156->data);
         free(array156);
         DEBUG_FREE(array156->id);
      }
      array153->refC--;
      if(array153->refC == 0) {
         free(array153->data);
         free(array153);
         DEBUG_FREE(array153->id);
      }
      array152->refC--;
      if(array152->refC == 0) {
         free(array152->data);
         free(array152);
         DEBUG_FREE(array152->id);
      }
   }
   unsigned int loop61 = 0;
   unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
   for(; loop61 < loopLimit61; loop61++) {
      for (int i = 0; i < array146->size; i++) {
         array146->data[i]++;
      }
      array_t* array157;
      if (pCounter > 0) {
         array157 = vars->data[--pCounter];
         array157->refC++;
         DEBUG_COPY(array157->id);
      } else {
         array157 = (array_t*)malloc(sizeof(array_t));
         array157->size = 309;
         array157->refC = 1;
         array157->id = 157;
         array157->data = (unsigned int*)malloc(array157->size*sizeof(unsigned int));
         memset(array157->data, 0, array157->size*sizeof(unsigned int));
         DEBUG_NEW(array157->id);
      }
      for (int i = 0; i < array146->size; i++) {
         array146->data[i]++;
      }
      for (int i = 0; i < array157->size; i++) {
         if (array157->data[i] == 96) { 
            return array157;
         }
      }
      for (int i = 0; i < array157->size; i++) {
         array157->data[i]--;
      }
      array_t* array158;
      if (pCounter > 0) {
         array158 = vars->data[--pCounter];
         array158->refC++;
         DEBUG_COPY(array158->id);
      } else {
         array158 = (array_t*)malloc(sizeof(array_t));
         array158->size = 677;
         array158->refC = 1;
         array158->id = 158;
         array158->data = (unsigned int*)malloc(array158->size*sizeof(unsigned int));
         memset(array158->data, 0, array158->size*sizeof(unsigned int));
         DEBUG_NEW(array158->id);
      }
      if(PATH0 & 8) {
         unsigned int loop62 = 0;
         unsigned int loopLimit62 = (rand()%loopsFactor)/3 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            array_t* array159;
            if (pCounter > 0) {
               array159 = vars->data[--pCounter];
               array159->refC++;
               DEBUG_COPY(array159->id);
            } else {
               array159 = (array_t*)malloc(sizeof(array_t));
               array159->size = 234;
               array159->refC = 1;
               array159->id = 159;
               array159->data = (unsigned int*)malloc(array159->size*sizeof(unsigned int));
               memset(array159->data, 0, array159->size*sizeof(unsigned int));
               DEBUG_NEW(array159->id);
            }
            for (int i = 0; i < array158->size; i++) {
               array158->data[i]--;
            }
            for (int i = 0; i < array158->size; i++) {
               if (array158->data[i] == 24) { 
                  return array158;
               }
            }
            array159->refC--;
            if(array159->refC == 0) {
               free(array159->data);
               free(array159);
               DEBUG_FREE(array159->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array146;
         params0.data[1] = array157;
         params0.data[2] = array158;
         array_t* array160 = func20(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array160->id);
         free(params0.data);
         array160->refC--;
         if(array160->refC == 0) {
            free(array160->data);
            free(array160);
            DEBUG_FREE(array160->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array146;
      params0.data[1] = array157;
      params0.data[2] = array158;
      array_t* array161 = func17(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array161->id);
      free(params0.data);
      array161->refC--;
      if(array161->refC == 0) {
         free(array161->data);
         free(array161);
         DEBUG_FREE(array161->id);
      }
      array158->refC--;
      if(array158->refC == 0) {
         free(array158->data);
         free(array158);
         DEBUG_FREE(array158->id);
      }
      array157->refC--;
      if(array157->refC == 0) {
         free(array157->data);
         free(array157);
         DEBUG_FREE(array157->id);
      }
   }
   return array146;
}

