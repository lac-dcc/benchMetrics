#include "program_c.h" 
array_t* func33(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array117;
   if (pCounter > 0) {
      array117 = vars->data[--pCounter];
      array117->refC++;
      DEBUG_COPY(array117->id);
   } else {
      array117 = (array_t*)malloc(sizeof(array_t));
      array117->size = 993;
      array117->refC = 1;
      array117->id = 117;
      array117->data = (unsigned int*)malloc(array117->size*sizeof(unsigned int));
      memset(array117->data, 0, array117->size*sizeof(unsigned int));
      DEBUG_NEW(array117->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array117;
   array_t* array118 = func36(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array118->id);
   free(params0.data);
   unsigned int loop35 = 0;
   unsigned int loopLimit35 = (rand()%loopsFactor)/3 + 1;
   for(; loop35 < loopLimit35; loop35++) {
      for (int i = 0; i < array118->size; i++) {
         array118->data[i]++;
      }
   }
   for (int i = 0; i < array117->size; i++) {
      if (array117->data[i] == 13) { 
         return array117;
      }
   }
   array117->refC--;
   if(array117->refC == 0) {
      free(array117->data);
      free(array117);
      DEBUG_FREE(array117->id);
   }
   return array118;
}

