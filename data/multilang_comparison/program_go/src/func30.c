#include "program_go.h" 
array_t* func30(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array27;
      if (pCounter > 0) {
         array27 = vars->data[--pCounter];
         array27->refC++;
         DEBUG_COPY(array27->id);
      } else {
         array27 = (array_t*)malloc(sizeof(array_t));
         array27->size = 434;
         array27->refC = 1;
         array27->id = 27;
         array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
         memset(array27->data, 0, array27->size*sizeof(unsigned int));
         DEBUG_NEW(array27->id);
      }
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         for (int i = 0; i < array27->size; i++) {
            array27->data[i]--;
         }
         for (int i = 0; i < array27->size; i++) {
            if (array27->data[i] == 1) { 
               return array27;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array27;
      array_t* array28 = func42(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array28->id);
      free(params0.data);
      array28->refC--;
      if(array28->refC == 0) {
         free(array28->data);
         free(array28);
         DEBUG_FREE(array28->id);
      }
      array27->refC--;
      if(array27->refC == 0) {
         free(array27->data);
         free(array27);
         DEBUG_FREE(array27->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array39 = func34(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array39->id);
      free(params0.data);
      array39->refC--;
      if(array39->refC == 0) {
         free(array39->data);
         free(array39);
         DEBUG_FREE(array39->id);
      }
   }
   array_t* array45;
   if (pCounter > 0) {
      array45 = vars->data[--pCounter];
      array45->refC++;
      DEBUG_COPY(array45->id);
   } else {
      array45 = (array_t*)malloc(sizeof(array_t));
      array45->size = 841;
      array45->refC = 1;
      array45->id = 45;
      array45->data = (unsigned int*)malloc(array45->size*sizeof(unsigned int));
      memset(array45->data, 0, array45->size*sizeof(unsigned int));
      DEBUG_NEW(array45->id);
   }
   return array45;
}

