#include "second_example.h" 
array_t* func16(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array155;
   if (pCounter > 0) {
      array155 = vars->data[--pCounter];
      array155->refC++;
      DEBUG_COPY(array155->id);
   } else {
      array155 = (array_t*)malloc(sizeof(array_t));
      array155->size = 261;
      array155->refC = 1;
      array155->id = 155;
      array155->data = (unsigned int*)malloc(array155->size*sizeof(unsigned int));
      memset(array155->data, 0, array155->size*sizeof(unsigned int));
      DEBUG_NEW(array155->id);
   }
   unsigned int loop46 = 0;
   unsigned int loopLimit46 = (rand()%loopsFactor)/3 + 1;
   for(; loop46 < loopLimit46; loop46++) {
      if(PATH0 & 1) {
         array_t* array156;
         if (pCounter > 0) {
            array156 = vars->data[--pCounter];
            array156->refC++;
            DEBUG_COPY(array156->id);
         } else {
            array156 = (array_t*)malloc(sizeof(array_t));
            array156->size = 42;
            array156->refC = 1;
            array156->id = 156;
            array156->data = (unsigned int*)malloc(array156->size*sizeof(unsigned int));
            memset(array156->data, 0, array156->size*sizeof(unsigned int));
            DEBUG_NEW(array156->id);
         }
         unsigned int loop47 = 0;
         unsigned int loopLimit47 = (rand()%loopsFactor)/4 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            for (int i = 0; i < array155->size; i++) {
               array155->data[i]--;
            }
            for (int i = 0; i < array156->size; i++) {
               if (array156->data[i] == 23) { 
                  return array156;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array155;
         params0.data[1] = array156;
         array_t* array157 = func36(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array157->id);
         free(params0.data);
         array157->refC--;
         if(array157->refC == 0) {
            free(array157->data);
            free(array157);
            DEBUG_FREE(array157->id);
         }
         array156->refC--;
         if(array156->refC == 0) {
            free(array156->data);
            free(array156);
            DEBUG_FREE(array156->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array155;
         array_t* array158 = func32(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array158->id);
         free(params0.data);
         array158->refC--;
         if(array158->refC == 0) {
            free(array158->data);
            free(array158);
            DEBUG_FREE(array158->id);
         }
      }
      array_t* array159;
      if (pCounter > 0) {
         array159 = vars->data[--pCounter];
         array159->refC++;
         DEBUG_COPY(array159->id);
      } else {
         array159 = (array_t*)malloc(sizeof(array_t));
         array159->size = 425;
         array159->refC = 1;
         array159->id = 159;
         array159->data = (unsigned int*)malloc(array159->size*sizeof(unsigned int));
         memset(array159->data, 0, array159->size*sizeof(unsigned int));
         DEBUG_NEW(array159->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array155;
      params0.data[1] = array159;
      array_t* array160 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array160->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array161;
         if (pCounter > 0) {
            array161 = vars->data[--pCounter];
            array161->refC++;
            DEBUG_COPY(array161->id);
         } else {
            array161 = (array_t*)malloc(sizeof(array_t));
            array161->size = 677;
            array161->refC = 1;
            array161->id = 161;
            array161->data = (unsigned int*)malloc(array161->size*sizeof(unsigned int));
            memset(array161->data, 0, array161->size*sizeof(unsigned int));
            DEBUG_NEW(array161->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (rand()%loopsFactor)/4 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array160->size; i++) {
               array160->data[i]--;
            }
            for (int i = 0; i < array160->size; i++) {
               if (array160->data[i] == 26) { 
                  return array160;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array155;
         params1.data[1] = array159;
         params1.data[2] = array160;
         params1.data[3] = array161;
         array_t* array162 = func42(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array162->id);
         free(params1.data);
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
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array155;
         params1.data[1] = array159;
         params1.data[2] = array160;
         array_t* array163 = func34(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array163->id);
         free(params1.data);
         array163->refC--;
         if(array163->refC == 0) {
            free(array163->data);
            free(array163);
            DEBUG_FREE(array163->id);
         }
      }
      for (int i = 0; i < array155->size; i++) {
         if (array155->data[i] == 58) { 
            return array155;
         }
      }
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
   }
   for (int i = 0; i < array155->size; i++) {
      array155->data[i]--;
   }
   for (int i = 0; i < array155->size; i++) {
      if (array155->data[i] == 0) { 
         return array155;
      }
   }
   return array155;
}

