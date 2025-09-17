#include "program_julia.h" 
array_t* func23(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array66;
   if (pCounter > 0) {
      array66 = vars->data[--pCounter];
      array66->refC++;
      DEBUG_COPY(array66->id);
   } else {
      array66 = (array_t*)malloc(sizeof(array_t));
      array66->size = 139;
      array66->refC = 1;
      array66->id = 66;
      array66->data = (unsigned int*)malloc(array66->size*sizeof(unsigned int));
      memset(array66->data, 0, array66->size*sizeof(unsigned int));
      DEBUG_NEW(array66->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array66;
   array_t* array67 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array67->id);
   free(params0.data);
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/4 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array67->size; i++) {
         array67->data[i]++;
      }
   }
   for (int i = 0; i < array66->size; i++) {
      if (array66->data[i] == 42) { 
         return array66;
      }
   }
   array67->refC--;
   if(array67->refC == 0) {
      free(array67->data);
      free(array67);
      DEBUG_FREE(array67->id);
   }
   return array66;
}

