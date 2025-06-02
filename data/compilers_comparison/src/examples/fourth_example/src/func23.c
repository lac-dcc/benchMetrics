#include "fourth_example.h" 
array_t* func23(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25->refC++;
      DEBUG_COPY(array25->id);
   } else {
      array25 = (array_t*)malloc(sizeof(array_t));
      array25->size = 403;
      array25->refC = 1;
      array25->id = 25;
      array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
      memset(array25->data, 0, array25->size*sizeof(unsigned int));
      DEBUG_NEW(array25->id);
   }
   for (int i = 0; i < array25->size; i++) {
      array25->data[i]++;
   }
   for (int i = 0; i < array25->size; i++) {
      if (array25->data[i] == 99) { 
         return array25;
      }
   }
   for (int i = 0; i < array25->size; i++) {
      array25->data[i]--;
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array25;
   array_t* array26 = func31(&params0, rng(), loopsFactor);
   DEBUG_RETURN(array26->id);
   free(params0.data);
   array26->refC--;
   if(array26->refC == 0) {
      free(array26->data);
      free(array26);
      DEBUG_FREE(array26->id);
   }
   return array25;
}

