#include "third_example.h" 
array_t* func15(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
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
         for (int i = 0; i < array46->size; i++) {
            array46->data[i]--;
         }
      }
      array_t* array47;
      if (pCounter > 0) {
         array47 = vars->data[--pCounter];
         array47->refC++;
         DEBUG_COPY(array47->id);
      } else {
         array47 = (array_t*)malloc(sizeof(array_t));
         array47->size = 987;
         array47->refC = 1;
         array47->id = 47;
         array47->data = (unsigned int*)malloc(array47->size*sizeof(unsigned int));
         memset(array47->data, 0, array47->size*sizeof(unsigned int));
         DEBUG_NEW(array47->id);
      }
      if(PATH0 & 2) {
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            array_t* array48;
            if (pCounter > 0) {
               array48 = vars->data[--pCounter];
               array48->refC++;
               DEBUG_COPY(array48->id);
            } else {
               array48 = (array_t*)malloc(sizeof(array_t));
               array48->size = 856;
               array48->refC = 1;
               array48->id = 48;
               array48->data = (unsigned int*)malloc(array48->size*sizeof(unsigned int));
               memset(array48->data, 0, array48->size*sizeof(unsigned int));
               DEBUG_NEW(array48->id);
            }
            for (int i = 0; i < array46->size; i++) {
               array46->data[i]--;
            }
            for (int i = 0; i < array46->size; i++) {
               if (array46->data[i] == 27) { 
                  return array46;
               }
            }
            array48->refC--;
            if(array48->refC == 0) {
               free(array48->data);
               free(array48);
               DEBUG_FREE(array48->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array46;
         params0.data[1] = array47;
         array_t* array49 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array49->id);
         free(params0.data);
         array49->refC--;
         if(array49->refC == 0) {
            free(array49->data);
            free(array49);
            DEBUG_FREE(array49->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array46;
      params0.data[1] = array47;
      array_t* array50 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array50->id);
      free(params0.data);
      unsigned int loop23 = 0;
      unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         for (int i = 0; i < array50->size; i++) {
            array50->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array46;
      params1.data[1] = array47;
      params1.data[2] = array50;
      array_t* array51 = func19(&params1, loopsFactor);
      DEBUG_RETURN(array51->id);
      free(params1.data);
      array51->refC--;
      if(array51->refC == 0) {
         free(array51->data);
         free(array51);
         DEBUG_FREE(array51->id);
      }
      array50->refC--;
      if(array50->refC == 0) {
         free(array50->data);
         free(array50);
         DEBUG_FREE(array50->id);
      }
      array47->refC--;
      if(array47->refC == 0) {
         free(array47->data);
         free(array47);
         DEBUG_FREE(array47->id);
      }
   }
   else {
      array_t* array54;
      if (pCounter > 0) {
         array54 = vars->data[--pCounter];
         array54->refC++;
         DEBUG_COPY(array54->id);
      } else {
         array54 = (array_t*)malloc(sizeof(array_t));
         array54->size = 818;
         array54->refC = 1;
         array54->id = 54;
         array54->data = (unsigned int*)malloc(array54->size*sizeof(unsigned int));
         memset(array54->data, 0, array54->size*sizeof(unsigned int));
         DEBUG_NEW(array54->id);
      }
      for (int i = 0; i < array46->size; i++) {
         array46->data[i]++;
      }
      for (int i = 0; i < array54->size; i++) {
         if (array54->data[i] == 11) { 
            return array54;
         }
      }
      for (int i = 0; i < array46->size; i++) {
         array46->data[i]--;
      }
      array_t* array55;
      if (pCounter > 0) {
         array55 = vars->data[--pCounter];
         array55->refC++;
         DEBUG_COPY(array55->id);
      } else {
         array55 = (array_t*)malloc(sizeof(array_t));
         array55->size = 529;
         array55->refC = 1;
         array55->id = 55;
         array55->data = (unsigned int*)malloc(array55->size*sizeof(unsigned int));
         memset(array55->data, 0, array55->size*sizeof(unsigned int));
         DEBUG_NEW(array55->id);
      }
      if(PATH0 & 4) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            array_t* array56;
            if (pCounter > 0) {
               array56 = vars->data[--pCounter];
               array56->refC++;
               DEBUG_COPY(array56->id);
            } else {
               array56 = (array_t*)malloc(sizeof(array_t));
               array56->size = 776;
               array56->refC = 1;
               array56->id = 56;
               array56->data = (unsigned int*)malloc(array56->size*sizeof(unsigned int));
               memset(array56->data, 0, array56->size*sizeof(unsigned int));
               DEBUG_NEW(array56->id);
            }
            for (int i = 0; i < array46->size; i++) {
               array46->data[i]--;
            }
            for (int i = 0; i < array56->size; i++) {
               if (array56->data[i] == 63) { 
                  return array56;
               }
            }
            array56->refC--;
            if(array56->refC == 0) {
               free(array56->data);
               free(array56);
               DEBUG_FREE(array56->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array46;
         params0.data[1] = array54;
         params0.data[2] = array55;
         array_t* array57 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array57->id);
         free(params0.data);
         array57->refC--;
         if(array57->refC == 0) {
            free(array57->data);
            free(array57);
            DEBUG_FREE(array57->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array46;
      params0.data[1] = array54;
      params0.data[2] = array55;
      array_t* array58 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array58->id);
      free(params0.data);
      array58->refC--;
      if(array58->refC == 0) {
         free(array58->data);
         free(array58);
         DEBUG_FREE(array58->id);
      }
      array55->refC--;
      if(array55->refC == 0) {
         free(array55->data);
         free(array55);
         DEBUG_FREE(array55->id);
      }
      array54->refC--;
      if(array54->refC == 0) {
         free(array54->data);
         free(array54);
         DEBUG_FREE(array54->id);
      }
   }
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      for (int i = 0; i < array46->size; i++) {
         array46->data[i]++;
      }
      array_t* array59;
      if (pCounter > 0) {
         array59 = vars->data[--pCounter];
         array59->refC++;
         DEBUG_COPY(array59->id);
      } else {
         array59 = (array_t*)malloc(sizeof(array_t));
         array59->size = 818;
         array59->refC = 1;
         array59->id = 59;
         array59->data = (unsigned int*)malloc(array59->size*sizeof(unsigned int));
         memset(array59->data, 0, array59->size*sizeof(unsigned int));
         DEBUG_NEW(array59->id);
      }
      for (int i = 0; i < array46->size; i++) {
         array46->data[i]++;
      }
      for (int i = 0; i < array46->size; i++) {
         if (array46->data[i] == 69) { 
            return array46;
         }
      }
      for (int i = 0; i < array59->size; i++) {
         array59->data[i]--;
      }
      array_t* array60;
      if (pCounter > 0) {
         array60 = vars->data[--pCounter];
         array60->refC++;
         DEBUG_COPY(array60->id);
      } else {
         array60 = (array_t*)malloc(sizeof(array_t));
         array60->size = 917;
         array60->refC = 1;
         array60->id = 60;
         array60->data = (unsigned int*)malloc(array60->size*sizeof(unsigned int));
         memset(array60->data, 0, array60->size*sizeof(unsigned int));
         DEBUG_NEW(array60->id);
      }
      if(PATH0 & 8) {
         unsigned int loop26 = 0;
         unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
         for(; loop26 < loopLimit26; loop26++) {
            array_t* array61;
            if (pCounter > 0) {
               array61 = vars->data[--pCounter];
               array61->refC++;
               DEBUG_COPY(array61->id);
            } else {
               array61 = (array_t*)malloc(sizeof(array_t));
               array61->size = 996;
               array61->refC = 1;
               array61->id = 61;
               array61->data = (unsigned int*)malloc(array61->size*sizeof(unsigned int));
               memset(array61->data, 0, array61->size*sizeof(unsigned int));
               DEBUG_NEW(array61->id);
            }
            for (int i = 0; i < array46->size; i++) {
               array46->data[i]--;
            }
            for (int i = 0; i < array61->size; i++) {
               if (array61->data[i] == 70) { 
                  return array61;
               }
            }
            array61->refC--;
            if(array61->refC == 0) {
               free(array61->data);
               free(array61);
               DEBUG_FREE(array61->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array46;
         params0.data[1] = array59;
         params0.data[2] = array60;
         array_t* array62 = func25(&params0, loopsFactor);
         DEBUG_RETURN(array62->id);
         free(params0.data);
         array62->refC--;
         if(array62->refC == 0) {
            free(array62->data);
            free(array62);
            DEBUG_FREE(array62->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array46;
      params0.data[1] = array59;
      params0.data[2] = array60;
      array_t* array63 = func22(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array63->id);
      free(params0.data);
      array63->refC--;
      if(array63->refC == 0) {
         free(array63->data);
         free(array63);
         DEBUG_FREE(array63->id);
      }
      array60->refC--;
      if(array60->refC == 0) {
         free(array60->data);
         free(array60);
         DEBUG_FREE(array60->id);
      }
      array59->refC--;
      if(array59->refC == 0) {
         free(array59->data);
         free(array59);
         DEBUG_FREE(array59->id);
      }
   }
   return array46;
}

