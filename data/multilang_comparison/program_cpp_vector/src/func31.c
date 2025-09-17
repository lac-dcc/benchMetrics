#include "program_cpp_vector.h" 
array_t* func31(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47->refC++;
      DEBUG_COPY(array47->id);
   } else {
      array47 = (array_t*)malloc(sizeof(array_t));
      array47->size = 124;
      array47->refC = 1;
      array47->id = 47;
      array47->data = (unsigned int*)malloc(array47->size*sizeof(unsigned int));
      memset(array47->data, 0, array47->size*sizeof(unsigned int));
      DEBUG_NEW(array47->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array47;
   array_t* array48 = func35(&params0, loopsFactor);
   DEBUG_RETURN(array48->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array51;
      if (pCounter > 0) {
         array51 = vars->data[--pCounter];
         array51->refC++;
         DEBUG_COPY(array51->id);
      } else {
         array51 = (array_t*)malloc(sizeof(array_t));
         array51->size = 437;
         array51->refC = 1;
         array51->id = 51;
         array51->data = (unsigned int*)malloc(array51->size*sizeof(unsigned int));
         memset(array51->data, 0, array51->size*sizeof(unsigned int));
         DEBUG_NEW(array51->id);
      }
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/4 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array48->size; i++) {
            array48->data[i]--;
         }
         for (int i = 0; i < array51->size; i++) {
            if (array51->data[i] == 7) { 
               return array51;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array47;
      params1.data[1] = array48;
      params1.data[2] = array51;
      array_t* array52 = func46(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array52->id);
      free(params1.data);
      array52->refC--;
      if(array52->refC == 0) {
         free(array52->data);
         free(array52);
         DEBUG_FREE(array52->id);
      }
      array51->refC--;
      if(array51->refC == 0) {
         free(array51->data);
         free(array51);
         DEBUG_FREE(array51->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array47;
      params1.data[1] = array48;
      array_t* array53 = func40(&params1, loopsFactor);
      DEBUG_RETURN(array53->id);
      free(params1.data);
      array53->refC--;
      if(array53->refC == 0) {
         free(array53->data);
         free(array53);
         DEBUG_FREE(array53->id);
      }
   }
   array47->refC--;
   if(array47->refC == 0) {
      free(array47->data);
      free(array47);
      DEBUG_FREE(array47->id);
   }
   return array48;
}

