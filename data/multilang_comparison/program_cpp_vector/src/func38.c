#include "program_cpp_vector.h" 
array_t* func38(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array77;
      if (pCounter > 0) {
         array77 = vars->data[--pCounter];
         array77->refC++;
         DEBUG_COPY(array77->id);
      } else {
         array77 = (array_t*)malloc(sizeof(array_t));
         array77->size = 416;
         array77->refC = 1;
         array77->id = 77;
         array77->data = (unsigned int*)malloc(array77->size*sizeof(unsigned int));
         memset(array77->data, 0, array77->size*sizeof(unsigned int));
         DEBUG_NEW(array77->id);
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/4 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array77->size; i++) {
            array77->data[i]--;
         }
         for (int i = 0; i < array77->size; i++) {
            if (array77->data[i] == 24) { 
               return array77;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array77;
      array_t* array78 = func46(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array78->id);
      free(params0.data);
      array78->refC--;
      if(array78->refC == 0) {
         free(array78->data);
         free(array78);
         DEBUG_FREE(array78->id);
      }
      array77->refC--;
      if(array77->refC == 0) {
         free(array77->data);
         free(array77);
         DEBUG_FREE(array77->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array79 = func40(&params0, loopsFactor);
      DEBUG_RETURN(array79->id);
      free(params0.data);
      array79->refC--;
      if(array79->refC == 0) {
         free(array79->data);
         free(array79);
         DEBUG_FREE(array79->id);
      }
   }
   array_t* array80;
   if (pCounter > 0) {
      array80 = vars->data[--pCounter];
      array80->refC++;
      DEBUG_COPY(array80->id);
   } else {
      array80 = (array_t*)malloc(sizeof(array_t));
      array80->size = 36;
      array80->refC = 1;
      array80->id = 80;
      array80->data = (unsigned int*)malloc(array80->size*sizeof(unsigned int));
      memset(array80->data, 0, array80->size*sizeof(unsigned int));
      DEBUG_NEW(array80->id);
   }
   return array80;
}

