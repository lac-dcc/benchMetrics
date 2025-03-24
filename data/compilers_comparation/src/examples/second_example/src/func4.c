#include "second_example.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array174;
   if (pCounter > 0) {
      array174 = vars->data[--pCounter];
      array174->refC++;
      DEBUG_COPY(array174->id);
   } else {
      array174 = (array_t*)malloc(sizeof(array_t));
      array174->size = 987;
      array174->refC = 1;
      array174->id = 174;
      array174->data = (unsigned int*)malloc(array174->size*sizeof(unsigned int));
      memset(array174->data, 0, array174->size*sizeof(unsigned int));
      DEBUG_NEW(array174->id);
   }
   unsigned int loop51 = 0;
   unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
   for(; loop51 < loopLimit51; loop51++) {
      if(PATH0 & 1) {
         array_t* array175;
         if (pCounter > 0) {
            array175 = vars->data[--pCounter];
            array175->refC++;
            DEBUG_COPY(array175->id);
         } else {
            array175 = (array_t*)malloc(sizeof(array_t));
            array175->size = 888;
            array175->refC = 1;
            array175->id = 175;
            array175->data = (unsigned int*)malloc(array175->size*sizeof(unsigned int));
            memset(array175->data, 0, array175->size*sizeof(unsigned int));
            DEBUG_NEW(array175->id);
         }
         unsigned int loop52 = 0;
         unsigned int loopLimit52 = (rand()%loopsFactor)/4 + 1;
         for(; loop52 < loopLimit52; loop52++) {
            for (int i = 0; i < array174->size; i++) {
               array174->data[i]--;
            }
            for (int i = 0; i < array174->size; i++) {
               if (array174->data[i] == 70) { 
                  return array174;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array174;
         params0.data[1] = array175;
         array_t* array176 = func24(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array176->id);
         free(params0.data);
         array176->refC--;
         if(array176->refC == 0) {
            free(array176->data);
            free(array176);
            DEBUG_FREE(array176->id);
         }
         array175->refC--;
         if(array175->refC == 0) {
            free(array175->data);
            free(array175);
            DEBUG_FREE(array175->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array174;
         array_t* array177 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array177->id);
         free(params0.data);
         array177->refC--;
         if(array177->refC == 0) {
            free(array177->data);
            free(array177);
            DEBUG_FREE(array177->id);
         }
      }
      array_t* array178;
      if (pCounter > 0) {
         array178 = vars->data[--pCounter];
         array178->refC++;
         DEBUG_COPY(array178->id);
      } else {
         array178 = (array_t*)malloc(sizeof(array_t));
         array178->size = 260;
         array178->refC = 1;
         array178->id = 178;
         array178->data = (unsigned int*)malloc(array178->size*sizeof(unsigned int));
         memset(array178->data, 0, array178->size*sizeof(unsigned int));
         DEBUG_NEW(array178->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array174;
      params0.data[1] = array178;
      array_t* array179 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array179->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array180;
         if (pCounter > 0) {
            array180 = vars->data[--pCounter];
            array180->refC++;
            DEBUG_COPY(array180->id);
         } else {
            array180 = (array_t*)malloc(sizeof(array_t));
            array180->size = 205;
            array180->refC = 1;
            array180->id = 180;
            array180->data = (unsigned int*)malloc(array180->size*sizeof(unsigned int));
            memset(array180->data, 0, array180->size*sizeof(unsigned int));
            DEBUG_NEW(array180->id);
         }
         unsigned int loop53 = 0;
         unsigned int loopLimit53 = (rand()%loopsFactor)/4 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            for (int i = 0; i < array180->size; i++) {
               array180->data[i]--;
            }
            for (int i = 0; i < array178->size; i++) {
               if (array178->data[i] == 18) { 
                  return array178;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array174;
         params1.data[1] = array178;
         params1.data[2] = array179;
         params1.data[3] = array180;
         array_t* array181 = func28(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array181->id);
         free(params1.data);
         array181->refC--;
         if(array181->refC == 0) {
            free(array181->data);
            free(array181);
            DEBUG_FREE(array181->id);
         }
         array180->refC--;
         if(array180->refC == 0) {
            free(array180->data);
            free(array180);
            DEBUG_FREE(array180->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array174;
         params1.data[1] = array178;
         params1.data[2] = array179;
         array_t* array182 = func22(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array182->id);
         free(params1.data);
         array182->refC--;
         if(array182->refC == 0) {
            free(array182->data);
            free(array182);
            DEBUG_FREE(array182->id);
         }
      }
      for (int i = 0; i < array179->size; i++) {
         if (array179->data[i] == 37) { 
            return array179;
         }
      }
      array179->refC--;
      if(array179->refC == 0) {
         free(array179->data);
         free(array179);
         DEBUG_FREE(array179->id);
      }
      array178->refC--;
      if(array178->refC == 0) {
         free(array178->data);
         free(array178);
         DEBUG_FREE(array178->id);
      }
   }
   for (int i = 0; i < array174->size; i++) {
      array174->data[i]--;
   }
   for (int i = 0; i < array174->size; i++) {
      if (array174->data[i] == 7) { 
         return array174;
      }
   }
   return array174;
}

