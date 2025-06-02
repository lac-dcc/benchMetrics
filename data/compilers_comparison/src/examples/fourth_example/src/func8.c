#include "fourth_example.h" 
array_t* func8(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array86;
   if (pCounter > 0) {
      array86 = vars->data[--pCounter];
      array86->refC++;
      DEBUG_COPY(array86->id);
   } else {
      array86 = (array_t*)malloc(sizeof(array_t));
      array86->size = 95;
      array86->refC = 1;
      array86->id = 86;
      array86->data = (unsigned int*)malloc(array86->size*sizeof(unsigned int));
      memset(array86->data, 0, array86->size*sizeof(unsigned int));
      DEBUG_NEW(array86->id);
   }
   if(PATH0 & 1) {
      unsigned int loop35 = 0;
      unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         for (int i = 0; i < array86->size; i++) {
            array86->data[i]--;
         }
      }
      array_t* array87;
      if (pCounter > 0) {
         array87 = vars->data[--pCounter];
         array87->refC++;
         DEBUG_COPY(array87->id);
      } else {
         array87 = (array_t*)malloc(sizeof(array_t));
         array87->size = 466;
         array87->refC = 1;
         array87->id = 87;
         array87->data = (unsigned int*)malloc(array87->size*sizeof(unsigned int));
         memset(array87->data, 0, array87->size*sizeof(unsigned int));
         DEBUG_NEW(array87->id);
      }
      if(PATH0 & 2) {
         unsigned int loop36 = 0;
         unsigned int loopLimit36 = (rand()%loopsFactor)/2 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            array_t* array88;
            if (pCounter > 0) {
               array88 = vars->data[--pCounter];
               array88->refC++;
               DEBUG_COPY(array88->id);
            } else {
               array88 = (array_t*)malloc(sizeof(array_t));
               array88->size = 84;
               array88->refC = 1;
               array88->id = 88;
               array88->data = (unsigned int*)malloc(array88->size*sizeof(unsigned int));
               memset(array88->data, 0, array88->size*sizeof(unsigned int));
               DEBUG_NEW(array88->id);
            }
            for (int i = 0; i < array86->size; i++) {
               array86->data[i]--;
            }
            for (int i = 0; i < array87->size; i++) {
               if (array87->data[i] == 84) { 
                  return array87;
               }
            }
            array88->refC--;
            if(array88->refC == 0) {
               free(array88->data);
               free(array88);
               DEBUG_FREE(array88->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array86;
         params0.data[1] = array87;
         array_t* array89 = func18(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array89->id);
         free(params0.data);
         array89->refC--;
         if(array89->refC == 0) {
            free(array89->data);
            free(array89);
            DEBUG_FREE(array89->id);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array86;
      params0.data[1] = array87;
      array_t* array96 = func15(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array96->id);
      free(params0.data);
      unsigned int loop47 = 0;
      unsigned int loopLimit47 = (rand()%loopsFactor)/2 + 1;
      for(; loop47 < loopLimit47; loop47++) {
         for (int i = 0; i < array87->size; i++) {
            array87->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array86;
      params1.data[1] = array87;
      params1.data[2] = array96;
      array_t* array118 = func12(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array118->id);
      free(params1.data);
      array118->refC--;
      if(array118->refC == 0) {
         free(array118->data);
         free(array118);
         DEBUG_FREE(array118->id);
      }
      array96->refC--;
      if(array96->refC == 0) {
         free(array96->data);
         free(array96);
         DEBUG_FREE(array96->id);
      }
      array87->refC--;
      if(array87->refC == 0) {
         free(array87->data);
         free(array87);
         DEBUG_FREE(array87->id);
      }
   }
   else {
      array_t* array124;
      if (pCounter > 0) {
         array124 = vars->data[--pCounter];
         array124->refC++;
         DEBUG_COPY(array124->id);
      } else {
         array124 = (array_t*)malloc(sizeof(array_t));
         array124->size = 753;
         array124->refC = 1;
         array124->id = 124;
         array124->data = (unsigned int*)malloc(array124->size*sizeof(unsigned int));
         memset(array124->data, 0, array124->size*sizeof(unsigned int));
         DEBUG_NEW(array124->id);
      }
      for (int i = 0; i < array86->size; i++) {
         array86->data[i]++;
      }
      for (int i = 0; i < array124->size; i++) {
         if (array124->data[i] == 33) { 
            return array124;
         }
      }
      for (int i = 0; i < array124->size; i++) {
         array124->data[i]--;
      }
      array_t* array125;
      if (pCounter > 0) {
         array125 = vars->data[--pCounter];
         array125->refC++;
         DEBUG_COPY(array125->id);
      } else {
         array125 = (array_t*)malloc(sizeof(array_t));
         array125->size = 648;
         array125->refC = 1;
         array125->id = 125;
         array125->data = (unsigned int*)malloc(array125->size*sizeof(unsigned int));
         memset(array125->data, 0, array125->size*sizeof(unsigned int));
         DEBUG_NEW(array125->id);
      }
      if(PATH0 & 4) {
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/2 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            array_t* array126;
            if (pCounter > 0) {
               array126 = vars->data[--pCounter];
               array126->refC++;
               DEBUG_COPY(array126->id);
            } else {
               array126 = (array_t*)malloc(sizeof(array_t));
               array126->size = 890;
               array126->refC = 1;
               array126->id = 126;
               array126->data = (unsigned int*)malloc(array126->size*sizeof(unsigned int));
               memset(array126->data, 0, array126->size*sizeof(unsigned int));
               DEBUG_NEW(array126->id);
            }
            for (int i = 0; i < array125->size; i++) {
               array125->data[i]--;
            }
            for (int i = 0; i < array126->size; i++) {
               if (array126->data[i] == 46) { 
                  return array126;
               }
            }
            array126->refC--;
            if(array126->refC == 0) {
               free(array126->data);
               free(array126);
               DEBUG_FREE(array126->id);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array86;
         params0.data[1] = array124;
         params0.data[2] = array125;
         array_t* array127 = func18(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array127->id);
         free(params0.data);
         array127->refC--;
         if(array127->refC == 0) {
            free(array127->data);
            free(array127);
            DEBUG_FREE(array127->id);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array86;
      params0.data[1] = array124;
      params0.data[2] = array125;
      array_t* array128 = func15(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array128->id);
      free(params0.data);
      array128->refC--;
      if(array128->refC == 0) {
         free(array128->data);
         free(array128);
         DEBUG_FREE(array128->id);
      }
      array125->refC--;
      if(array125->refC == 0) {
         free(array125->data);
         free(array125);
         DEBUG_FREE(array125->id);
      }
      array124->refC--;
      if(array124->refC == 0) {
         free(array124->data);
         free(array124);
         DEBUG_FREE(array124->id);
      }
   }
   unsigned int loop50 = 0;
   unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
   for(; loop50 < loopLimit50; loop50++) {
      for (int i = 0; i < array86->size; i++) {
         array86->data[i]++;
      }
      array_t* array129;
      if (pCounter > 0) {
         array129 = vars->data[--pCounter];
         array129->refC++;
         DEBUG_COPY(array129->id);
      } else {
         array129 = (array_t*)malloc(sizeof(array_t));
         array129->size = 797;
         array129->refC = 1;
         array129->id = 129;
         array129->data = (unsigned int*)malloc(array129->size*sizeof(unsigned int));
         memset(array129->data, 0, array129->size*sizeof(unsigned int));
         DEBUG_NEW(array129->id);
      }
      for (int i = 0; i < array129->size; i++) {
         array129->data[i]++;
      }
      for (int i = 0; i < array86->size; i++) {
         if (array86->data[i] == 3) { 
            return array86;
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
         array130->size = 363;
         array130->refC = 1;
         array130->id = 130;
         array130->data = (unsigned int*)malloc(array130->size*sizeof(unsigned int));
         memset(array130->data, 0, array130->size*sizeof(unsigned int));
         DEBUG_NEW(array130->id);
      }
      if(PATH0 & 8) {
         unsigned int loop51 = 0;
         unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
         for(; loop51 < loopLimit51; loop51++) {
            array_t* array131;
            if (pCounter > 0) {
               array131 = vars->data[--pCounter];
               array131->refC++;
               DEBUG_COPY(array131->id);
            } else {
               array131 = (array_t*)malloc(sizeof(array_t));
               array131->size = 497;
               array131->refC = 1;
               array131->id = 131;
               array131->data = (unsigned int*)malloc(array131->size*sizeof(unsigned int));
               memset(array131->data, 0, array131->size*sizeof(unsigned int));
               DEBUG_NEW(array131->id);
            }
            for (int i = 0; i < array129->size; i++) {
               array129->data[i]--;
            }
            for (int i = 0; i < array86->size; i++) {
               if (array86->data[i] == 86) { 
                  return array86;
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
         params0.data[0] = array86;
         params0.data[1] = array129;
         params0.data[2] = array130;
         array_t* array132 = func18(&params0, rng(), loopsFactor);
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
      params0.data[0] = array86;
      params0.data[1] = array129;
      params0.data[2] = array130;
      array_t* array133 = func15(&params0, rng(), loopsFactor);
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
   return array86;
}

