#include "third_example.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array118;
   if (pCounter > 0) {
      array118 = vars->data[--pCounter];
      array118->refC++;
      DEBUG_COPY(array118->id);
   } else {
      array118 = (array_t*)malloc(sizeof(array_t));
      array118->size = 202;
      array118->refC = 1;
      array118->id = 118;
      array118->data = (unsigned int*)malloc(array118->size*sizeof(unsigned int));
      memset(array118->data, 0, array118->size*sizeof(unsigned int));
      DEBUG_NEW(array118->id);
   }
   if(PATH0 & 1) {
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/2 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         for (int i = 0; i < array118->size; i++) {
            array118->data[i]--;
         }
      }
      array_t* array119;
      if (pCounter > 0) {
         array119 = vars->data[--pCounter];
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = (array_t*)malloc(sizeof(array_t));
         array119->size = 784;
         array119->refC = 1;
         array119->id = 119;
         array119->data = (unsigned int*)malloc(array119->size*sizeof(unsigned int));
         memset(array119->data, 0, array119->size*sizeof(unsigned int));
         DEBUG_NEW(array119->id);
      }
      if(PATH0 & 2) {
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/2 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            array_t* array120;
            if (pCounter > 0) {
               array120 = vars->data[--pCounter];
               array120->refC++;
               DEBUG_COPY(array120->id);
            } else {
               array120 = (array_t*)malloc(sizeof(array_t));
               array120->size = 21;
               array120->refC = 1;
               array120->id = 120;
               array120->data = (unsigned int*)malloc(array120->size*sizeof(unsigned int));
               memset(array120->data, 0, array120->size*sizeof(unsigned int));
               DEBUG_NEW(array120->id);
            }
            for (int i = 0; i < array118->size; i++) {
               array118->data[i]--;
            }
            for (int i = 0; i < array118->size; i++) {
               if (array118->data[i] == 28) { 
                  return array118;
               }
            }
            array120->refC--;
            if(array120->refC == 0) {
               free(array120->data);
               free(array120);
               DEBUG_FREE(array120->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array118;
         params0.data[1] = array119;
         array_t* array121 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array121->id);
         free(params0.data);
         array121->refC--;
         if(array121->refC == 0) {
            free(array121->data);
            free(array121);
            DEBUG_FREE(array121->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array118;
      params0.data[1] = array119;
      array_t* array122 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array122->id);
      free(params0.data);
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         for (int i = 0; i < array118->size; i++) {
            array118->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array118;
      params1.data[1] = array119;
      params1.data[2] = array122;
      array_t* array123 = func10(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array123->id);
      free(params1.data);
      array123->refC--;
      if(array123->refC == 0) {
         free(array123->data);
         free(array123);
         DEBUG_FREE(array123->id);
      }
      array122->refC--;
      if(array122->refC == 0) {
         free(array122->data);
         free(array122);
         DEBUG_FREE(array122->id);
      }
      array119->refC--;
      if(array119->refC == 0) {
         free(array119->data);
         free(array119);
         DEBUG_FREE(array119->id);
      }
   }
   else {
      array_t* array129;
      if (pCounter > 0) {
         array129 = vars->data[--pCounter];
         array129->refC++;
         DEBUG_COPY(array129->id);
      } else {
         array129 = (array_t*)malloc(sizeof(array_t));
         array129->size = 990;
         array129->refC = 1;
         array129->id = 129;
         array129->data = (unsigned int*)malloc(array129->size*sizeof(unsigned int));
         memset(array129->data, 0, array129->size*sizeof(unsigned int));
         DEBUG_NEW(array129->id);
      }
      for (int i = 0; i < array129->size; i++) {
         array129->data[i]++;
      }
      for (int i = 0; i < array129->size; i++) {
         if (array129->data[i] == 63) { 
            return array129;
         }
      }
      for (int i = 0; i < array129->size; i++) {
         array129->data[i]--;
      }
      array_t* array130;
      if (pCounter > 0) {
         array130 = vars->data[--pCounter];
         array130->refC++;
         DEBUG_COPY(array130->id);
      } else {
         array130 = (array_t*)malloc(sizeof(array_t));
         array130->size = 253;
         array130->refC = 1;
         array130->id = 130;
         array130->data = (unsigned int*)malloc(array130->size*sizeof(unsigned int));
         memset(array130->data, 0, array130->size*sizeof(unsigned int));
         DEBUG_NEW(array130->id);
      }
      if(PATH0 & 4) {
         unsigned int loop52 = 0;
         unsigned int loopLimit52 = (rand()%loopsFactor)/2 + 1;
         for(; loop52 < loopLimit52; loop52++) {
            array_t* array131;
            if (pCounter > 0) {
               array131 = vars->data[--pCounter];
               array131->refC++;
               DEBUG_COPY(array131->id);
            } else {
               array131 = (array_t*)malloc(sizeof(array_t));
               array131->size = 892;
               array131->refC = 1;
               array131->id = 131;
               array131->data = (unsigned int*)malloc(array131->size*sizeof(unsigned int));
               memset(array131->data, 0, array131->size*sizeof(unsigned int));
               DEBUG_NEW(array131->id);
            }
            for (int i = 0; i < array130->size; i++) {
               array130->data[i]--;
            }
            for (int i = 0; i < array129->size; i++) {
               if (array129->data[i] == 52) { 
                  return array129;
               }
            }
            array131->refC--;
            if(array131->refC == 0) {
               free(array131->data);
               free(array131);
               DEBUG_FREE(array131->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array118;
         params0.data[1] = array129;
         params0.data[2] = array130;
         array_t* array132 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array132->id);
         free(params0.data);
         array132->refC--;
         if(array132->refC == 0) {
            free(array132->data);
            free(array132);
            DEBUG_FREE(array132->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array118;
      params0.data[1] = array129;
      params0.data[2] = array130;
      array_t* array133 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array133->id);
      free(params0.data);
      array133->refC--;
      if(array133->refC == 0) {
         free(array133->data);
         free(array133);
         DEBUG_FREE(array133->id);
      }
      array130->refC--;
      if(array130->refC == 0) {
         free(array130->data);
         free(array130);
         DEBUG_FREE(array130->id);
      }
      array129->refC--;
      if(array129->refC == 0) {
         free(array129->data);
         free(array129);
         DEBUG_FREE(array129->id);
      }
   }
   unsigned int loop53 = 0;
   unsigned int loopLimit53 = (rand()%loopsFactor)/2 + 1;
   for(; loop53 < loopLimit53; loop53++) {
      for (int i = 0; i < array118->size; i++) {
         array118->data[i]++;
      }
      array_t* array134;
      if (pCounter > 0) {
         array134 = vars->data[--pCounter];
         array134->refC++;
         DEBUG_COPY(array134->id);
      } else {
         array134 = (array_t*)malloc(sizeof(array_t));
         array134->size = 436;
         array134->refC = 1;
         array134->id = 134;
         array134->data = (unsigned int*)malloc(array134->size*sizeof(unsigned int));
         memset(array134->data, 0, array134->size*sizeof(unsigned int));
         DEBUG_NEW(array134->id);
      }
      for (int i = 0; i < array118->size; i++) {
         array118->data[i]++;
      }
      for (int i = 0; i < array118->size; i++) {
         if (array118->data[i] == 21) { 
            return array118;
         }
      }
      for (int i = 0; i < array118->size; i++) {
         array118->data[i]--;
      }
      array_t* array135;
      if (pCounter > 0) {
         array135 = vars->data[--pCounter];
         array135->refC++;
         DEBUG_COPY(array135->id);
      } else {
         array135 = (array_t*)malloc(sizeof(array_t));
         array135->size = 304;
         array135->refC = 1;
         array135->id = 135;
         array135->data = (unsigned int*)malloc(array135->size*sizeof(unsigned int));
         memset(array135->data, 0, array135->size*sizeof(unsigned int));
         DEBUG_NEW(array135->id);
      }
      if(PATH0 & 8) {
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (rand()%loopsFactor)/3 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            array_t* array136;
            if (pCounter > 0) {
               array136 = vars->data[--pCounter];
               array136->refC++;
               DEBUG_COPY(array136->id);
            } else {
               array136 = (array_t*)malloc(sizeof(array_t));
               array136->size = 28;
               array136->refC = 1;
               array136->id = 136;
               array136->data = (unsigned int*)malloc(array136->size*sizeof(unsigned int));
               memset(array136->data, 0, array136->size*sizeof(unsigned int));
               DEBUG_NEW(array136->id);
            }
            for (int i = 0; i < array136->size; i++) {
               array136->data[i]--;
            }
            for (int i = 0; i < array135->size; i++) {
               if (array135->data[i] == 48) { 
                  return array135;
               }
            }
            array136->refC--;
            if(array136->refC == 0) {
               free(array136->data);
               free(array136);
               DEBUG_FREE(array136->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array118;
         params0.data[1] = array134;
         params0.data[2] = array135;
         array_t* array137 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array137->id);
         free(params0.data);
         array137->refC--;
         if(array137->refC == 0) {
            free(array137->data);
            free(array137);
            DEBUG_FREE(array137->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array118;
      params0.data[1] = array134;
      params0.data[2] = array135;
      array_t* array138 = func13(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array138->id);
      free(params0.data);
      array138->refC--;
      if(array138->refC == 0) {
         free(array138->data);
         free(array138);
         DEBUG_FREE(array138->id);
      }
      array135->refC--;
      if(array135->refC == 0) {
         free(array135->data);
         free(array135);
         DEBUG_FREE(array135->id);
      }
      array134->refC--;
      if(array134->refC == 0) {
         free(array134->data);
         free(array134);
         DEBUG_FREE(array134->id);
      }
   }
   return array118;
}

