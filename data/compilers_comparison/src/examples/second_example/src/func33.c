#include "second_example.h" 
array_t* func33(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array149;
   if (pCounter > 0) {
      array149 = vars->data[--pCounter];
      array149->refC++;
      DEBUG_COPY(array149->id);
   } else {
      array149 = (array_t*)malloc(sizeof(array_t));
      array149->size = 335;
      array149->refC = 1;
      array149->id = 149;
      array149->data = (unsigned int*)malloc(array149->size*sizeof(unsigned int));
      memset(array149->data, 0, array149->size*sizeof(unsigned int));
      DEBUG_NEW(array149->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array149;
   array_t* array150 = func36(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array150->id);
   free(params0.data);
   unsigned int loop44 = 0;
   unsigned int loopLimit44 = (rand()%loopsFactor)/3 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      for (int i = 0; i < array149->size; i++) {
         array149->data[i]++;
      }
   }
   for (int i = 0; i < array150->size; i++) {
      if (array150->data[i] == 49) { 
         return array150;
      }
   }
   array149->refC--;
   if(array149->refC == 0) {
      free(array149->data);
      free(array149);
      DEBUG_FREE(array149->id);
   }
   return array150;
}

