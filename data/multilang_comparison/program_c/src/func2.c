#include "program_c.h" 
array_t* func2(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array215;
   if (pCounter > 0) {
      array215 = vars->data[--pCounter];
      array215->refC++;
      DEBUG_COPY(array215->id);
   } else {
      array215 = (array_t*)malloc(sizeof(array_t));
      array215->size = 993;
      array215->refC = 1;
      array215->id = 215;
      array215->data = (unsigned int*)malloc(array215->size*sizeof(unsigned int));
      memset(array215->data, 0, array215->size*sizeof(unsigned int));
      DEBUG_NEW(array215->id);
   }
   unsigned int loop62 = 0;
   unsigned int loopLimit62 = (rand()%loopsFactor)/2 + 1;
   for(; loop62 < loopLimit62; loop62++) {
      if(PATH0 & 1) {
         array_t* array216;
         if (pCounter > 0) {
            array216 = vars->data[--pCounter];
            array216->refC++;
            DEBUG_COPY(array216->id);
         } else {
            array216 = (array_t*)malloc(sizeof(array_t));
            array216->size = 918;
            array216->refC = 1;
            array216->id = 216;
            array216->data = (unsigned int*)malloc(array216->size*sizeof(unsigned int));
            memset(array216->data, 0, array216->size*sizeof(unsigned int));
            DEBUG_NEW(array216->id);
         }
         unsigned int loop63 = 0;
         unsigned int loopLimit63 = (rand()%loopsFactor)/3 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            for (int i = 0; i < array216->size; i++) {
               array216->data[i]--;
            }
            for (int i = 0; i < array215->size; i++) {
               if (array215->data[i] == 22) { 
                  return array215;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array215;
         params0.data[1] = array216;
         array_t* array217 = func18(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array217->id);
         free(params0.data);
         array217->refC--;
         if(array217->refC == 0) {
            free(array217->data);
            free(array217);
            DEBUG_FREE(array217->id);
         }
         array216->refC--;
         if(array216->refC == 0) {
            free(array216->data);
            free(array216);
            DEBUG_FREE(array216->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array215;
         array_t* array218 = func14(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array218->id);
         free(params0.data);
         array218->refC--;
         if(array218->refC == 0) {
            free(array218->data);
            free(array218);
            DEBUG_FREE(array218->id);
         }
      }
      array_t* array219;
      if (pCounter > 0) {
         array219 = vars->data[--pCounter];
         array219->refC++;
         DEBUG_COPY(array219->id);
      } else {
         array219 = (array_t*)malloc(sizeof(array_t));
         array219->size = 574;
         array219->refC = 1;
         array219->id = 219;
         array219->data = (unsigned int*)malloc(array219->size*sizeof(unsigned int));
         memset(array219->data, 0, array219->size*sizeof(unsigned int));
         DEBUG_NEW(array219->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array215;
      params0.data[1] = array219;
      array_t* array220 = func15(&params0, loopsFactor);
      DEBUG_RETURN(array220->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array221;
         if (pCounter > 0) {
            array221 = vars->data[--pCounter];
            array221->refC++;
            DEBUG_COPY(array221->id);
         } else {
            array221 = (array_t*)malloc(sizeof(array_t));
            array221->size = 486;
            array221->refC = 1;
            array221->id = 221;
            array221->data = (unsigned int*)malloc(array221->size*sizeof(unsigned int));
            memset(array221->data, 0, array221->size*sizeof(unsigned int));
            DEBUG_NEW(array221->id);
         }
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (rand()%loopsFactor)/3 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            for (int i = 0; i < array219->size; i++) {
               array219->data[i]--;
            }
            for (int i = 0; i < array221->size; i++) {
               if (array221->data[i] == 74) { 
                  return array221;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array215;
         params1.data[1] = array219;
         params1.data[2] = array220;
         params1.data[3] = array221;
         array_t* array222 = func24(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array222->id);
         free(params1.data);
         array222->refC--;
         if(array222->refC == 0) {
            free(array222->data);
            free(array222);
            DEBUG_FREE(array222->id);
         }
         array221->refC--;
         if(array221->refC == 0) {
            free(array221->data);
            free(array221);
            DEBUG_FREE(array221->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array215;
         params1.data[1] = array219;
         params1.data[2] = array220;
         array_t* array223 = func16(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array223->id);
         free(params1.data);
         array223->refC--;
         if(array223->refC == 0) {
            free(array223->data);
            free(array223);
            DEBUG_FREE(array223->id);
         }
      }
      for (int i = 0; i < array215->size; i++) {
         if (array215->data[i] == 75) { 
            return array215;
         }
      }
      array220->refC--;
      if(array220->refC == 0) {
         free(array220->data);
         free(array220);
         DEBUG_FREE(array220->id);
      }
      array219->refC--;
      if(array219->refC == 0) {
         free(array219->data);
         free(array219);
         DEBUG_FREE(array219->id);
      }
   }
   for (int i = 0; i < array215->size; i++) {
      array215->data[i]--;
   }
   for (int i = 0; i < array215->size; i++) {
      if (array215->data[i] == 10) { 
         return array215;
      }
   }
   return array215;
}

