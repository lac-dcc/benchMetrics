#include "second_example.h" 
array_t* func29(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      if(PATH0 & 1) {
         array_t* array8;
         if (pCounter > 0) {
            array8 = vars->data[--pCounter];
            array8->refC++;
            DEBUG_COPY(array8->id);
         } else {
            array8 = (array_t*)malloc(sizeof(array_t));
            array8->size = 802;
            array8->refC = 1;
            array8->id = 8;
            array8->data = (unsigned int*)malloc(array8->size*sizeof(unsigned int));
            memset(array8->data, 0, array8->size*sizeof(unsigned int));
            DEBUG_NEW(array8->id);
         }
         unsigned int loop6 = 0;
         unsigned int loopLimit6 = (rand()%loopsFactor)/5 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            for (int i = 0; i < array8->size; i++) {
               array8->data[i]--;
            }
            for (int i = 0; i < array8->size; i++) {
               if (array8->data[i] == 69) { 
                  return array8;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array8;
         array_t* array9 = func46(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array9->id);
         free(params0.data);
         array9->refC--;
         if(array9->refC == 0) {
            free(array9->data);
            free(array9);
            DEBUG_FREE(array9->id);
         }
         array8->refC--;
         if(array8->refC == 0) {
            free(array8->data);
            free(array8);
            DEBUG_FREE(array8->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array21 = func40(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array21->id);
         free(params0.data);
         array21->refC--;
         if(array21->refC == 0) {
            free(array21->data);
            free(array21);
            DEBUG_FREE(array21->id);
         }
      }
      array_t* array27;
      if (pCounter > 0) {
         array27 = vars->data[--pCounter];
         array27->refC++;
         DEBUG_COPY(array27->id);
      } else {
         array27 = (array_t*)malloc(sizeof(array_t));
         array27->size = 795;
         array27->refC = 1;
         array27->id = 27;
         array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
         memset(array27->data, 0, array27->size*sizeof(unsigned int));
         DEBUG_NEW(array27->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array27;
      array_t* array28 = func41(&params0, loopsFactor);
      DEBUG_RETURN(array28->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array31;
         if (pCounter > 0) {
            array31 = vars->data[--pCounter];
            array31->refC++;
            DEBUG_COPY(array31->id);
         } else {
            array31 = (array_t*)malloc(sizeof(array_t));
            array31->size = 301;
            array31->refC = 1;
            array31->id = 31;
            array31->data = (unsigned int*)malloc(array31->size*sizeof(unsigned int));
            memset(array31->data, 0, array31->size*sizeof(unsigned int));
            DEBUG_NEW(array31->id);
         }
         unsigned int loop13 = 0;
         unsigned int loopLimit13 = (rand()%loopsFactor)/5 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            for (int i = 0; i < array31->size; i++) {
               array31->data[i]--;
            }
            for (int i = 0; i < array31->size; i++) {
               if (array31->data[i] == 41) { 
                  return array31;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array27;
         params1.data[1] = array28;
         params1.data[2] = array31;
         array_t* array32 = func54(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array32->id);
         free(params1.data);
         array32->refC--;
         if(array32->refC == 0) {
            free(array32->data);
            free(array32);
            DEBUG_FREE(array32->id);
         }
         array31->refC--;
         if(array31->refC == 0) {
            free(array31->data);
            free(array31);
            DEBUG_FREE(array31->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array27;
         params1.data[1] = array28;
         array_t* array39 = func50(&params1, loopsFactor);
         DEBUG_RETURN(array39->id);
         free(params1.data);
         array39->refC--;
         if(array39->refC == 0) {
            free(array39->data);
            free(array39);
            DEBUG_FREE(array39->id);
         }
      }
      for (int i = 0; i < array27->size; i++) {
         if (array27->data[i] == 49) { 
            return array27;
         }
      }
      array28->refC--;
      if(array28->refC == 0) {
         free(array28->data);
         free(array28);
         DEBUG_FREE(array28->id);
      }
      array27->refC--;
      if(array27->refC == 0) {
         free(array27->data);
         free(array27);
         DEBUG_FREE(array27->id);
      }
   }
   array_t* array41;
   if (pCounter > 0) {
      array41 = vars->data[--pCounter];
      array41->refC++;
      DEBUG_COPY(array41->id);
   } else {
      array41 = (array_t*)malloc(sizeof(array_t));
      array41->size = 796;
      array41->refC = 1;
      array41->id = 41;
      array41->data = (unsigned int*)malloc(array41->size*sizeof(unsigned int));
      memset(array41->data, 0, array41->size*sizeof(unsigned int));
      DEBUG_NEW(array41->id);
   }
   return array41;
}

