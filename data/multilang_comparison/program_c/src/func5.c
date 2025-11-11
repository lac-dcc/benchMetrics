#include "program_c.h" 
array_t* func5(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array121;
   if (pCounter > 0) {
      array121 = vars->data[--pCounter];
      array121->refC++;
      DEBUG_COPY(array121->id);
   } else {
      array121 = (array_t*)malloc(sizeof(array_t));
      array121->size = 506;
      array121->refC = 1;
      array121->id = 121;
      array121->data = (unsigned int*)malloc(array121->size*sizeof(unsigned int));
      memset(array121->data, 0, array121->size*sizeof(unsigned int));
      DEBUG_NEW(array121->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array121;
   array_t* array122 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array122->id);
   free(params0.data);
   unsigned int loop36 = 0;
   unsigned int loopLimit36 = (50)/3 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      for (int i = 0; i < array121->size; i++) {
         array121->data[i]++;
      }
   }
   for (int i = 0; i < array121->size; i++) {
      if (array121->data[i] == 28) { 
         return array121;
      }
   }
   array121->refC--;
   if(array121->refC == 0) {
      free(array121->data);
      free(array121);
      DEBUG_FREE(array121->id);
   }
   return array122;
}

