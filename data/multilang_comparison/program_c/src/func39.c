#include "program_c.h" 
array_t* func39(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array56;
   if (pCounter > 0) {
      array56 = vars->data[--pCounter];
      array56->refC++;
      DEBUG_COPY(array56->id);
   } else {
      array56 = (array_t*)malloc(sizeof(array_t));
      array56->size = 143;
      array56->refC = 1;
      array56->id = 56;
      array56->data = (unsigned int*)malloc(array56->size*sizeof(unsigned int));
      memset(array56->data, 0, array56->size*sizeof(unsigned int));
      DEBUG_NEW(array56->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array56;
   array_t* array57 = func41(&params0, loopsFactor);
   DEBUG_RETURN(array57->id);
   free(params0.data);
   array56->refC--;
   if(array56->refC == 0) {
      free(array56->data);
      free(array56);
      DEBUG_FREE(array56->id);
   }
   return array57;
}

