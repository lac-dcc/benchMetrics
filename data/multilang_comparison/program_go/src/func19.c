#include "program_go.h" 
array_t* func19(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (rand()%loopsFactor)/3 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         array_t* array158;
         if (pCounter > 0) {
            array158 = vars->data[--pCounter];
            array158->refC++;
            DEBUG_COPY(array158->id);
         } else {
            array158 = (array_t*)malloc(sizeof(array_t));
            array158->size = 367;
            array158->refC = 1;
            array158->id = 158;
            array158->data = (unsigned int*)malloc(array158->size*sizeof(unsigned int));
            memset(array158->data, 0, array158->size*sizeof(unsigned int));
            DEBUG_NEW(array158->id);
         }
         unsigned int loop48 = 0;
         unsigned int loopLimit48 = (rand()%loopsFactor)/4 + 1;
         for(; loop48 < loopLimit48; loop48++) {
            for (int i = 0; i < array158->size; i++) {
               array158->data[i]--;
            }
            for (int i = 0; i < array158->size; i++) {
               if (array158->data[i] == 90) { 
                  return array158;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array158;
         array_t* array159 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array159->id);
         free(params0.data);
         array159->refC--;
         if(array159->refC == 0) {
            free(array159->data);
            free(array159);
            DEBUG_FREE(array159->id);
         }
         array158->refC--;
         if(array158->refC == 0) {
            free(array158->data);
            free(array158);
            DEBUG_FREE(array158->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array160 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array160->id);
         free(params0.data);
         array160->refC--;
         if(array160->refC == 0) {
            free(array160->data);
            free(array160);
            DEBUG_FREE(array160->id);
         }
      }
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
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array161;
      array_t* array162 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array162->id);
      free(params0.data);
      if(PATH0 & 2) {
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
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/4 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array162->size; i++) {
               array162->data[i]--;
            }
            for (int i = 0; i < array162->size; i++) {
               if (array162->data[i] == 46) { 
                  return array162;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array161;
         params1.data[1] = array162;
         params1.data[2] = array163;
         array_t* array164 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array164->id);
         free(params1.data);
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
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array161;
         params1.data[1] = array162;
         array_t* array165 = func34(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array165->id);
         free(params1.data);
         array165->refC--;
         if(array165->refC == 0) {
            free(array165->data);
            free(array165);
            DEBUG_FREE(array165->id);
         }
      }
      for (int i = 0; i < array161->size; i++) {
         if (array161->data[i] == 29) { 
            return array161;
         }
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
   array_t* array166;
   if (pCounter > 0) {
      array166 = vars->data[--pCounter];
      array166->refC++;
      DEBUG_COPY(array166->id);
   } else {
      array166 = (array_t*)malloc(sizeof(array_t));
      array166->size = 946;
      array166->refC = 1;
      array166->id = 166;
      array166->data = (unsigned int*)malloc(array166->size*sizeof(unsigned int));
      memset(array166->data, 0, array166->size*sizeof(unsigned int));
      DEBUG_NEW(array166->id);
   }
   return array166;
}

