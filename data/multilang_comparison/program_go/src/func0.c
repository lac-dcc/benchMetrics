#include "program_go.h" 
array_t* func0(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = (array_t*)malloc(sizeof(array_t));
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = (unsigned int*)malloc(array1->size*sizeof(unsigned int));
      memset(array1->data, 0, array1->size*sizeof(unsigned int));
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         array_t* array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = (array_t*)malloc(sizeof(array_t));
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = (unsigned int*)malloc(array2->size*sizeof(unsigned int));
            memset(array2->data, 0, array2->size*sizeof(unsigned int));
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
               array2->data[i]--;
            }
            for (int i = 0; i < array2->size; i++) {
               if (array2->data[i] == 62) { 
                  return array2;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array1;
         params0.data[1] = array2;
         array_t* array3 = func10(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array3->id);
         free(params0.data);
         array3->refC--;
         if(array3->refC == 0) {
            free(array3->data);
            free(array3);
            DEBUG_FREE(array3->id);
         }
         array2->refC--;
         if(array2->refC == 0) {
            free(array2->data);
            free(array2);
            DEBUG_FREE(array2->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array1;
         array_t* array141 = func4(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array141->id);
         free(params0.data);
         array141->refC--;
         if(array141->refC == 0) {
            free(array141->data);
            free(array141);
            DEBUG_FREE(array141->id);
         }
      }
      array_t* array151;
      if (pCounter > 0) {
         array151 = vars->data[--pCounter];
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = (array_t*)malloc(sizeof(array_t));
         array151->size = 988;
         array151->refC = 1;
         array151->id = 151;
         array151->data = (unsigned int*)malloc(array151->size*sizeof(unsigned int));
         memset(array151->data, 0, array151->size*sizeof(unsigned int));
         DEBUG_NEW(array151->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array1;
      params0.data[1] = array151;
      array_t* array152 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array155;
         if (pCounter > 0) {
            array155 = vars->data[--pCounter];
            array155->refC++;
            DEBUG_COPY(array155->id);
         } else {
            array155 = (array_t*)malloc(sizeof(array_t));
            array155->size = 232;
            array155->refC = 1;
            array155->id = 155;
            array155->data = (unsigned int*)malloc(array155->size*sizeof(unsigned int));
            memset(array155->data, 0, array155->size*sizeof(unsigned int));
            DEBUG_NEW(array155->id);
         }
         unsigned int loop46 = 0;
         unsigned int loopLimit46 = (rand()%loopsFactor)/3 + 1;
         for(; loop46 < loopLimit46; loop46++) {
            for (int i = 0; i < array151->size; i++) {
               array151->data[i]--;
            }
            for (int i = 0; i < array152->size; i++) {
               if (array152->data[i] == 60) { 
                  return array152;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array151;
         params1.data[2] = array152;
         params1.data[3] = array155;
         array_t* array156 = func18(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array156->id);
         free(params1.data);
         array156->refC--;
         if(array156->refC == 0) {
            free(array156->data);
            free(array156);
            DEBUG_FREE(array156->id);
         }
         array155->refC--;
         if(array155->refC == 0) {
            free(array155->data);
            free(array155);
            DEBUG_FREE(array155->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array1;
         params1.data[1] = array151;
         params1.data[2] = array152;
         array_t* array178 = func14(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array178->id);
         free(params1.data);
         array178->refC--;
         if(array178->refC == 0) {
            free(array178->data);
            free(array178);
            DEBUG_FREE(array178->id);
         }
      }
      for (int i = 0; i < array152->size; i++) {
         if (array152->data[i] == 57) { 
            return array152;
         }
      }
      array152->refC--;
      if(array152->refC == 0) {
         free(array152->data);
         free(array152);
         DEBUG_FREE(array152->id);
      }
      array151->refC--;
      if(array151->refC == 0) {
         free(array151->data);
         free(array151);
         DEBUG_FREE(array151->id);
      }
   }
   return array1;
}

