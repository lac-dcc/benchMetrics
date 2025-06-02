#include "fourth_example.h" 
array_t* func21(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array45;
   if (pCounter > 0) {
      array45 = vars->data[--pCounter];
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = (array_t*)malloc(sizeof(array_t));
      array45->size = 350;
      array45->refC = 1;
      array45->id = 45;
      array45->data = (unsigned int*)malloc(array45->size*sizeof(unsigned int));
      memset(array45->data, 0, array45->size*sizeof(unsigned int));
      DEBUG_NEW(array45->id);
   }
   for (int i = 0; i < array45->size; i++) {
      array45->data[i]++;
   }
   for (int i = 0; i < array45->size; i++) {
      if (array45->data[i] == 34) { 
         return array45;
      }
   }
   for (int i = 0; i < array45->size; i++) {
      array45->data[i]--;
   }
   array_t* array46;
   if (pCounter > 0) {
      array46 = vars->data[--pCounter];
      array46->refC++;
      DEBUG_COPY(array46->id);
   } else {
      array46 = (array_t*)malloc(sizeof(array_t));
      array46->size = 124;
      array46->refC = 1;
      array46->id = 46;
      array46->data = (unsigned int*)malloc(array46->size*sizeof(unsigned int));
      memset(array46->data, 0, array46->size*sizeof(unsigned int));
      DEBUG_NEW(array46->id);
   }
   if(PATH0 & 1) {
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         array_t* array47;
         if (pCounter > 0) {
            array47 = vars->data[--pCounter];
            array47->refC++;
            DEBUG_COPY(array47->id);
         } else {
            array47 = (array_t*)malloc(sizeof(array_t));
            array47->size = 914;
            array47->refC = 1;
            array47->id = 47;
            array47->data = (unsigned int*)malloc(array47->size*sizeof(unsigned int));
            memset(array47->data, 0, array47->size*sizeof(unsigned int));
            DEBUG_NEW(array47->id);
         }
         for (int i = 0; i < array47->size; i++) {
            array47->data[i]--;
         }
         for (int i = 0; i < array47->size; i++) {
            if (array47->data[i] == 43) { 
               return array47;
            }
         }
         array47->refC--;
         if(array47->refC == 0) {
            free(array47->data);
            free(array47);
            DEBUG_FREE(array47->id);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array45;
      params0.data[1] = array46;
      array_t* array48 = func29(&params0, loopsFactor);
      DEBUG_RETURN(array48->id);
      free(params0.data);
      array48->refC--;
      if(array48->refC == 0) {
         free(array48->data);
         free(array48);
         DEBUG_FREE(array48->id);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array45;
   params0.data[1] = array46;
   array_t* array49 = func26(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array49->id);
   free(params0.data);
   array49->refC--;
   if(array49->refC == 0) {
      free(array49->data);
      free(array49);
      DEBUG_FREE(array49->id);
   }
   array45->refC--;
   if(array45->refC == 0) {
      free(array45->data);
      free(array45);
      DEBUG_FREE(array45->id);
   }
   return array46;
}

