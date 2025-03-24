#include "second_example.h" 
array_t* func25(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop40 = 0;
   unsigned int loopLimit40 = (rand()%loopsFactor)/3 + 1;
   for(; loop40 < loopLimit40; loop40++) {
      if(PATH0 & 1) {
         array_t* array132;
         if (pCounter > 0) {
            array132 = vars->data[--pCounter];
            array132->refC++;
            DEBUG_COPY(array132->id);
         } else {
            array132 = (array_t*)malloc(sizeof(array_t));
            array132->size = 125;
            array132->refC = 1;
            array132->id = 132;
            array132->data = (unsigned int*)malloc(array132->size*sizeof(unsigned int));
            memset(array132->data, 0, array132->size*sizeof(unsigned int));
            DEBUG_NEW(array132->id);
         }
         unsigned int loop41 = 0;
         unsigned int loopLimit41 = (rand()%loopsFactor)/4 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            for (int i = 0; i < array132->size; i++) {
               array132->data[i]--;
            }
            for (int i = 0; i < array132->size; i++) {
               if (array132->data[i] == 75) { 
                  return array132;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array132;
         array_t* array133 = func42(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array133->id);
         free(params0.data);
         array133->refC--;
         if(array133->refC == 0) {
            free(array133->data);
            free(array133);
            DEBUG_FREE(array133->id);
         }
         array132->refC--;
         if(array132->refC == 0) {
            free(array132->data);
            free(array132);
            DEBUG_FREE(array132->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array134 = func34(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array134->id);
         free(params0.data);
         array134->refC--;
         if(array134->refC == 0) {
            free(array134->data);
            free(array134);
            DEBUG_FREE(array134->id);
         }
      }
      array_t* array135;
      if (pCounter > 0) {
         array135 = vars->data[--pCounter];
         array135->refC++;
         DEBUG_COPY(array135->id);
      } else {
         array135 = (array_t*)malloc(sizeof(array_t));
         array135->size = 460;
         array135->refC = 1;
         array135->id = 135;
         array135->data = (unsigned int*)malloc(array135->size*sizeof(unsigned int));
         memset(array135->data, 0, array135->size*sizeof(unsigned int));
         DEBUG_NEW(array135->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array135;
      array_t* array136 = func35(&params0, loopsFactor);
      DEBUG_RETURN(array136->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array137;
         if (pCounter > 0) {
            array137 = vars->data[--pCounter];
            array137->refC++;
            DEBUG_COPY(array137->id);
         } else {
            array137 = (array_t*)malloc(sizeof(array_t));
            array137->size = 460;
            array137->refC = 1;
            array137->id = 137;
            array137->data = (unsigned int*)malloc(array137->size*sizeof(unsigned int));
            memset(array137->data, 0, array137->size*sizeof(unsigned int));
            DEBUG_NEW(array137->id);
         }
         unsigned int loop42 = 0;
         unsigned int loopLimit42 = (rand()%loopsFactor)/4 + 1;
         for(; loop42 < loopLimit42; loop42++) {
            for (int i = 0; i < array137->size; i++) {
               array137->data[i]--;
            }
            for (int i = 0; i < array137->size; i++) {
               if (array137->data[i] == 27) { 
                  return array137;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array135;
         params1.data[1] = array136;
         params1.data[2] = array137;
         array_t* array138 = func46(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array138->id);
         free(params1.data);
         array138->refC--;
         if(array138->refC == 0) {
            free(array138->data);
            free(array138);
            DEBUG_FREE(array138->id);
         }
         array137->refC--;
         if(array137->refC == 0) {
            free(array137->data);
            free(array137);
            DEBUG_FREE(array137->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array135;
         params1.data[1] = array136;
         array_t* array139 = func40(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array139->id);
         free(params1.data);
         array139->refC--;
         if(array139->refC == 0) {
            free(array139->data);
            free(array139);
            DEBUG_FREE(array139->id);
         }
      }
      for (int i = 0; i < array135->size; i++) {
         if (array135->data[i] == 97) { 
            return array135;
         }
      }
      array136->refC--;
      if(array136->refC == 0) {
         free(array136->data);
         free(array136);
         DEBUG_FREE(array136->id);
      }
      array135->refC--;
      if(array135->refC == 0) {
         free(array135->data);
         free(array135);
         DEBUG_FREE(array135->id);
      }
   }
   array_t* array140;
   if (pCounter > 0) {
      array140 = vars->data[--pCounter];
      array140->refC++;
      DEBUG_COPY(array140->id);
   } else {
      array140 = (array_t*)malloc(sizeof(array_t));
      array140->size = 699;
      array140->refC = 1;
      array140->id = 140;
      array140->data = (unsigned int*)malloc(array140->size*sizeof(unsigned int));
      memset(array140->data, 0, array140->size*sizeof(unsigned int));
      DEBUG_NEW(array140->id);
   }
   return array140;
}

