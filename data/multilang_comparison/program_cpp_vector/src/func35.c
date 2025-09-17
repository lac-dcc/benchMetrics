#include "program_cpp_vector.h" 
array_t* func35(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array49;
   if (pCounter > 0) {
      array49 = vars->data[--pCounter];
      array49->refC++;
      DEBUG_COPY(array49->id);
   } else {
      array49 = (array_t*)malloc(sizeof(array_t));
      array49->size = 491;
      array49->refC = 1;
      array49->id = 49;
      array49->data = (unsigned int*)malloc(array49->size*sizeof(unsigned int));
      memset(array49->data, 0, array49->size*sizeof(unsigned int));
      DEBUG_NEW(array49->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array49;
   array_t* array50 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array50->id);
   free(params0.data);
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/4 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array50->size; i++) {
         array50->data[i]++;
      }
   }
   for (int i = 0; i < array49->size; i++) {
      if (array49->data[i] == 32) { 
         return array49;
      }
   }
   array49->refC--;
   if(array49->refC == 0) {
      free(array49->data);
      free(array49);
      DEBUG_FREE(array49->id);
   }
   return array50;
}

