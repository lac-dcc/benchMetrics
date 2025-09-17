#include "program_cpp_vector.h" 
array_t* func16(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array123;
   if (pCounter > 0) {
      array123 = vars->data[--pCounter];
      array123->refC++;
      DEBUG_COPY(array123->id);
   } else {
      array123 = (array_t*)malloc(sizeof(array_t));
      array123->size = 908;
      array123->refC = 1;
      array123->id = 123;
      array123->data = (unsigned int*)malloc(array123->size*sizeof(unsigned int));
      memset(array123->data, 0, array123->size*sizeof(unsigned int));
      DEBUG_NEW(array123->id);
   }
   unsigned int loop37 = 0;
   unsigned int loopLimit37 = (rand()%loopsFactor)/3 + 1;
   for(; loop37 < loopLimit37; loop37++) {
      if(PATH0 & 1) {
         array_t* array124;
         if (pCounter > 0) {
            array124 = vars->data[--pCounter];
            array124->refC++;
            DEBUG_COPY(array124->id);
         } else {
            array124 = (array_t*)malloc(sizeof(array_t));
            array124->size = 958;
            array124->refC = 1;
            array124->id = 124;
            array124->data = (unsigned int*)malloc(array124->size*sizeof(unsigned int));
            memset(array124->data, 0, array124->size*sizeof(unsigned int));
            DEBUG_NEW(array124->id);
         }
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/4 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            for (int i = 0; i < array123->size; i++) {
               array123->data[i]--;
            }
            for (int i = 0; i < array123->size; i++) {
               if (array123->data[i] == 8) { 
                  return array123;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array123;
         params0.data[1] = array124;
         array_t* array125 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array125->id);
         free(params0.data);
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
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array123;
         array_t* array126 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array126->id);
         free(params0.data);
         array126->refC--;
         if(array126->refC == 0) {
            free(array126->data);
            free(array126);
            DEBUG_FREE(array126->id);
         }
      }
      array_t* array127;
      if (pCounter > 0) {
         array127 = vars->data[--pCounter];
         array127->refC++;
         DEBUG_COPY(array127->id);
      } else {
         array127 = (array_t*)malloc(sizeof(array_t));
         array127->size = 133;
         array127->refC = 1;
         array127->id = 127;
         array127->data = (unsigned int*)malloc(array127->size*sizeof(unsigned int));
         memset(array127->data, 0, array127->size*sizeof(unsigned int));
         DEBUG_NEW(array127->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array123;
      params0.data[1] = array127;
      array_t* array128 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array128->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array129;
         if (pCounter > 0) {
            array129 = vars->data[--pCounter];
            array129->refC++;
            DEBUG_COPY(array129->id);
         } else {
            array129 = (array_t*)malloc(sizeof(array_t));
            array129->size = 754;
            array129->refC = 1;
            array129->id = 129;
            array129->data = (unsigned int*)malloc(array129->size*sizeof(unsigned int));
            memset(array129->data, 0, array129->size*sizeof(unsigned int));
            DEBUG_NEW(array129->id);
         }
         unsigned int loop39 = 0;
         unsigned int loopLimit39 = (rand()%loopsFactor)/4 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            for (int i = 0; i < array129->size; i++) {
               array129->data[i]--;
            }
            for (int i = 0; i < array128->size; i++) {
               if (array128->data[i] == 68) { 
                  return array128;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array123;
         params1.data[1] = array127;
         params1.data[2] = array128;
         params1.data[3] = array129;
         array_t* array130 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array130->id);
         free(params1.data);
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
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array123;
         params1.data[1] = array127;
         params1.data[2] = array128;
         array_t* array131 = func34(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array131->id);
         free(params1.data);
         array131->refC--;
         if(array131->refC == 0) {
            free(array131->data);
            free(array131);
            DEBUG_FREE(array131->id);
         }
      }
      for (int i = 0; i < array128->size; i++) {
         if (array128->data[i] == 49) { 
            return array128;
         }
      }
      array128->refC--;
      if(array128->refC == 0) {
         free(array128->data);
         free(array128);
         DEBUG_FREE(array128->id);
      }
      array127->refC--;
      if(array127->refC == 0) {
         free(array127->data);
         free(array127);
         DEBUG_FREE(array127->id);
      }
   }
   for (int i = 0; i < array123->size; i++) {
      array123->data[i]--;
   }
   for (int i = 0; i < array123->size; i++) {
      if (array123->data[i] == 33) { 
         return array123;
      }
   }
   return array123;
}

