#include "first_example.h" 
array_t* func7(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (rand()%loopsFactor)/2 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         array_t* array160;
         if (pCounter > 0) {
            array160 = vars->data[--pCounter];
            array160->refC++;
            DEBUG_COPY(array160->id);
         } else {
            array160 = (array_t*)malloc(sizeof(array_t));
            array160->size = 690;
            array160->refC = 1;
            array160->id = 160;
            array160->data = (unsigned int*)malloc(array160->size*sizeof(unsigned int));
            memset(array160->data, 0, array160->size*sizeof(unsigned int));
            DEBUG_NEW(array160->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (rand()%loopsFactor)/3 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array160->size; i++) {
               array160->data[i]--;
            }
            for (int i = 0; i < array160->size; i++) {
               if (array160->data[i] == 57) { 
                  return array160;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array160;
         array_t* array161 = func24(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array161->id);
         free(params0.data);
         array161->refC--;
         if(array161->refC == 0) {
            free(array161->data);
            free(array161);
            DEBUG_FREE(array161->id);
         }
         array160->refC--;
         if(array160->refC == 0) {
            free(array160->data);
            free(array160);
            DEBUG_FREE(array160->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array162 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array162->id);
         free(params0.data);
         array162->refC--;
         if(array162->refC == 0) {
            free(array162->data);
            free(array162);
            DEBUG_FREE(array162->id);
         }
      }
      array_t* array163;
      if (pCounter > 0) {
         array163 = vars->data[--pCounter];
         array163->refC++;
         DEBUG_COPY(array163->id);
      } else {
         array163 = (array_t*)malloc(sizeof(array_t));
         array163->size = 312;
         array163->refC = 1;
         array163->id = 163;
         array163->data = (unsigned int*)malloc(array163->size*sizeof(unsigned int));
         memset(array163->data, 0, array163->size*sizeof(unsigned int));
         DEBUG_NEW(array163->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array163;
      array_t* array164 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array164->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array165;
         if (pCounter > 0) {
            array165 = vars->data[--pCounter];
            array165->refC++;
            DEBUG_COPY(array165->id);
         } else {
            array165 = (array_t*)malloc(sizeof(array_t));
            array165->size = 346;
            array165->refC = 1;
            array165->id = 165;
            array165->data = (unsigned int*)malloc(array165->size*sizeof(unsigned int));
            memset(array165->data, 0, array165->size*sizeof(unsigned int));
            DEBUG_NEW(array165->id);
         }
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/3 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array163->size; i++) {
               array163->data[i]--;
            }
            for (int i = 0; i < array163->size; i++) {
               if (array163->data[i] == 16) { 
                  return array163;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array163;
         params1.data[1] = array164;
         params1.data[2] = array165;
         array_t* array166 = func28(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array166->id);
         free(params1.data);
         array166->refC--;
         if(array166->refC == 0) {
            free(array166->data);
            free(array166);
            DEBUG_FREE(array166->id);
         }
         array165->refC--;
         if(array165->refC == 0) {
            free(array165->data);
            free(array165);
            DEBUG_FREE(array165->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array163;
         params1.data[1] = array164;
         array_t* array167 = func22(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array167->id);
         free(params1.data);
         array167->refC--;
         if(array167->refC == 0) {
            free(array167->data);
            free(array167);
            DEBUG_FREE(array167->id);
         }
      }
      for (int i = 0; i < array163->size; i++) {
         if (array163->data[i] == 47) { 
            return array163;
         }
      }
      array164->refC--;
      if(array164->refC == 0) {
         free(array164->data);
         free(array164);
         DEBUG_FREE(array164->id);
      }
      array163->refC--;
      if(array163->refC == 0) {
         free(array163->data);
         free(array163);
         DEBUG_FREE(array163->id);
      }
   }
   array_t* array168;
   if (pCounter > 0) {
      array168 = vars->data[--pCounter];
      array168->refC++;
      DEBUG_COPY(array168->id);
   } else {
      array168 = (array_t*)malloc(sizeof(array_t));
      array168->size = 970;
      array168->refC = 1;
      array168->id = 168;
      array168->data = (unsigned int*)malloc(array168->size*sizeof(unsigned int));
      memset(array168->data, 0, array168->size*sizeof(unsigned int));
      DEBUG_NEW(array168->id);
   }
   return array168;
}

