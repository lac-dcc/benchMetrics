#include "fourth_example.h" 
array_t* func17(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29->refC++;
      DEBUG_COPY(array29->id);
   } else {
      array29 = (array_t*)malloc(sizeof(array_t));
      array29->size = 97;
      array29->refC = 1;
      array29->id = 29;
      array29->data = (unsigned int*)malloc(array29->size*sizeof(unsigned int));
      memset(array29->data, 0, array29->size*sizeof(unsigned int));
      DEBUG_NEW(array29->id);
   }
   if(PATH0 & 1) {
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         for (int i = 0; i < array29->size; i++) {
            array29->data[i]--;
         }
      }
      array_t* array30;
      if (pCounter > 0) {
         array30 = vars->data[--pCounter];
         array30->refC++;
         DEBUG_COPY(array30->id);
      } else {
         array30 = (array_t*)malloc(sizeof(array_t));
         array30->size = 317;
         array30->refC = 1;
         array30->id = 30;
         array30->data = (unsigned int*)malloc(array30->size*sizeof(unsigned int));
         memset(array30->data, 0, array30->size*sizeof(unsigned int));
         DEBUG_NEW(array30->id);
      }
      if(PATH0 & 2) {
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            array_t* array31;
            if (pCounter > 0) {
               array31 = vars->data[--pCounter];
               array31->refC++;
               DEBUG_COPY(array31->id);
            } else {
               array31 = (array_t*)malloc(sizeof(array_t));
               array31->size = 492;
               array31->refC = 1;
               array31->id = 31;
               array31->data = (unsigned int*)malloc(array31->size*sizeof(unsigned int));
               memset(array31->data, 0, array31->size*sizeof(unsigned int));
               DEBUG_NEW(array31->id);
            }
            for (int i = 0; i < array30->size; i++) {
               array30->data[i]--;
            }
            for (int i = 0; i < array31->size; i++) {
               if (array31->data[i] == 1) { 
                  return array31;
               }
            }
            array31->refC--;
            if(array31->refC == 0) {
               free(array31->data);
               free(array31);
               DEBUG_FREE(array31->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array29;
         params0.data[1] = array30;
         array_t* array32 = func27(&params0, loopsFactor);
         DEBUG_RETURN(array32->id);
         free(params0.data);
         array32->refC--;
         if(array32->refC == 0) {
            free(array32->data);
            free(array32);
            DEBUG_FREE(array32->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array29;
      params0.data[1] = array30;
      array_t* array35 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array35->id);
      free(params0.data);
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         for (int i = 0; i < array35->size; i++) {
            array35->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array29;
      params1.data[1] = array30;
      params1.data[2] = array35;
      array_t* array44 = func21(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array44->id);
      free(params1.data);
      array44->refC--;
      if(array44->refC == 0) {
         free(array44->data);
         free(array44);
         DEBUG_FREE(array44->id);
      }
      array35->refC--;
      if(array35->refC == 0) {
         free(array35->data);
         free(array35);
         DEBUG_FREE(array35->id);
      }
      array30->refC--;
      if(array30->refC == 0) {
         free(array30->data);
         free(array30);
         DEBUG_FREE(array30->id);
      }
   }
   else {
      array_t* array50;
      if (pCounter > 0) {
         array50 = vars->data[--pCounter];
         array50->refC++;
         DEBUG_COPY(array50->id);
      } else {
         array50 = (array_t*)malloc(sizeof(array_t));
         array50->size = 432;
         array50->refC = 1;
         array50->id = 50;
         array50->data = (unsigned int*)malloc(array50->size*sizeof(unsigned int));
         memset(array50->data, 0, array50->size*sizeof(unsigned int));
         DEBUG_NEW(array50->id);
      }
      for (int i = 0; i < array50->size; i++) {
         array50->data[i]++;
      }
      for (int i = 0; i < array50->size; i++) {
         if (array50->data[i] == 28) { 
            return array50;
         }
      }
      for (int i = 0; i < array50->size; i++) {
         array50->data[i]--;
      }
      array_t* array51;
      if (pCounter > 0) {
         array51 = vars->data[--pCounter];
         array51->refC++;
         DEBUG_COPY(array51->id);
      } else {
         array51 = (array_t*)malloc(sizeof(array_t));
         array51->size = 407;
         array51->refC = 1;
         array51->id = 51;
         array51->data = (unsigned int*)malloc(array51->size*sizeof(unsigned int));
         memset(array51->data, 0, array51->size*sizeof(unsigned int));
         DEBUG_NEW(array51->id);
      }
      if(PATH0 & 4) {
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            array_t* array52;
            if (pCounter > 0) {
               array52 = vars->data[--pCounter];
               array52->refC++;
               DEBUG_COPY(array52->id);
            } else {
               array52 = (array_t*)malloc(sizeof(array_t));
               array52->size = 474;
               array52->refC = 1;
               array52->id = 52;
               array52->data = (unsigned int*)malloc(array52->size*sizeof(unsigned int));
               memset(array52->data, 0, array52->size*sizeof(unsigned int));
               DEBUG_NEW(array52->id);
            }
            for (int i = 0; i < array50->size; i++) {
               array50->data[i]--;
            }
            for (int i = 0; i < array51->size; i++) {
               if (array51->data[i] == 95) { 
                  return array51;
               }
            }
            array52->refC--;
            if(array52->refC == 0) {
               free(array52->data);
               free(array52);
               DEBUG_FREE(array52->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array29;
         params0.data[1] = array50;
         params0.data[2] = array51;
         array_t* array53 = func27(&params0, loopsFactor);
         DEBUG_RETURN(array53->id);
         free(params0.data);
         array53->refC--;
         if(array53->refC == 0) {
            free(array53->data);
            free(array53);
            DEBUG_FREE(array53->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array29;
      params0.data[1] = array50;
      params0.data[2] = array51;
      array_t* array54 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array54->id);
      free(params0.data);
      array54->refC--;
      if(array54->refC == 0) {
         free(array54->data);
         free(array54);
         DEBUG_FREE(array54->id);
      }
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
   }
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      for (int i = 0; i < array29->size; i++) {
         array29->data[i]++;
      }
      array_t* array55;
      if (pCounter > 0) {
         array55 = vars->data[--pCounter];
         array55->refC++;
         DEBUG_COPY(array55->id);
      } else {
         array55 = (array_t*)malloc(sizeof(array_t));
         array55->size = 428;
         array55->refC = 1;
         array55->id = 55;
         array55->data = (unsigned int*)malloc(array55->size*sizeof(unsigned int));
         memset(array55->data, 0, array55->size*sizeof(unsigned int));
         DEBUG_NEW(array55->id);
      }
      for (int i = 0; i < array55->size; i++) {
         array55->data[i]++;
      }
      for (int i = 0; i < array55->size; i++) {
         if (array55->data[i] == 28) { 
            return array55;
         }
      }
      for (int i = 0; i < array55->size; i++) {
         array55->data[i]--;
      }
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
      if(PATH0 & 8) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/3 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            array_t* array57;
            if (pCounter > 0) {
               array57 = vars->data[--pCounter];
               array57->refC++;
               DEBUG_COPY(array57->id);
            } else {
               array57 = (array_t*)malloc(sizeof(array_t));
               array57->size = 404;
               array57->refC = 1;
               array57->id = 57;
               array57->data = (unsigned int*)malloc(array57->size*sizeof(unsigned int));
               memset(array57->data, 0, array57->size*sizeof(unsigned int));
               DEBUG_NEW(array57->id);
            }
            for (int i = 0; i < array57->size; i++) {
               array57->data[i]--;
            }
            for (int i = 0; i < array57->size; i++) {
               if (array57->data[i] == 13) { 
                  return array57;
               }
            }
            array57->refC--;
            if(array57->refC == 0) {
               free(array57->data);
               free(array57);
               DEBUG_FREE(array57->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array29;
         params0.data[1] = array55;
         params0.data[2] = array56;
         array_t* array58 = func27(&params0, loopsFactor);
         DEBUG_RETURN(array58->id);
         free(params0.data);
         array58->refC--;
         if(array58->refC == 0) {
            free(array58->data);
            free(array58);
            DEBUG_FREE(array58->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array29;
      params0.data[1] = array55;
      params0.data[2] = array56;
      array_t* array59 = func24(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array59->id);
      free(params0.data);
      array59->refC--;
      if(array59->refC == 0) {
         free(array59->data);
         free(array59);
         DEBUG_FREE(array59->id);
      }
      array56->refC--;
      if(array56->refC == 0) {
         free(array56->data);
         free(array56);
         DEBUG_FREE(array56->id);
      }
      array55->refC--;
      if(array55->refC == 0) {
         free(array55->data);
         free(array55);
         DEBUG_FREE(array55->id);
      }
   }
   return array29;
}

