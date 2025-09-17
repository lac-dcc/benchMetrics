#include "program_c.h" 
array_t* func17(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array136;
   if (pCounter > 0) {
      array136 = vars->data[--pCounter];
      array136->refC++;
      DEBUG_COPY(array136->id);
   } else {
      array136 = (array_t*)malloc(sizeof(array_t));
      array136->size = 436;
      array136->refC = 1;
      array136->id = 136;
      array136->data = (unsigned int*)malloc(array136->size*sizeof(unsigned int));
      memset(array136->data, 0, array136->size*sizeof(unsigned int));
      DEBUG_NEW(array136->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array136;
   array_t* array137 = func24(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array137->id);
   free(params0.data);
   unsigned int loop40 = 0;
   unsigned int loopLimit40 = (rand()%loopsFactor)/3 + 1;
   for(; loop40 < loopLimit40; loop40++) {
      for (int i = 0; i < array137->size; i++) {
         array137->data[i]++;
      }
   }
   for (int i = 0; i < array136->size; i++) {
      if (array136->data[i] == 4) { 
         return array136;
      }
   }
   array137->refC--;
   if(array137->refC == 0) {
      free(array137->data);
      free(array137);
      DEBUG_FREE(array137->id);
   }
   return array136;
}

